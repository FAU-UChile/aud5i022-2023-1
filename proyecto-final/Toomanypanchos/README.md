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

Decidimos no usar la tira LED dado que pese a facilitar el control y el nivel de conexiones que debíamos realizar, sus dimensiones podían entorpecer la visualización del proyecto ya que los LEDs en tiras vienen recubiertos por un plástico que obstaculiza la limpieza del proyecto.

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

Una vez confirmado el funcionamiento del LED se procede a cortar y doblar el ánodo generando un círculo que permitirá atravesar con un alambre y alimentar varios LEDs a la vez de la siguiente manera.

![image](https://github.com/Toomanypanchos/aud5i022-2023-1/assets/89993556/a1c2e052-e280-4842-9a30-cccb18b02858)

Para esto se requirió del uso de dos alicates (dadas las dimensiones) y de una pinza de corte.

Realizado este paso con todos los LEDs se prosigue a generar una plantilla para soldarlos y generar cada uno de los pisos que conforman el cubo, ubicando de manera precisa que los LEDs estén X distantes entre ellos y que esto se mantenga para cada piso. Asegurando así una unidad estructural y visual.
La plantilla se realizo sobre un bloque de MDF el que luego de las respectivas medidas se perforo para recibir al LED permitiendo manipular sus hilos conductores con facilidad.
![image](https://github.com/Toomanypanchos/aud5i022-2023-1/assets/89993556/cab6b545-153f-4adc-8739-b7bb10b41d7d)

Posicionados todo los LEDs llega el momento de soldarlos, para lo que usaremos 6 alambres por nivel 4 en paralelo y dos perpendiculares a estos, colocados en los bordes exteriores de cada nivel. Cortados considerando las dimensiones de las aristas del cubo, y eliminando cualquier material sobrante de la conexión.

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

![image](https://github.com/Toomanypanchos/aud5i022-2023-1/assets/89993556/c7b8ef88-458b-45c3-9a1a-63913c45bf20)

---- Clase 29-06 ----

Reunion Autonoma para implementar codigo y probar funcionamiento de circuito

la implementacion del codigo es un ejercicio de comprension, copiado, pegado, observacion y futura experimentacion.
Esto dado que es un codigo que viene en un archivo descargable para armar el cubo por lo que no es de nuestra autoria y por tanto tenemos el labor de comprenderlo mas que desarrollarlo.

Link del video de referencia y codigo 
https://www.youtube.com/watch?v=spXlnHxGb-E

-------- Ejemplo codigo --------

int led[] = {13,12,11,10,9,8,7,6,5,4,3,2,1,0,A4,A5}; //Salidas
//de las columnas
int lvl[] = {A3,A2,A1,A0}; //Salidas
//de las filas
int y; //Variable
//para encender las filas

void setup() { //En esta parte se establece la
//configuración
 for (int x = 0; x < 16; x ++) { //Declarar los pines de las columnas como salidas
 pinMode(led[x], OUTPUT);
 }
 for (int x = 0; x < 4; x ++) { //Declarar los pines de las filas como salidas
 pinMode(lvl[x], OUTPUT);
 }
}

void loop() { //En esta parte se repite la secuencia infinitas veces
 for (int x = 0; x < 4; x++) { //Cada animación se repite 4 veces
 uxu(); //Se llama a la función uxu
 }
 for (int x = 0; x < 4; x++) {
 pxp(); //Se llama a la función pxp
 }
 for (int x = 0; x < 4; x++) {
 cubito(); //Se llama a la función cubito
 }
 for (int x = 0; x < 4; x++) {
 cubote();//Se llama a la función cubote
 }
 for (int x = 0; x < 4; x++) {
 itz(); //Se llama a la función itz
 }
 for (int x = 0; x < 4; x++) {
 ser(); //Se llama a la función ser
 }
}
//Esta función permite establecer valores de encendido y apagado a cada columna,donde 1 es encendido y 0 es apagado
void LED (int h, int i, int j, int k, int l, int m, int n, int o, int p, int q,
int r, int s, int t, int u, int v, int w) {
 digitalWrite (led[0], h);
 digitalWrite (led[1], i);
 digitalWrite (led[2], j);
 digitalWrite (led[3], k);
 digitalWrite (led[4], l);
 digitalWrite (led[5], m);
 digitalWrite (led[6], n);
 digitalWrite (led[7], o);
 digitalWrite (led[8], p);
 digitalWrite (led[9], q);
 digitalWrite (led[10], r);
 digitalWrite (led[11], s);
 digitalWrite (led[12], t);
 digitalWrite (led[13], u);
 digitalWrite (led[14], v);
 digitalWrite (led[15], w);
}
void LVL (int h, int i, int j, int k) { //Esta función permite establecer valores de encendido y apagado a cada fila
 digitalWrite (lvl[0], h);
 digitalWrite (lvl[1], i);
 digitalWrite (lvl[2], j);
 digitalWrite (lvl[3], k);
}
void level() { //En esta función se establecen los valores para las filas donde con un 1 los leds no encienden y con 0 encienden
 switch (y) {
 case 0: LVL (0, 1, 1, 1); break; //La primera fila encendida
 case 1: LVL (1, 0, 1, 1); break; //La segunda fila encendida
 case 2: LVL (1, 1, 0, 1); break; //La tercera fila encendida
 case 3: LVL (1, 1, 1, 0); break; //La cuarta fila encendida
 case 4: LVL (0, 1, 1, 0); break; //Las filas exteriores encendidas
 case 5: LVL (1, 0, 0, 1); break; //Las filas interiores encendidas
 case 6: LVL (0, 0, 0, 0); break; //Todas las filas encendidas
 case 7: LVL (0, 0, 0, 1); break; //Todas excepto la última
 case 8: LVL (0, 0, 1, 1); break; //Las primeras dos
 case 9: LVL (1, 1, 0, 0); break; //Las últimas dos
 }
}
//En esta animación prende led por led
void uxu() {
 int t = 100; //Esta variable determina el tiempo que espera el Arduino para
//realizar la siguiente acción
 for (int j = 0; j < 4; j++) { //Este for se utiliza para pasar de una fila a otra
 y = j; level();
 LED (1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); delay(t);
 LED (0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); delay(t);
 LED (0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); delay(t);
 LED (0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); delay(t);
 LED (0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); delay(t);
 LED (0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); delay(t);
 LED (0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0); delay(t);
 LED (0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0); delay(t);
 LED (0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0); delay(t);
 LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0); delay(t);
 LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0); delay(t);
 LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0); delay(t);
 LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(t);
 LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(t);
 LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(t);
 LED (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(t);
 }
}
//En esta animación prende fila por placa
void pxp() {
 int t = 500; //Esta variable determina el tiempo que espera el Arduino para
//realizar la siguiente acción
 for (int j = 0; j < 4; j++) { //Este for se utiliza para pasar de una fila a otra
 y = j; level();
 LED (1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1); delay(t);
 }
}

------
Se continuó implementando el código y observando que todas las conexiones estuvieran correctas, en este momento algunos LEDs se desconectaron y tuvimos que volver a soldarlos jaja.
(cubo dado vuelta para soldar con mayor facilidad)

![image](https://github.com/Toomanypanchos/aud5i022-2023-1/assets/89993556/9fbbab65-7800-4da3-bf3b-621d78887343)

![WhatsApp Image 2023-06-30 at 14 37 45](https://github.com/Toomanypanchos/aud5i022-2023-1/assets/89993556/04e52a4e-1e5b-4198-95b5-a184bf4ed96a)


Pero a grandes rasgos el cubo funcionaba a la perfección, salvo por un led en la esquina superior, el cual no prendía, llegamos a la conclusión de que debe haberse quemado ya que al conectar otros leds a los alambres que lo alimentaban este prendió.

https://github.com/Toomanypanchos/aud5i022-2023-1/assets/89993556/5fcaabb9-b895-406b-9b62-934a53aaea9a

Para desarrollar diferentes iteraciones dentro de los LEDs existe un software llamado led cube que permite visualizar gráficamente el cubo e iluminar los leds para luego generar un código que se puede aplicar directamente al cubo

![image](https://github.com/Toomanypanchos/aud5i022-2023-1/assets/89993556/84b63d2e-6345-436e-8cda-07ad42f4a083)

link para acceder al software
https://mega.nz/folder/jgsUGKqD#FUyJB6rwa_1YfDQ-HyK_cQ





