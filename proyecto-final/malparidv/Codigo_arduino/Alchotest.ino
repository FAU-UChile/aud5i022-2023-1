//hicimos este codigo para hacer un alchotest con un sensor mq3 y un seeeduino XIAO
//recuerda instalar la placa seeeduino xiao SM1 en arduino

#define Sober 500   // Define max value that we consider sober
#define Drunk 1000  // Define min value that we consider drunk
//el intervalo entre estos valores se considera estar "chistoso" pero no estar muy curao.
#define MQ3pin 0

const int buzzerPin = 8;
const int greenLedPin = 3;
const int yellowLedPin = 4;
const int redLedPin = 5;

float sensorValue;  // variable to store sensor value

void setup() {
  Serial.begin(9600); // sets the serial port to 9600
  Serial.println("MQ3 warming up!");
  delay(20000); // allow the MQ3 to warm up

  // Set pin modes
  pinMode(buzzerPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);

  // Make the buzzer sound 2 times for half a second
  for (int i = 0; i < 2; i++) {
    digitalWrite(buzzerPin, HIGH);
    delay(500);
    digitalWrite(buzzerPin, LOW);
    delay(500);
  }
}

void loop() {
  sensorValue = analogRead(MQ3pin); // read analog input pin 0

  Serial.print("Sensor Value: ");
  Serial.print(sensorValue);

  // Determine the status and control LEDs
  if (sensorValue < Sober) {
    digitalWrite(greenLedPin, HIGH);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(redLedPin, LOW);
    Serial.println("  |  Status: Stone Cold Sober");
  } else if (sensorValue >= Sober && sensorValue < Drunk) {
    digitalWrite(greenLedPin, LOW);
    digitalWrite(yellowLedPin, HIGH);
    digitalWrite(redLedPin, LOW);
    Serial.println("  |  Status: Drinking but within legal limits");
  } else {
    digitalWrite(greenLedPin, LOW);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(redLedPin, HIGH);
    Serial.println("  |  Status: DRUNK");
  }

  // Make the buzzer sound for half a second
  digitalWrite(buzzerPin, HIGH);
  delay(500);
  digitalWrite(buzzerPin, LOW);

  delay(2000); // wait 2s for next reading
}
