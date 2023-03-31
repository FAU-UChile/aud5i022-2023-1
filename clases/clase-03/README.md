# clase-03

viernes 31 marzo 2023, presencial

## repaso clase anterior y programa hoy (15 min)

la clase pasada aprendimos:

- señales analógicas y digitales
- computadores y microcontroladores
- programar semáforo usando Processing

hoy aprenderemos:

- electricidad y magnetismo
- componentes eléctricos
- circuitos eléctricos
- instalación de software para el curso

## electricidad y magnetismo (30 min)

- [electrón](https://es.wikipedia.org/wiki/Electr%C3%B3n): partícula subatómica con una carga negativa.

- [electromagnetismo](https://es.wikipedia.org/wiki/Electromagnetismo): interacción de partículas cargadas con campos eléctricos y magnéticos.

- [4 ecuaciones de Maxwell](https://es.wikipedia.org/wiki/Ecuaciones_de_Maxwell)

- [voltaje](<https://es.wikipedia.org/wiki/Tensi%C3%B3n_(electricidad)>): Su unidad es Volt (V).

- [corriente](https://es.wikipedia.org/wiki/Corriente_el%C3%A9ctrica): su unidad es Ampère (A).

- [resistencia](https://es.wikipedia.org/wiki/Resistencia_el%C3%A9ctrica): oposición al flujo de corriente eléctrica. Su unidad es Ohm (Ω).

- [potencia](https://es.wikipedia.org/wiki/Potencia_el%C3%A9ctrica): energía consumida en un periodo de tiempo. Su unidad es Watt (W).

- [ley de Ohm](https://es.wikipedia.org/wiki/Ley_de_Ohm): V = I \* R

## componentes eléctricos (30 minutos)

- [resistor](https://es.wikipedia.org/wiki/Resistor): componente de 2 terminales que se puede conectar entre dos terminales de un circuito eléctrico para oponer resistencia al paso de corriente.

- [potenciómetro](https://es.wikipedia.org/wiki/Potenci%C3%B3metro): componente de 3 terminales, de resistencia variable. la resistencia entre los terminales extremos es fija, y entre cualquier extremo y el centro es variable según su posición mecánica.

- [botón](<https://es.wikipedia.org/wiki/Bot%C3%B3n_(dispositivo)>): componente de 2 terminales, permite

- [LED](https://es.wikipedia.org/wiki/Led): diodo emisor de luz. un diodo es un componente de 2 terminales que permite solamente el flujo de corriente en una dirección. sus terminales son llamados ánodo (positivo) y cátodo (positivo). nemotecnia: vistos desde arriba no son redondos, sino que tienen un lado plano, este es el lado negativo (-).

- [placa de pruebas](https://es.wikipedia.org/wiki/Placa_de_pruebas): tablero con orificios que se encuentran conectado eléctricamente de manera interna. sirve como soporte físico y de prototipado de circuitos.

## instalación de software para el curso

en este curso usaremos microcontroladores de [Arduino](https://es.wikipedia.org/wiki/Arduino). En particular, se recomienda el uso del [Arduino Uno](https://es.wikipedia.org/wiki/Arduino_Uno), por su bajo costo y alta popularidad. Este microcontrolador está basado en el chip [ATmega328](https://es.wikipedia.org/wiki/Atmega328).

para programarlo, bajaremos el software Arduino IDE desde la web [https://www.arduino.cc/](https://www.arduino.cc/)

en este curso todavía usaremos la versión 1.x, no la 2.x que pronto la reemplazará.

el lenguaje Arduino está inspirado por el lenguaje Processing, y es un subconjunto / dialecto de C++.

adicionalmente, se recomienda instalar uno de estos editores de texto para escribir código, en orden de mayor recomendación a menor:

- [Visual Studio Code](https://code.visualstudio.com/)
- [GNU Emacs](https://www.gnu.org/software/emacs/)

## instalación adicional de software para microcontroladores genéricos

para los microcontroladores de Afel, deben instalar un software adicional de tipo driver en su computador. las instrucciones están aquí:

https://www.geekfactory.mx/tienda/tarjetas/arduino/tarjeta-compatible-con-arduino-uno-r3/

dependiendo del sistema operativo, tienen que elegir entre estos distintos archivos e instalarlos.

- Linux: https://cdn.geekfactory.mx/drivers/CH341SER_LINUX.ZIP
- Mac: https://cdn.geekfactory.mx/drivers/CH341SER_MAC.ZIP
- Windows: https://cdn.geekfactory.mx/drivers/CH341SER.EXE

## fundamentos de programación en Arduino (90 minutos)

Arduino está basado en Processing, y hereda las 2 funciones principales:

```C++
// setup() ocurre al principio de los tiempos, una vez
void setup() {

  // codigo para configurar condiciones iniciales

}

// loop() ocurre despues de setup(), en bucle
void loop() {

  // codigo para refrescar, leer y escribir informacion

}
```

nuestro Arduino puede almacenar distintos tipos de variables, las que son útiles para distintos propósitos.

en este curso usaremos las siguientes:

```C++

// bool almacena valores verdadero o falso (true, false)
bool verdad = true;

// byte almacena 8 bits, valores enteros entre 0 y 255
byte ochoBits = 255;

// int almacena numeros enteros, tamano 2 bytes = 16 bits
int numeroEntero = -4;

// float almacena numeros con parte decimal
float numeroDecimales = 123.456;

// char almacena un caracter, entre comillas simples ''
char miInicial = 'a';
// tambien puedes escribir directamente el valor decimal
char miInicialDecimal = 141;

// String almacena un arreglo de caracterers, entre comillas dobles ""
String verso = "habia una vez";s

```

### ejemplo con LED interno

código completo en [ej_00_led_interno](ej_00_led_interno)

nuestro Arduino Uno tiene un LED interno conectado internamente al pin 13.

creamos una variable de tipo número entero para almacenar el valor 13.

en la configuración (setup) hacemos que el pin digital 13 sea una salida (OUTPUT).

en el refresco (loop) hacemos que la nuestra salida digital del pin 13 alterne entre valores digitales 1 y 0, con una pausa de 1 segundo entre cada estado.

### ejemplo imprimir String

código completo en [ej_01_imprimir_string](ej_01_imprimir_string)

nuestro Arduino puede imprimir valores a través del puerto serial.

estos mensajes podemos leerlos en el monitor serial del software Arduino IDE.

en el monitor serial tenemos opciones de configuración de velocidad de [baudios](https://es.wikipedia.org/wiki/Baudio), de avanzar automáticamente, o de registrar el tiempo de llegada de cada mensaje.

### ejemplo imprimir variables internas

código completo en [ej_02_imprimir_variable](ej_02_imprimir_variable)

también podemos imprimir valores de variables internas a través del puerto serial.

### ejemplo arrojar dado

código completo en [ej_03_arrojar_dado](ej_03_arrojar_dado)

podemos programar un Arduino para simular el acto de arrojar un dado, con valores mínino y máximo variables.

### ejemplo lectura serial

código completo en [ej_04_lectura_serial](ej_04_lectura_serial)

este ejemplo nos permite usar el monitor serial para enviar caracteres a Arduino, y que Arduino indique que los recibió.

el número impreso corresponde al valor [ASCII](https://es.wikipedia.org/wiki/ASCII) del caracter enviado.

13 es CR, por carriage return, en español [retorno de carro](https://es.wikipedia.org/wiki/Retorno_de_carro).

### ejemplo poema condicional

código completo en [ej_05_poema_condicional](ej_05_poema_condicional)

este ejemplo permite escribir un poema interactivo en nuestro microcontrolador, que responde a nuestra entrada por puerto serial.

## artistas y referencias

- [Daniel Rozin](https://www.smoothware.com/)
- [Yeseul Song](https://yeseul.com/)
