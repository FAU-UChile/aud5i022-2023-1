

import processing.sound.*;

SoundFile soundfile;

import processing.serial.*;
int val;

Serial myPort;

void setup() {
  size(640, 360);
  background(255);

  String portName = Serial.list()[4];
  myPort = new Serial(this, portName, 9600);

  // Load a soundfile
  soundfile = new SoundFile(this, "amenbreak.mp3");

  // These methods return useful infos about the file
  println("SFSampleRate= " + soundfile.sampleRate() + " Hz");  
  println("SFSamples= " + soundfile.frames() + " samples");
  println("SFDuration= " + soundfile.duration() + " seconds");

  // Play the file in a loop
  soundfile.loop();
}


void draw() {

if ( myPort.available() > 0) {  // si el serial manda informacion,
    val = myPort.read();         // leer lo que hay manda el serial(arduino)
  }
  print(val);  //muestra los datos abajo 
  
   // float playbackSpeed = map(val, 2, width, 0.25, 8.0);
 // soundfile.rate(playbackSpeed);
  
  if (val == 1) {              // si el valor es 1
    if (!soundfile.isPlaying()){
    soundfile.play();          //reproduce la cancion
  } 
  }
  
    float playbackSpeed = map(val, 2, width, 0.25, 8.0);   //la perilla  cambia los parametros de velocidad de la cancion
  soundfile.rate(playbackSpeed);
  
  if (val == 0) {  
      if (soundfile.isPlaying()){
    soundfile.pause();         //si el valor es 0, para la cancion(esta volvera a empezar desde el inicio
      }
  }
}
