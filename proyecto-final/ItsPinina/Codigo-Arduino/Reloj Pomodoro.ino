// Reloj Pomodoro Adrian Vasquez Camila Donoso
// Entrega Proyecto Final

#define work 0
#define shortBreak 1
#define longBreak 2

int state = work;
int counter = 0;


const int buttonPin = 2;

const int buzzer = 3;                  // Sonido
const int workPeriodLED = 4;           // Periodo de Trabajo
const int shortBreakLED = 5;           // Periodo corto de Descanso
const int longBreakLED  =  6;          // Periodo largo de Descanso

//Indicador de numero de "Pomodoros" terminados 
const int pom1LED =   7;                 
const int pom2LED =   8;
const int pom3LED =   9;
const int pom4LED =   10;

void setup() {

  pinMode(buttonPin, INPUT);
  

  pinMode(buzzer, OUTPUT);
  pinMode(workPeriodLED, OUTPUT);
  pinMode(shortBreakLED, OUTPUT);
  pinMode(longBreakLED, OUTPUT);
  pinMode(pom1LED, OUTPUT);
  pinMode(pom2LED, OUTPUT);
  pinMode(pom3LED, OUTPUT);
  pinMode(pom4LED, OUTPUT);
  while(digitalRead(buttonPin) == 1);    //Espera hasta que se presiona el boton para iniciar el tiempo  
}

void loop() {
  if(state == work){
    workMode(); 
  }
  if(state == shortBreak){
    shortBreakMode();
  }
  if(state == longBreak){
    longBreakMode();
  }
}

void workMode(void){
  pomodoroStatus();
  digitalWrite(workPeriodLED, HIGH);
  digitalWrite(shortBreakLED, LOW);
  digitalWrite(longBreakLED, LOW);
  delay(1500000);          //25 minutos de espera
  counter++;
  if(counter <= 3){
    state = shortBreak;      //Una vez se acaba el tiempo de trabajo se inicia el tiempo de descanso
  }
   
  if(counter == 4){
    state = longBreak;
  }
}

void shortBreakMode(void){
  pomodoroStatus();
  digitalWrite(workPeriodLED, LOW);
  digitalWrite(shortBreakLED, HIGH);
  digitalWrite(longBreakLED, LOW);
  digitalWrite(buzzer, HIGH);
  delay(1000);
  digitalWrite(buzzer, LOW);        
  delay(298000);   //5 Minutos  
  digitalWrite(buzzer, HIGH);
  delay(1000);
  digitalWrite(buzzer, LOW);
  if(counter<=3){
    state = work;
  }

}

void longBreakMode(void){
  pomodoroStatus();
  digitalWrite(workPeriodLED, LOW);
  digitalWrite(shortBreakLED, LOW);
  digitalWrite(longBreakLED, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(1000);
  digitalWrite(buzzer, LOW);
  delay(1198000);     //Alrededor de 20 minutos
  digitalWrite(buzzer, HIGH);
  delay(1000);
  digitalWrite(buzzer, LOW);
  //Enciende las 4 luces led cuando 4 "Pomodoros" hayan sido completados   
  digitalWrite(workPeriodLED, HIGH);
  digitalWrite(shortBreakLED, HIGH);
  digitalWrite(longBreakLED, HIGH);
  while(digitalRead(buttonPin) == 1);  //Una vez que 4 "Pomodoros" hayan sido completados se reiniciara el tiempo cuando se presione el boton 
  //Reinicia todas las variables y se pone en modo trabajo 
  counter = 0;
  state = work;  
  
}

//Representacion del numero de "Pomodoros" 
void pomodoroStatus(void){
  if(counter == 0){
    digitalWrite(pom1LED, LOW);
    digitalWrite(pom2LED, LOW);
    digitalWrite(pom3LED, LOW);
    digitalWrite(pom4LED, LOW);
    
  }
  if(counter == 1){
    digitalWrite(pom1LED, HIGH); 
  }
  if(counter == 2){
    digitalWrite(pom1LED, HIGH);
    digitalWrite(pom2LED, HIGH);
  }
  if(counter == 3){
    digitalWrite(pom1LED, HIGH);
    digitalWrite(pom2LED, HIGH);
    digitalWrite(pom3LED, HIGH);
  }
  if(counter ==4){
    digitalWrite(pom1LED, HIGH);
    digitalWrite(pom2LED, HIGH);
    digitalWrite(pom3LED, HIGH);
    digitalWrite(pom4LED, HIGH);
  }

}
