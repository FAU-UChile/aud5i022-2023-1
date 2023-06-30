/**
 * This is a simple sound file player. Use the mouse position to control playback
 * speed, amplitude and stereo panning.
 */

import processing.sound.*;

SoundFile soundfile;

import processing.serial.*;
int val;

Serial myPort;

void setup() {
  size(640, 360);
  background(255);

  String portName = Serial.list()[1];
  myPort = new Serial(this, portName, 9600);

  // Load a soundfile
  soundfile = new SoundFile(this, "baserap.mp3");

  // These methods return useful infos about the file
  println("SFSampleRate= " + soundfile.sampleRate() + " Hz");
  println("SFSamples= " + soundfile.frames() + " samples");
  println("SFDuration= " + soundfile.duration() + " seconds");

  // Play the file in a loop
  soundfile.loop();
}


void draw() {
  // Map mouseX from 0.25 to 4.0 for playback rate. 1 equals original playback speed,
  // 2 is twice the speed and will sound an octave higher, 0.5 is half the speed and
  // will make the file sound one ocative lower.
  float playbackSpeed = map(mouseX, 0, width, 0.25, 4.0);
  soundfile.rate(playbackSpeed);

  // Map mouseY from 0.2 to 1.0 for amplitude
  float amplitude = map(mouseY, 0, width, 0.2, 1.0);
  soundfile.amp(amplitude);

  // Map mouseY from -1.0 to 1.0 for left to right panning
  float panning = map(mouseY, 0, height, -1.0, 1.0);
  soundfile.pan(panning);


  if ( myPort.available() > 0) {  // If data is available,
    val = myPort.read();         // read it and store it in val
  }
  print(val);
  if (val == 0) {              // If the serial value is 0,
    soundfile.stop();
  } else if (val == 1) {           // If the serial value is not 0,
    soundfile.play();
  }
}
