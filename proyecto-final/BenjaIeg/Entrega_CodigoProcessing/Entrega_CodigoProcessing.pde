import processing.sound.*; //extraer comandos de libreria "Sound"

SoundFile soundfile;
SoundFile soundfile2;
SoundFile efecto1;
SoundFile efecto2;

import processing.serial.*;  //extrar comandos de libreria "serial""

int potCentVal;  //potenciometro central o lineal si es que instalaste uno para usar como CrossFader
int switchISt;   //interruptor izquierda
int potIzqVal;   //potenciometro izquierda
int switchDSt;   //interruptor Derecha
int potDerVal;   //potenciometro derecha
int puls1;       //pulsador izquierda
int puls2;       // pulsador derecha

Serial myPort;

void setup() {
  size(640, 360);
  background(255);

  String portName = Serial.list()[4];    //debes cambiarlo segun el puerto serial al cual el arduino este conectado
  myPort = new Serial(this, portName, 9600);

  // Load a soundfile, Esto lee los archivos que esten adjuntos  en la carpeta "Data" que esta con este archivo y le puedes poner solo el nombre y su extension de archivo
  soundfile = new SoundFile(this, "baserap.mp3");  // si deseas leer un archivo desde otro lugar en el computador, debes cambiar el nombre "baserap.mp3" por la direccion en donde esta el archivo
  soundfile2 = new SoundFile(this, "vocal.mp3");
  efecto1 = new SoundFile(this, "scratch1.wav");
  efecto2 = new SoundFile(this, "scratch2.wav");

  // Cuando terminen los archivos, empiezan denuevo
  soundfile.loop();
  soundfile2.loop();
}

void draw() {
  if (myPort.available() > 0) {  //si el puerto manda informacion
    String data = myPort.readStringUntil('\n');
    if (data != null) {
      data = data.trim();
      String[] values = split(data, ",");
      if (values.length >= 7) {
        potCentVal = int(values[0]);
        switchISt = int(values[1]);
        potIzqVal = int(values[2]);
        switchDSt = int(values[3]);
        potDerVal = int(values[4]);
        puls1 = int(values[5]);
        puls2 = int(values[6]);
        println("CrossFade: " + potCentVal + " | InterruptorIzq: " + switchISt  + " | PerillaIzq: " + potIzqVal + " | InterruptorDer: " + switchDSt + " | Pulsador1: " + puls1 + " | Pulsador2: " + puls2);
      }
    }
  }
// crossfader con la perilla, este maneja los volumenes de ambos "soundfile" ,si el volumen esta al maximo en uno entonces el otro esta en 0, y si este esta almedio, suenan ambos.
  float crossfade = map(potCentVal, 0, 1023, 0, 1);
  soundfile.amp(1 - crossfade);
  soundfile2.amp(crossfade);
  //Seccion izquierda
  //el interruptor izquierdo dara play a "soundfile"
  if (switchISt == 1) {
    if (!soundfile.isPlaying()) { //solo puede sonar 1 archivo apodado "soundfile" a la vez
      soundfile.play();
    }
  }
  
  //la perilla izquierda modifica la velocidad de "soundfile" acorde a su posicion
  float playbackSpeed = map(potIzqVal, 0, width, 0.25, 1.0);
  soundfile.rate(playbackSpeed);
  
  //el interruptor izquierdo tambien podra parar la musica
  if (switchISt == 0) {  
    if (soundfile.isPlaying()) {
      soundfile.pause();
    }
  }
  //interruptor de la derecha hara play en soundfile 2
  
  //Seccion Derecha
  if (switchDSt == 1) {
    if (!soundfile2.isPlaying()) { //solo sonara 1 soundfile2, de esta manera no suena muchas veces por cada 1 que lanze interruptorDer
      soundfile2.play();
    }
  }
  //perilla derecha modificara la velocidad de soundfile 2
  float playbackSpeed2 = map(potDerVal, 0, width, 0.25, 1.0);
  soundfile2.rate(playbackSpeed2);
  // interrupor de la derecha parara la musica de soundfile 2
  if (switchDSt == 0) {
    if (soundfile2.isPlaying()) {
      soundfile2.pause();
    }
  }
  // pulsador 1 tocara efecto 1 mientras se presione
  if (puls1 == 1) {
    if (!efecto1.isPlaying()) {
      efecto1.play();
    }
  }
  //pulsador cuando deje de ser presionado hara que se detenga la cancion, sin que esta guarde la ubicacion de donde termino
  if (puls1 == 0) {
    if (efecto1.isPlaying()) {
      efecto1.stop();
    }
  }
  // pulsador 2 tocara efecto 2 mientras se presione
   if (puls2 == 1) {
    if (!efecto2.isPlaying()) {
      efecto2.play();
    }
  }
  //se detendra efecto2 en cuanto deje de ser presionado
  if (puls2 == 0) {
    if (efecto2.isPlaying()) {
      efecto2.stop();
    }
  }
}
