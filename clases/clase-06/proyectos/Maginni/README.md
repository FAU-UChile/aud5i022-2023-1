# aud5i022-2023-control

## Integrantes:

- Antonio Cerón
- Gabriela Echenique

## Materiales:

- Protoboard
- Arduino Uno
- Cables
- Pulsador
- Luces Led

## Circuito / Imagenes:

![Foto1](./imagen1.jpg)

Conectamos la protoboard a la entrada GND del arduino con un cable azul y pusimos 4 resistencias de 220.

![Foto2](./imagen2.jpg)

Conectamos 3 led rojos con un cable desde su pie largo a las entradas del arduino 8,9,10,7. Su pie corto fue conectado a las resistencias de 220 previamente mencionadas.

![Foto3](./imagen3.jpg)

Agregamos una cuarta luz led al circuito.

![Foto4](./imagen4.jpg)

Agregamos un pulsador que active la secuencia, se utilizo un cable rojo para conectar la linea positiva de la protoboard a la entrada de tierra del arduino y un cable rojo que conecte la linea positiva con una de las patas de el pulsador

- Conclusiones:

* La programación en arduino permite entre muchas otras cosas la elaboración de mecanismos que funcionen para medir un tiempo determinado. En este caso mediante luces realizando una secuencia, podemos medir el paso de los segundos mientras se presiona un pulsador. Si una luz se encuentra en el mismo carril que las patitas de el pulsador, esta no encendera, tuvimos un problema con esto y lo solucionamos notando esta condición de la placa.

- Inspiracion:

* Ejemplo clase 02; Semáforo
* Ejemplo clase 04; Pulsador
* Video Secuencia de Leds con Arduino - Ivan Espinoza YT
* Practicasconarduino.cl

- https://github.com/jibbx/AV-ERDDEL
