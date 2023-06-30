# PROYECTO "JUEGO DE DJ" 
## PROCESO DE TRABAJO EN ARDUINO Y PROCESSING

### Avance n° 1 (02 de junio)

###### *yeauh yeauh*
Estoy trabajando con [BenjaIeg] (https://github.com/BenjaIeg)
* Nuestra primera idea es trabajar con una suerte de *"juego de DJ"* de manera que existe una biblioteca de instrumentales de hip hop en processing y que con el arduino poder activar sonidos de scratch.
Estuvimos investigando en la pagina de Processing (https://processing.org/reference/libraries/sound/index.html) que heramientas existen para esto. 
Las que investigamos fueron:
* SoundFile (https://processing.org/reference/libraries/sound/SoundFile.html) 
* AudioSample (https://processing.org/reference/libraries/sound/AudioSample.html)
* Jump (https://processing.org/reference/libraries/sound/AudioSample_jump_.html)
* Loop (https://processing.org/reference/libraries/sound/AudioSample_loop_.html)
* Play (https://processing.org/reference/libraries/sound/AudioSample_play_.html)
* Pause (https://processing.org/reference/libraries/sound/AudioSample_pause_.html)
* Stop (https://processing.org/reference/libraries/sound/AudioSample_stop_.html)
* JumpFrame (https://processing.org/reference/libraries/sound/AudioSample_jumpFrame_.html)
* Volume (https://processing.org/reference/libraries/sound/Sound_volume_.html)
* Delay (https://processing.org/reference/libraries/sound/Delay.html)
* Reverb (https://processing.org/reference/libraries/sound/Reverb.html)






### Avance n° 2 (16 de junio)




* Repasamos el avance de la clase del día 02 de junio, en donde habíamos encontrado en la página de processing algunos códigos que podrían servir para nuestro proyecto
* Luego nos fuimos a la aplicación de processing en el pc y en: Herramientas > Libraries > Buscamos *‘Sound’* e instalamos *“Sound| Provides a simple way to work with audio.”* Autor *“The Processing Foundation”*
* Luego en Processing > Archivo > Ejemplos: Estuvimos verificando que ejemplos de códigos podían servir. 
* El primer ejemplo que analizamos fue: *“AudioSampleManipulation”* Aquí investigamos que significaba *‘int’* , *‘float’*, *‘amp’*, *‘loop’*, *‘mousePressed’* y *‘KeyPressed’*.
* El segundo ejemplo que analizamos fue: *“SimplePlayback”* Probamos subir un audio descargado *("baserap.mp3")* por nosotros al processing. Lo cual nos funcinó. Además le añadimos *‘Sample.Play’* con el Mousse en *“mouse.Pressed”* y *‘Sample.Stop’* con la tecla de espacio en *“KeyPressed”*. Lo que también funcionó. 
* Luego estuvimos verificando si el *'boton'* funcionaba como en el ejercicio de cambiar de color un background. Para recordar como funcionaba este paso. 
* Lo ultimo fue añadir un 'boton' a arduino e incorporarlo como botón de *'Play'* y *'Pause'* para nuestro audio *"baserap.mp3"*. Al incorporarlo el audio se saturó y manejó parametros que no le pertenecían. 
* Quedamos en solucionarlo pronto. 




### Avance n° 3 (23 de junio)
###### Durante la semana de "trabajo autonomo" 
* Trabajamos en este codigo; (https://github.com/BenjaIeg/aud5i022-2023-1/blob/main/proyecto-final/BenjaIeg/ultimoavancebotonperilla/perillaybotonmusicayarduino/perillaybotonmusicayarduino.pde)

* Seguimos avanzando en base a los códigos que encontramos en *'Libraries'* de Processing 
* El ejemplo *"SimplePlayback"* como dice en su descripción;
* *"This is a simple sound file player. Use the mouse position to control playback. Speed, amplitude and stereo panning."*
* Nos ayudó a encontrar una manera de jugar con un sonido > *"vibraphon.aiff"* 
* En este codigo la interfaz para distorsionar el sonido era mediante el mouse. 
* Y el sonido comienza a reproducirse inmediatamente al activar el codigo, pero sin que hubiera una interfaz específica que le hiciera *'play'* o *'pause'* solo al sonido. Obviamente el codigo tampoco tenia lineas dedicadas a estas funciones.
#### Primer paso; 
* Luego de agregar otro sonido a este codigo > *"basederap.mp3"*
Agregamos un *'interruptor'* que funcione como interfaz para hacer play y pause. Con el código *'Sample.Play'* y *'Sample.Pause'* en la sección de *"VoidDraw"*
###### Decidimos agregar un *'interruptor'* en vez de un *'boton'* porque el boton solo funciona al mantenerlo presionado y necesitamos que las manos quede libres para poder ejecutar más funciones. Además porque es tedioso tener que estar permanentemente presionando el boton para que reproduzca el  o los audios. 
##### Primer problema y solución; 
* Seguimos solucionando el problema que nos arrojaba procesing cuando intentabamos hacer funcionar el codigo de *'Sample.Pause'* con audios cortos. Lo cual logramos mejorar agregando un audio más largo que no hiciera que el loop del audio se saturara y se distorsionara de mal manera el audio.  

  
#### Segundo paso; 
* Agregamos una *'Perilla'* que funcione como interfaz para distocionar el *'Speed'* del beat. En reemplazo de la interfaz que ejecutaba anteriormente el Mouse.
* (La razon para agregar una *'Perrilla'* es que la interfaz que provoca al usuario es de experimentar como vas haciendo que suba y baje la velocidad del audio.)
* Esto nos funciono al principio, sin embargo tuvimos nuestro segundo problema. 
##### Segundo problema; 
* Los datos que enviaba la *'Perilla'* de *'play'* y *'pause'* ( '0' cuando no estaba presionado y '1' al presionarlo) comienzan a combinarse con los datos que enviaba la *'Perilla'* lo cual hacía que de se saturara el beat.
* Esta saturación se explica porque el 'Interruptor' envia datos 0 y 1. Y la *'Perilla'* envia datos del 1 al 1023. Entonces los datos 0 y 1 del *'Interruptor'* al mezclarse con los intervalos de datos de la *'Perilla'* "(565, 566, 0 , 566...)" hacen inmediatamente que el audio piense que debe reproducirse desde el principio. 
##### Primera solucion; 
* Intentamos hacer que los valores que imprime la *'Perilla'* fueran detectados desde el 2 al 1023. Lo cual hizo que se reprodujera el audio pero sonaba entrecortada ya que aun le interrumpian los datos 0 y 1 del interruptor. Es decir aun necesitabamos una solucion que hiciera que los datos no se mezclaran.
  
##### Segunda solución; 
* Entre todos los tutoriales que buscamos, hubo uno que nos decía una forma de arreglar el codigo de manera que podriamos hacer que la señal enviada por el interruptor solo lo hiciese una vez, es decir, si encendiamos el interruptor enviaria solo un '1', y si lo apagabamos solo enviaria un '0'.
* (https://www.youtube.com/watch?v=EQugLcDoaOQ&ab_channel=ChepeCarlos) (Desde el minuto 5:55)
* Esta solución tampoco nos funcionó ya que el codigo no hizo lo que queríamos. 


### AVANCE n° 4 (28 de junio)
##### Tercera solución; 


* Ahora teniamos que encontrar una manera de que el serial mandara datos de una perilla y boton por separado para que processing pueda leer los datos de manera separada y pueda realizar todas las acciones al mismo tiempo, sin que estas se interrumpan.

* Entre los ejemplos encontrados en internet se destacaban el uso de Serial Print en vez de el uso de serial write, e intentamos ver si se incluian cambios. Una de las diferencias era el uso de println, que marcaba el fin de la linea de datos que se mandaba. 
Por ejemplo: mientras que serial.write enviaba todos los datos en lineas diferentes y en conjunto de forma que processing tenia que leer 2 lineas diferentes entre boton y perilla

* Print y println es capaz de enviar los datos en conjunto en una linea. 
Print(boton);
Println(perilla);
1 1000 (interruptor y perilla)
1 1000
1 1000
* 
Luego para categorizar cada dato habia que enviar un print(,) para que la linea enviada se vea tal que asi: 
Serial.print(boton);
Serial.print(,);
Serial.println(perilla);

1 , 1000
1 , 1000

* De esta manera, teniamos que decirle a processing que use la (,) como separador al momento de leer los datos del serial

if (myPort.available() > 0) {  //si el puerto manda informacion	
	String data = myPort.readStringUntil('\n');
	if (data != null) {
	data = data.trim();
	String[] values = split(data, ",");
	if (values.length >= 2) {
	Boton = int(values[0]);
	Perilla = int(values[1])
* Entonces en este ejemplo values.length es el numero de datos que mandara, aqui seran 2 por boton y perilla.

* Y hay que realizar a continuacion asignarle el nombre con int a cada categoria

Boton = boton int(values[0]) siendo cero el primer “casillero que leera y asignara.

# CODIGO FINAL
## Procesing
https://github.com/BenjaIeg/aud5i022-2023-1/blob/main/proyecto-final/BenjaIeg/Entrega_CodigoProcessing/Entrega_CodigoProcessing.pde
## Arduino
https://github.com/BenjaIeg/aud5i022-2023-1/blob/main/proyecto-final/BenjaIeg/Entrega_CodigoArduino/Entrega_CodigoArduino.ino

# PROCESO DE ARMADO DE ARDUINO 
## Materiales
* Arduino UNO R3 
* Cable USB del arduino
* Protoboard 
* Cables rojos (8)
* Cables azules(4)
* Cables amarillos (4)
* Cables verdes (3)
* Cables blancos (2)
* Resistores de 10k (4)
* Pulsadores a.k.a Botones (2)
* 2 Interruptores
* Potenciometros a.k.a Perillas (2)
 
  




1. Unir la *'Protoboard'* al *'Arduino'*
* Cable rojo (+)
* Cable azul (-)
* 
![](imagenes/Imagenes%20arduino/1.jpeg)

2. Conectar *'Arduino'* al PC mediante cable USB.
* 
3. Conectar la primera mitad de la *'Protoboard'* con la segunda mitad. (Debido a que no le llega energía a toda la *'Protoboard'*)
*
![](imagenes/Imagenes%20arduino/2.jpeg)
*
4. Agregar 'Botones' a la *'Protoboard'*
   * (En este caso los ubicamos en la parte derecha, la idea es ubicarlos donde esten comodos para las manos ya que serán utilizados para hacer *'play'* *'pause'* a los sonidos de "SCRATCH".
  ![](imagenes/Imagenes%20arduino/2.1.jpeg)
*
5. Conectar los cables para hacerles llegar energía a los botones.
   * ###### Primer boton 
   * Cable rojo en las primeras patitas al*positivo* (+) de la *'Protoboard'* 
   * Cable amarillo en las segundas patitas al *'PIN 7'* del arduino
     ![](imagenes/Imagenes%20arduino/3.1.jpeg)
     ![](imagenes/Imagenes%20arduino/3.jpeg)
   * ###### Segundo boton
   * Cable rojo  en las primeras patita al *positivo* (+) de la *'Protoboard'*
   * Cable amarillo en las segundas patitas hacia el *'PIN 6~'* del arduino
  ![](imagenes/Imagenes%20arduino/4.1.jpeg)
     ![](imagenes/Imagenes%20arduino/4.jpeg)
     ###### Resultado
![](imagenes/Imagenes%20arduino/5.jpeg)
6.  Agregar *Resistores* de 10k
*    
7. Agregar los 'Interruptores' a la *'Protoboard'*
    * (En este caso los ubicamos uno en la parte derecha y otro a la izquierda. La idea es que podamos diferenciar que cada uno de los interruptores hara *'play'* y *'pause'* a cada uno de los audios principales *'baserap.mp3'* y *'vocal'* )
8. Conectar los cables a los respectivos interruptores para hacerles llegar energia.
![](imagenes/Imagenes%20arduino/7.jpeg)
   * ###### Primer interruptor (lado derecho)
   * Cable rojo al *positivo (+)* de la *'Protoboard'*
   * Cable verde al *'PIN 2'* de arduino
   * 
 ![](imagenes/Imagenes%20arduino/7.1.jpeg)
   * ###### Segundo interruptor (lado izquierdo)
   * Cable rojo al *positivo (+)* de la *'Protoboard'*
   * Cable verde al *'PIN 8'* de arduino
   * 
     ![](imagenes/Imagenes%20arduino/9.1.jpeg)
9  Agregar *Resistores* de 10k
    ![](imagenes/Imagenes%20arduino/9.jpeg)
*
   ###### Resultado
   ![](imagenes/Imagenes%20arduino/10.jpeg)
*
10. Agregar 2 Perillas a la *'Protoboard'*
   
    ![](imagenes/Imagenes%20arduino/11.jpeg)
    *(Una a cada lugar, derecha e izquierda en la letra A)
*
    ![](imagenes/Imagenes%20arduino/13.jpeg)
12. Conectar los cables a las respectivos perillas para hacerles llegar energia.
* ###### Primera perilla (lado izquierdo)
*
  ![](imagenes/Imagenes%20arduino/12.jpeg)
*
* Cable rojo al *positivo (+)* de la *'Protoboard'*
* Cable amarillo al *'PIN A1'* de arduino
*
  ![](imagenes/Imagenes%20arduino/12.1.jpeg)
* Cable azul *Negativo (-)* de la *'Protoboard'*
 
* ###### Segunda perilla (lado derecho)
* Cable rojo al *positivo (+)* de la *'Protoboard'*
* Cable amarillo al *'PIN A2'* de arduino
  
  ![](imagenes/Imagenes%20arduino/13.1.jpeg)
* Cable azul *Negativo (-)* de la *'Protoboard'*
   ###### Resultado
*
  ![](imagenes/Imagenes%20arduino/14.jpeg)
*
![](imagenes/Imagenes%20arduino/15.jpeg)
*
![](imagenes/Imagenes%20arduino/15.1.jpeg)
13. Agregar Potenciometro lineal  a la *'Protoboard'*
 * (Entre las perillas y los interruptores)
*
  ![](imagenes/Imagenes%20arduino/16.jpeg)
 * (Patitas en las letras F Y H)
 ![](imagenes/Imagenes%20arduino/17.1.jpeg)
*
![](imagenes/Imagenes%20arduino/17.2.jpeg)
*
 ###### Resultado
*
 ![](imagenes/Imagenes%20arduino/17.jpeg)
 *

 14. Conectar cables
* ###### Primeras 2 patitas (1 y 2) (lado derecho)
* Cable rojo al *positivo (+)* de la *'Protoboard'*
* Cable verde al *'PIN A0'* de arduino
![](imagenes/Imagenes%20arduino/18jpeg)
*

* ###### Patita que esta sola (3) (lado izquierdo)
* Cable azul *Negativo (-)* de la *'Protoboard'*
*
* ![](imagenes/Imagenes%20arduino/19.jpeg)


*![](imagenes/Imagenes%20arduino/20.jpeg)

  



