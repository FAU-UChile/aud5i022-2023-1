//Configuraciones para compatibilizar con Arduino
Serial serialPort;
String portName = "COM3";
int baudRate = 9600;

//Variables a utilizar en el codigo
String receivedData = "";
String currentQuestion = "";
int correctas = 0;
int incorrectas = 0;
int valorPerilla = 0;

//Para mostrar las imágenes
PImage[] img;
int totalImagenes = 3; // total de imágenes
boolean mostrarImagenes = false;

void setup() {
  size(600, 600); //tamaño (600x600) y colores de interfaz (salmon)
  background(250, 120, 120);
  
  serialPort = new Serial(this, portName, baudRate); //para cargar las imagenes desde la carpeta
  img = new PImage[totalImagenes];
  for (int i = 0; i < totalImagenes; i++) {
    img[i] = loadImage("imga" + ".png");
    img[i] = loadImage("imgb" + ".png");
    img[i] = loadImage("imgc" + ".png");
  }
}

void draw() {
  while (serialPort.available() > 0) { //si el serialport está disponible
    char receivedChar = serialPort.readChar(); //leer información que proporciona
    
    if (receivedChar == '\n') { // "\n" es un salto de linea. Lo que quiere decir que se lee una frase completa con información
      processSerialData(receivedData);
    } else {
      receivedData += receivedChar;
    }
  }
  
  background(250, 120, 120); // Fondo usado para tapar la pregunta anterior, y poder mostrar la siguiente pregunta
  textSize(20);
  fill(255);
  textAlign(LEFT, TOP);
  text(currentQuestion, 20, 50); // Muestra solo la pregunta actual
  
  String counterText = "Respuestas correctas: " + correctas + " - Respuestas incorrectas: " + incorrectas; // para mostrar la frase que dice " Respuestas correctas: X - Respuestas incorrectas: Y"
  textAlign(RIGHT, BOTTOM);
  text(counterText, width - 20, height - 20); // Muestra el contador en la esquina inferior derecha
  
  // Verificar si se alcanzaron 10 respuestas correctas
  if (correctas == 10 && !mostrarImagenes) {
    mostrarImagenes = true;
    delay(1000); // Espera 1 segundo antes de mostrar las imágenes
  } else if (correctas == 10 && mostrarImagenes) {
    background(0); // Limpia el fondo
    
    // Calcula el índice de la imagen a mostrar según la posición de la perilla
    int indiceImagen = int(map(valorPerilla, 0, 1023, 0, totalImagenes - 1));
    
    // Muestra la imagen actual
    image(img[indiceImagen], 0, 0, width, height);
    
    if (correctas == 10) { //muestra un mensaje de felicitaciones por encima de las imagenes (esto ocurre solo si se obtienen los 10 puntos)
    textAlign(CENTER, CENTER);
    textSize(30);
    fill(0); 
    text("Felicitaciones!! Tuviste 10 correctas:D", width / 2, height / 2);
  }
  }
}

void processSerialData(String data) { //para procesar el string con la información que es leida desde arduino
  currentQuestion = data;
  receivedData = "";
  println(data); //con esto se "imprime" dentro de processing. Es decir, se traspasa la información de arduino a la consola de processing
  textSize(20);
  fill(255);
  text(data, 20, 50);
  
  if (data.startsWith("Respuestas correctas:")) { //para poder rellenar la frase de " Respuestas correctas: X - Respuestas incorrectas: Y" con los numeros correspondientes
    String[] values = split(data, ' ');
    correctas = int(values[2]);
    incorrectas = int(values[6]);
  }
  
  receivedData = ""; //con esto se reinicia la información recibida, así el programa se prepara para recibir otra informacion
}
