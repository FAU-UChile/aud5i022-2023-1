# aud5i022-2023-control

## pauta

- punto base
- asistencia
- materiales
- circuito
- código
- imágenes
- conclusiones

¿De que trata el Proyecto?:

Desarrollamos un circuito que tiene 3 leds, 2 que son rojos y uno verde,.Cuando inicia el codigo los leds estan un modo de espera, en donde la luz pasa por todos los leds, como en una pantalla de espera, cuando se aprieta el boton puede entrar en uno de los 2 modos, el primer modo es el que se obtiene cuando se aprieta el boton en alguno de los leds rojos, este modo lo que hace es que intercambian el encendido solo los leds rojos, mientras que si apretamos el boton cuando la luz esta en el verde, se inicia el modo de semaforo de formula uno, en donde se prende primero el led rojo superior, se enciendo el inferio y luego se apagan para que se prenda el led verde, al igual que un semaforo de formula uno.

Materiales: -2 leds rojos -1 led verde -1 potenciometro -1 boton pulsador -4 resistencia de 1K -1 protoboard

    aprox 9 cables

Conecciones:

-Para facilitar el proceso de hacer las conecciones vamos a conectar los 5v y un gnd del arduino a los positivos y negativos de la protoboard

-los leds deben colocarse en la protoboard y conectar sus polos negativos con resistencias al negativo de la protoboard

-los positivos de los leds los conectaremos a los pines digitales 13,12 y 11.

-conectaremos la primera patita del potenciometro a 5v y la ultima a gnd, mientras que la patita de al medio debe conectarse al pin A0 del arduino

-El boton lo pondremos al final de la protoboard para que sea más facil presionarlo sin tomar con ninguno de los cables

-Conectaremos una de las patitas del boton al 5v conectaremos la otra patita del boton al gnd, pero dejaremos un espacio entre medio en la protoboard porque ahi conectaremos un cable que va hacia el pin digital 2

Conclusiones: La experiencia en clases nos inspiro para realizar este proyecto, decidimos integrar todo lo que practicamos a medida que vanzaba el curso,. Desarrollar este proyecto fue muy divertido aunque nos costo un poco conectar el potenciometro porque nos confundiamos de coneccion entre pin digital y analogo, o tambien porque Diego es dislexico y a veces escribe mal alguna palabra en el codigo.

Pese a las dificultados aprendimos mucho y conseguimos que el proyecto funcionara perfectamente.

// Desarrollador por: Benjamin Espinoza, Diego López, Antonia Vásquez en FAU U de Chile

//damos indicaciones al arduino de en donde estan conectados los LEDs, el potenciometro y el boton. int led1 = 13; //el led 1 que es rojo esta conectado al pin 13 int led2 = 12; //el led 2 que es rojo esta conectado al pin 12 int led3 = 11; //el led 3 que es verde esta conectado al pin 11 int pot = A0; // el potenciometro esta conectado al pin A0 int button = 2; //el boton esta conectado al pin A2 int mode = 0;

void setup() {

//Establecemos en que modo estan los pines, si en modo de entrada o de salida pinMode(led1, OUTPUT); pinMode(led2, OUTPUT); pinMode(led3, OUTPUT); pinMode(pot, INPUT); pinMode(button, INPUT_PULLUP); Serial.begin(9600); }

void loop() {

int pot_value = analogRead(pot); //le decimos que queremos leer el valor de resistencia de entrada del potenciometro int delay_time = map(pot_value, 0, 1023, 0, 1000); //le decimos que le pondremos el nombre de delay_time al valor que leyo del potenciometro int button_state = digitalRead(button); //le decimos que queremos leer la activacion del boton //la primera funcion es la que estara ocurriendo mientras no precionemos el boton if (button_state == LOW) { // Botón presionado, cambiar el modo mode = !mode; // la funcion de mode nos ayudara para cambiar a si estamos utilizando solo el potenciometro para ajustar la velocidad o tambien el boton para inciar la otra secuencia digitalWrite(led1, LOW); digitalWrite(led2, LOW); digitalWrite(led3, LOW); delay(50); // Debounce }

if (mode == 0) { // Modo LED intermitente //si giramos el potenciometro podremos variar la velocidad del titileo entre leds digitalWrite(led1, HIGH); delay(delay_time); digitalWrite(led1, LOW); digitalWrite(led2, HIGH); delay(delay_time); digitalWrite(led2, LOW);

} else { // Modo LED de botón presionado

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

Serial.println(pot_value); }
