Archivo de Proyecto Final - Diseño Interfaz Electrónica Mediante Arduino        2023

Francisco Cabrera [Toomanypanchos](https://github.com/Toomanypanchos)
en conjunto a [VanesaAngulo](https://github.com/VanesaAngulo) 

Redacción de Informe

---- Clase 02-06 ----
brainstorming
https://vimeo.com/itpred
uso de tiras de fibra óptica led
https://afel.cl/producto/diodo-led-rgb-5mm/

1 a-Objeto que reacciona al movimiento, emitiendo sonido al moverse.
  b-Theremin
2-Vestimenta que reaccione a distancia y permita controlar tiras LED (cambiando colores).
a-	zapatilla que indica distancia del pie con el piso
b-	chaleco que indica distancia con otras personas u objetos
c-	Muro LED que sea capaz de leer una silueta mediante sensores infrarrojos, y gracias al uso de      código (ejemplo: processing) dibuje en este muro led la misma silueta.
3-Sistema de control de cortinas mediante estimulo lumínico u horario.

Elección de proyecto (relación con el punto 2)
Mecanismo que reaccione a distancia o tacto permitiendo controlar sistema de led RGB.
Para comprender mejor el uso de los leds RGB realizar una estructura cuadrada que permita crear imágenes o efectos visuales mediante el manejo de varios LEDs

-----------------------------------------------------------
Problemas identificados
La cantidad de cables necesarios para controlar LEDs RGB singulares complica mucho la manipulación e instalación del proyecto, por lo que hemos decidido que sería más practico utilizar algún tipo de "tira" de estas luces ara poder manipular varios al mismo tiempo 

https://github.com/Toomanypanchos/aud5i022-2023-1/assets/89993556/82ec4b09-e5ea-4749-8815-d4654b3ba954
control de led RGB mediante Arduino.
 

https://github.com/Toomanypanchos/aud5i022-2023-1/assets/89993556/82ec4b09-e5ea-4749-8815-d4654b3ba954
control de led RGB mediante Arduino.

---- Clase 16-06 ----
Definición clara de Proyecto, planificación y cotización de materiales.

Realizar un cubo de 4x4 con LEDs que permita mediante código generar patrones visuales. 
Este proyecto nos pareció interesante, primeramente porque como equipo nos pareció un desafío que al mismo tiempo nos permitía movernos en un área que ya hemos conocido en el curso, un desafío, dada la cantidad de LEDs con los que vamos a trabajar, con un total de 64, la necesidad de soldar tanto los LEDs como alambres que aparte de generar estructura servirán como conductores dentro del circuito, por lo que tendremos que ser muy metódicos a la hora de realizar correctamente las conexiones y evitar un posible traslape de corriente entre tantos cables.

Deci

Planificación:
-	16/06	definir claramente proyecto, evaluando requerimientos y cotizarlos.
-	23/06	Reunirnos para trabajo autónomo y avanzar en proyecto.
-	28/06	Reunirnos de manera autónoma, avanzar en proyecto y redactar informe.
-	30/06	Afinar detalles y entregar.

Materiales requeridos
-	Arduino-UNO.
-	2Protoboard pequeñas.
-	70 LEDs (comprar más en caso de errores o quema)
-	2M Alambre.
-	36 cables de variadas longitudes.
-	16 resistencias 220
-	Cautín
-	Estaño y pasta para soldar

Debido a que para el curso ambos integrantes del equipo adquirimos el kit de Arduino, contamos con la mayoría de los elementos necesarios, solo nos hace falta los LEDs, el alambre y los materiales para soldar, salvo el cautín que tenemos.

[Diodo Led 3mm](https://www.kowka.cl/diodos/157-diodo-led-3mm-alta-luminosidad.html)  7.700 pesos

![image](https://github.com/Toomanypanchos/aud5i022-2023-1/assets/89993556/3562fc13-44d6-41cf-a93a-ae9189c1044f)


[Soldadura 50% estaño con pasta 1 metro Indepp](https://www.easy.cl/soldadura-50-estano-con-pasta-1-metro-indepp-191160/p?gclid=Cj0KCQjw1_SkBhDwARIsANbGpFvWeUQibH3RAtVKBNBq65JOwZGxyx25PSW25UwPt-wz9p2_Tz9N6CQaAgVKEALw_wcB)  4.300 pesos

![image](https://github.com/Toomanypanchos/aud5i022-2023-1/assets/89993556/3ff61472-287a-44af-8c02-6d8d7ea8cdf6)

los materiales para soldar y el alambre se compraron en una ferreteria.

---- Clase 23-06 ----
Reunión para trabajo autónomo y avanzar en proyecto.

Objetivo General.
Construir un cubo con 64 LED, elaborar un programa por medio de Arduino para crear secuencias de iluminación. 
Pasos a seguir para realizar el proyecto

Confirmar cada el funcionamiento de cada LED ya que una vez soldado será complicado su intercambio.
![image](https://github.com/Toomanypanchos/aud5i022-2023-1/assets/89993556/6766128e-2c3b-4b2c-b3d0-0cb55f4cf58c)

Una vez confirmado el funcionamiento del LED se procede a cortar y doblar la patita que conecta con el ánodo generando un círculo que permitirá atravesar con u alambre y alimentar varios LEDs a la vez de la siguiente manera.

![image](https://github.com/Toomanypanchos/aud5i022-2023-1/assets/89993556/a1c2e052-e280-4842-9a30-cccb18b02858)

Para esto se requirió del uso de dos alicates (dadas las dimensiones) y de una pinza de corte que venia incorporada en uno de ellos.

Realizado este paso con todos los LEDs se prosigue a generar una plantilla para soldarlos y generar cada uno de los pisos que conforman el cubo, asegurando de manera precisa que los LEDs estén X distantes entre ellos y que esto se mantenga para cada piso. Asegurando así una unidad estructural y visual.
La plantilla se realizo sobre un bloque de MDF el que luego de las respectivas medidas se perforo para recibir al LED permitiendo manipular sus hilos conductores con facilidad.
![image](https://github.com/Toomanypanchos/aud5i022-2023-1/assets/89993556/cab6b545-153f-4adc-8739-b7bb10b41d7d)

Posicionados todo los LEDs llega el momento de soldarlos, para lo que usaremos 6 alambres por nivel 4 en paralelo y dos perpendiculares a estos, colocados en los bordes exteriores de cada nivel. Cortados considerando las dimensiones de las aristas del cubo, cortando cualquier material sobrante de la conexión.

La soldadura se realiza cercana a la muesca que tiene la terminal del cátodo del led, esto asegura estabilidad y una composición visual más armónica ya que el alambre se encuentra mas cercano al LED

![image](https://github.com/Toomanypanchos/aud5i022-2023-1/assets/89993556/e95d2eb5-638f-4af4-aa66-949d1698a5e5)
![image](https://github.com/Toomanypanchos/aud5i022-2023-1/assets/89993556/c38ec6ff-2040-436c-911d-839a36d2a70c)
![image](https://github.com/Toomanypanchos/aud5i022-2023-1/assets/89993556/4bfb8c89-5858-41d4-bbb7-2f3bd29c1f58)

Luego de esto se volvió a verificar la conexión de los LEDs para asegurarse que no se hubieran estropeado al momento de soldar.

--------Este paso se replico 3 veces mas para formas así los 4 niveles que conforman el cubo--------

---- Clase 23-06 ----

Reunión para trabajo autónomo y avanzar en proyecto.
Conformados los 4 niveles esto se unirán mediante alambres verticales que atravesarán los niveles, pasando por los círculos realizados en los ánodos de los LEDs anteriormente, siendo un total de 16 alambres verticales.
Asegurando que todos los LED de cada nivel están conectados por el lado negativo (cátodo), y las columnas se conectan por el lado positivo (ánodo).

![image](https://github.com/Toomanypanchos/aud5i022-2023-1/assets/89993556/84b491f3-d39e-4b0a-88bc-b2016efd008e)

Finalizado el cubo se recortaron los alambres sobrantes y se continuó con la conexión al Arduino, conexión que involucra a todos sus pines como se puede ver en el siguiente esquema

![image](https://github.com/Toomanypanchos/aud5i022-2023-1/assets/89993556/7c9e6504-4326-45b6-92de-0beb5d6a4d07)

Para iniciar conectamos al arduino con las resistencias para generar todas las conexiones positivas de cada columna en un sentido vertical, ya que como se ve en el esquema se alimentará un LED y todos sus pares directamente superiores. 
Y las conexiones negativas van alimentadas por nivel horizontal dando control de la corriente que recorre los pisos del cubo, esto es lo que permitirá potenciar columnas de LEDs pero que no todos se enciendan al no permitir que se complete el circuito eléctrico.

![image](https://github.com/Toomanypanchos/aud5i022-2023-1/assets/89993556/c6c676a5-9bee-4795-b8f8-a3ce7ad18578)

Respectivamente los 16 cables verticales se conectarán al Arduino en sus 14 pines digitales y 2 análogos y los 4 pines análogos restantes usaran para las conexiones horizontales. 

