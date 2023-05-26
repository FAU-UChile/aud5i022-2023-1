# aud5i022-2023-control

## pauta

- punto base
- asistencia
- materiales
    Arduino Uno
    potenciador
    pulsador
    2 led rojos
    1 led verde
    9 cables
    
- circuito

-Para facilitar el proceso de hacer las conecciones vamos a conectar los 5v y un gnd del arduino a los positivos y negativos de la protoboard

-los leds deben colocarse en la protoboard y conectar sus polos negativos con resistencias al negativo de la protoboard

-los positivos de los leds los conectaremos a los pines digitales 13,12 y 11.

-conectaremos la primera patita del potenciometro a 5v y la ultima a gnd, mientras que la patita de al medio debe conectarse al pin A0 del arduino

-El boton lo pondremos al final de la protoboard para que sea más facil presionarlo sin tomar con ninguno de los cables

- código

// Desarrollador por: Benjamin Espinoza, Diego López, Antonia en FAU U de   Chile


//damos indicaciones al arduino de en donde estan conectados los LEDs, el potenciometro y el boton.
int led1 = 13;   //el led 1 que es rojo esta conectado al pin 13
int led2 = 12;   //el led 2 que es rojo esta conectado al pin 12
int led3 = 11;   //el led 3 que es verde esta conectado al pin 11
int pot = A0;    // el potenciometro esta conectado al pin A0
int button = 2;  //el boton esta conectado al pin A2
int mode = 0;

void setup() {

  //Establecemos en que modo estan los pines, si en modo de entrada o de salida
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(pot, INPUT);
  pinMode(button, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {


  int pot_value = analogRead(pot);                    //le decimos que queremos leer el valor de resistencia de entrada del potenciometro
  int delay_time = map(pot_value, 0, 1023, 0, 1000);  //le decimos que le pondremos el nombre de delay_time al valor que leyo del potenciometro
  int button_state = digitalRead(button);             //le decimos que queremos leer la activacion del boton
                                                      //la primera funcion es la que estara ocurriendo mientras no precionemos el boton
  if (button_state == LOW) {
    // Botón presionado, cambiar el modo
    mode = !mode;  // la funcion de mode nos ayudara para cambiar a si estamos utilizando solo el potenciometro para ajustar la velocidad o tambien el boton para inciar la otra secuencia
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    delay(50);  // Debounce
  }

  if (mode == 0) {
    // Modo LED intermitente
//si giramos el potenciometro podremos variar la velocidad del titileo entre leds
    digitalWrite(led1, HIGH);
    delay(delay_time);
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    delay(delay_time);
    digitalWrite(led2, LOW);

  } else {
    // Modo LED de botón presionado

    //iniciara la secuencia tipo semaforo de formula uno
    digitalWrite(led3, LOW);
    digitalWrite(led2, HIGH);

    delay(delay_time);
    digitalWrite(led3, LOW);
    digitalWrite(led1, HIGH);
    delay(delay_time);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);

    digitalWrite(led3, HIGH);
    delay(delay_time);
  }

  Serial.println(pot_value);
}
- imágenes
- conclusiones

El uso del potenciador fue todo un desafio, pues no usamos su cualidad como resistor si no como perilla en cuanto a la velocidad de las luces intermitentes.
Entonces empezamos desde 0 usando integrando primero la perilla, y luego integramos el uso de pulsador y la variacion que esta implicaria en el codigo y
funcionamiento.
Fue un desafio ocupar el contenido aprendido en clases para realizar un sistema especifico de luces en el codigo, pues entender el lenguaje fue como resolver
un puzzle el cual llevaba hartos intentos resolver, por otro lado fue una experiencia bastante grata obtener resultados.

inspiracion: proyecto de estudiante del semestre pasado

* https://github.com/jibbx/AV-ERDDEL

![alt](foto.jpg "foto en clases")
