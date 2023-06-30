probando uwu
Estoy trabajando con [maridiazv](https://github.com/maridiazv), avances en su perfil :D

Docentes Aaron Montoya e Ignacio Passalacqua, integrantes: Sofía Chávez y María Díaz, 30-06-2023

PROYECTO ABEJORRO

![image](https://github.com/sofiachaav/aud5i022-2023-1/assets/129554344/a9bda836-7a34-4480-b84a-140918c765d0)

¿QUE ES?

El “Proyecto abejorro” es una propuesta de la combinación de sistemas de interfaces análogas y digitales mediante el objetivo común de la concientización de la fauna autóctona de la zona centro-sur de chile.

SISTEMAS A UTILIZAR

SISTEMA DIGITAL
Arduino es una plataforma de software de código abierto que permite a personas y comunidades desarrollar prototipos electrónicos y dispositivos interactivos, permitiendo crear proyectos con infinitas posibilidades.
El medio principal del desarrollo de esta propuesta es el sistema Arduino, en especifico, las placas y sus accesorios.

SISTEMA ANALOGO 
El sistema biela es un mecanismo análogo de fuerzas, que básicamente transforma un movimiento circular uniforme en un movimiento de traslación alternativo, o viceversa. Es el mismo sistema que utilizan los pistones de un auto.
El medio secundario del desarrollo de esta propuesta es el sistema biela.


ABEJORROS CHILENOS

![image](https://github.com/sofiachaav/aud5i022-2023-1/assets/129554344/0b8de788-7150-4082-9111-2bd2e876702b)

Especie de insecto perteneciente al genero Bombus, siendo este uno de los mas grandes dentro del género.
Habita principalmente en bosques templados, en Chile desde la zona centro-sur hasta Puerto Williams, y en Argentina desde Buenos Aires hasta Tierra del Fuego.
Su dieta, al igual que otros tipos de abejas, consiste principalmente en polen y néctar de flores.

Especie de insecto amable y carismática, es decir, le gusta la convivencia con otras especies y no ataca a menos que sea provocado.
Son mundialmente conocidos como un polinizador natural de la flora nativa y agricultura del centro sur de Chile y el sur de Argentina

DATO CURIOSO
En algunas comunidades del sur de Chile a los abejorros negros (europeos) se les relacionaba con la mala suerte, mientras que a los rojos (chilenos) con la buena suerte, cuando uno entra a tu casa se dice: "Abejorro rojo, buenas noticias traigas y si no las traes, al suelo te caigas".

![image](https://github.com/sofiachaav/aud5i022-2023-1/assets/129554344/31bc4d30-1315-41a2-aca9-29f482020e30)

PELIGRO DE EXTINCION 

Principal causas:
A comienzos de 1997 las empresas de fertilizantes comenzaron a importar al cono sur de América especies exóticas de abejorros extranjeros, como el abejorro de cola blanca europeo (Bombus Terrestris) y el Bombus Ruderatus, para servir como polinizadores agrícolas. Ambas especies son altamente invasivas y agresivos, por lo que en el año 2006 se comenzaron a difundir los informes que alertaban el peligro que corría la población de abejorros chilenos, disminuyendo cada año mientras aumentaba la invasión de abejorros extranjeros en los bosques nativos.

![image](https://github.com/sofiachaav/aud5i022-2023-1/assets/129554344/5fb0fe72-2e68-448c-9d4d-2aa58879847a)
![image](https://github.com/sofiachaav/aud5i022-2023-1/assets/129554344/397bcce9-873d-437f-894a-68d4ef5b1aa8)
![image](https://github.com/sofiachaav/aud5i022-2023-1/assets/129554344/f5e2bc0f-3477-4a7a-a300-12bc9d7b31f5)

FOTOS PROCESO

![image](https://github.com/sofiachaav/aud5i022-2023-1/assets/129554344/c7c794c9-0ab2-484d-a0a7-ba13ecef449d)
![image](https://github.com/sofiachaav/aud5i022-2023-1/assets/129554344/1ee23a44-dc05-4173-b88d-aac023da9076)
![image](https://github.com/sofiachaav/aud5i022-2023-1/assets/129554344/b1b40a47-624e-4ff7-bc15-5e559d903326)

SISTEMA DE INTERFAZ ELECTRONICA

MATERIALES

Placa Arduino, Protoboard, Cable USB de conexión a Arduino , Motor Servo, 10 cables , 1 resistencia de 22R, 1 botón pulsador, 1 condensador electrolítico.

DIAGRAMA

![image](https://github.com/sofiachaav/aud5i022-2023-1/assets/129554344/8a60de52-b734-461f-84e6-2cca98de6cd1)

SISTEMA ANALOGO DESARROLLO FORMAL

![image](https://github.com/sofiachaav/aud5i022-2023-1/assets/129554344/695078d6-6caa-42ca-82a6-daf5ca63e41c)
![image](https://github.com/sofiachaav/aud5i022-2023-1/assets/129554344/9e068eca-c7ec-4182-8204-a3fdbb0cb41b)
![image](https://github.com/sofiachaav/aud5i022-2023-1/assets/129554344/2cbf211f-2651-4949-8382-a60052b24e9d)
![image](https://github.com/sofiachaav/aud5i022-2023-1/assets/129554344/959868fe-b03c-4573-9e10-4ae9cc63fdbe)

DESARROLLO DE PLANOS

![image](https://github.com/sofiachaav/aud5i022-2023-1/assets/129554344/cb24ae0e-ec76-4f30-b9de-1cfc067292af)
![image](https://github.com/sofiachaav/aud5i022-2023-1/assets/129554344/992edcff-9bc9-40ec-a04e-ee159db2c38a)

CODIGO DE PROGRAMACION
// "Codigo Abejorro", codigo para proyecto final, funciones para realizar vueltas de 180° en motor servo de arduino 
// integrantes: Maria Diaz y Sofia Chavez
// fecha de ultima modificacion 21-06-2023

#include<Servo.h>
Servo myServo;

int potVal;
int angle;
int modo = 0;
int estadoBoton = 0;
int estadoBotonPrevio = 0;

// variables para movimiento del motor Servo
int anguloActual = 0;
int anguloPasito = 10;
int anguloDireccion = 1;
int anguloMinimo = 0;
int anguloMaximo = 179;
int anguloPausa = 15;

void setup() {
  // put your setup code here, to run once:
 
 myServo.attach(8);
 Serial.begin(9600);

}

void loop() {

estadoBoton = digitalRead(2);

if(estadoBoton == 1 && estadoBotonPrevio == 0){
   if(modo == 0){
   modo = 1;
  }
   else if(modo == 1){
   modo = 0;
  }
}

estadoBotonPrevio = estadoBoton;

if(modo == 1){
  // instrucciones para que el motor se mueva dependiendo del estado del boton
  myServo.write(anguloActual);
  delay(anguloPausa);
  // instrucciones para actualizar la siguiente vuelta
  anguloActual = anguloActual + anguloDireccion * anguloPasito;

 if (anguloActual > anguloMaximo) {
    anguloDireccion = -1;
  }

 if (anguloActual < anguloMinimo) {
     anguloDireccion = 1;
  }
}

else if(modo == 0){

}

Serial.println(modo);
delay(50);

}

FOTOS

![image](https://github.com/sofiachaav/aud5i022-2023-1/assets/129554344/6faf66cc-3b95-4620-8406-307c9265d279)
![image](https://github.com/sofiachaav/aud5i022-2023-1/assets/129554344/1d7bd43a-6d96-4c5b-9caf-5bce5f991740)
![image](https://github.com/sofiachaav/aud5i022-2023-1/assets/129554344/7f94c13c-61b6-4283-8d3a-f8c6bac19309)

APRENDIZAJE:
- aprender a programas y utilizar un motor servo
- aprender a programar los giros y velocidades del motor
- crear un modelo formal del mecanismo de biela
- hacer que el boton encienda y apague el dispositivo a comando
