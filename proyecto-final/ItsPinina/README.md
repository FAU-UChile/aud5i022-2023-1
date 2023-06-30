# **Proyecto Final: _Reloj Pomodoro:_** para estudio y productividad

**Trabajando con:** Camila Donoso

# **Lista de materiales:**

Arduino UNO

7 LED de 3mm (5 de color verde y 2 de color rojo)

Buzzer

Botón pulsador

2 resistencias 1 K

Protoboard 

Cables Dupont M/M

# **Software**
Arduino IDE

Tiempo trabajo: 25 min = 1500 s = 1500000 ms

Tiempos descanso corto: 5 min = 298 s = 298000 ms

Tiempo descanso largo: 20 min = 1198 s = 1198000 ms

# **Introducción**

La gestión efectiva del tiempo es esencial para maximizar la productividad en cualquier actividad, especialmente en el estudio y el trabajo.

Una técnica que se ha vuelto popular y ha demostrado su eficacia es la técnica Pomodoro:

- Esta técnica se basa en la idea de dividir el tiempo en bloques cortos y enfocados, alternando períodos de trabajo intensivo con breves descansos.
- Normalmente es aplicada utilizando 25 minutos de concentracion, 5 minutos de descanso corto y 20 minutos o más en un descanso largo

Entre sus beneficios estan:

- Mejora la concentración
- Incrementa la productividad
- Combate la fatiga mental
- Fomenta la autodisciplina

Para facilitar la implementación de la técnica Pomodoro, se ha desarrollado un reloj especialmente diseñado que te permite llevar un seguimiento preciso de los intervalos de trabajo y descanso.

# Ensamble 

Al iniciar el reloj primero colocamos las luces en orden 

![Luces](./Imagenes/Luces.jpg "Luces")

Luego procedimos a conectar la alimentación del protoboard, el cable a tierra, colocar el boton y poner el altavoz

![Luces conectadas](./Imagenes/Luces2.jpg "Luces conectadas")

Procedimos dandole poder a todas las luces y luego conectando el boton

![Conexiones](./Imagenes/Conectado.jpg "Conexiones")
![Conexiones](./Imagenes/Conectado2.jpg "Conexiones")

Luego de darle poder a todos los elementos y conectarlos en sus respectivos pines el producto final quedo de esta manera:

![Terminado](./Imagenes/Terminado.jpg "Terminado")
![Terminado](./Imagenes/Terminado2.jpg "Terminado")

La forma de funcionamiento es que cada vez que se conecte el dispositivo se dara inicio al tiempo contando 25 minutos de trabajo para luego cada 25 minutos tomar un descanso de 5 y considerar que se completo 1 "Pomodoro"
Esto continuara de esta manera hasta que se hayan completado 4 pomodoros luego de llegar a esta meta se recompensara al usuario con un descanso de 20 minutos y tendra que presionar el boton para poder reiniciar la cuenta 
de "Pomodoros" y continuar con la productividad 

Aqui una pequeña demostracion de como funciona el dispositivo 

![Demostracion](./Imagenes/Demostracion.mp4 "Demostracion")

# Referencias

Nos basamos y guiamos por el **Codigo:** https://www.hackster.io/355077/pomodoro-timer-using-arduino-1b353a

Informacion obtenida de: https://aulicum.com/blog/tecnica-pomodoro/





