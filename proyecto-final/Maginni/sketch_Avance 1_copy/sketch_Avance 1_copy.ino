//Avance proyecto instrumento musical arduino
void setup() {

pinMode(7, OUTPUT); // This line is nor really necessary for the program to function, you can experiment by removing this line ad running the code

}

void loop() {

// the tone function takes three parameters (the pin number, the tone frequency, the number of seconds to sound)

//Escala Jónica

//tone(7, 440, 2000); //A
tone(7, 523, 2000); //C

delay(500);

//tone(7, 494, 2000); //B
tone(7, 587, 2000); //D

delay(500);

//tone(7, 523, 2000); //C
tone(7, 659, 2000); //E

delay(500);

//tone(7, 587, 2000); //D
tone(7, 698, 2000); //F

delay(500);

//tone(7, 659, 2000); //E
tone(7, 784, 2000); //G

delay(500);

//tone(7, 698, 2000); //F
tone(7, 880, 2000); //A

delay(500);

//tone(7, 784, 2000); //G
tone(7, 494, 2000); //B

delay(500);

//tone(7, 880, 2000); //A

delay(500);

}