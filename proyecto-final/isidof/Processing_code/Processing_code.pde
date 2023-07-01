import processing.serial.*;
import processing.sound.*;

Serial arduino; // Serial object for communication with Arduino
SoundFile sound; // Variable to store the sound file
float volume; // Variable to control the sound volume
float rate; // Variable to control the playback speed

float softpotValue; // Variable to store the value of the softpot
float lastSoftpotValue; // Variable to store the last value of the softpot

void setup() {
  size(400, 200);
  
  // Replace "COM3" with the name of the port to which your Arduino Uno is connected
  arduino = new Serial(this, "COM3", 9600); // Change "COM3" to the appropriate port name
  
  sound = new SoundFile(this, "Jamiroquai-Virtual-Insanity.wav"); // Replace with the path to your mono sound file
  sound.loop(); // Loop the sound file
  
  volume = 0.0; // Initial volume of the sound
  rate = 1.0; // Initial playback speed of the sound (1.0 = normal speed)
}

void draw() {
  // Read the value from the softpot connected to Arduino
  while (arduino.available() > 0) {
    String value = arduino.readStringUntil('\n');
    value = value.trim();

    if (value.length() > 0) {
      softpotValue = float(value);
      println(softpotValue); // Print the softpot value for debugging
    }
  }

  // If the softpot value has changed, apply the effects
  if (softpotValue != lastSoftpotValue) {
    // Apply effects based on the softpot value
    volume = map(softpotValue, 0, 1023, 0.0, 0.48);
    rate = map(softpotValue, 0, 1023, 0.8, 1.18);

    // Apply the effects to the sound
    sound.amp(volume);
    sound.rate(rate);
    
    // Update the last softpot value
    lastSoftpotValue = softpotValue;
    
    // Wait for 100 milliseconds before the next update
    delay(1000);
  }

  // Display the current state of the effects on the screen
  background(255);
  fill(0);
  textAlign(CENTER);
  text("Volume: " + nf(volume, 1, 2), width / 2, height / 2 - 30);
  text("Playback Speed: " + nf(rate, 1, 2), width / 2, height / 2 + 30);
}
