Estoy trabajando con [chicomaker](https://github.com/chicomaker)

## Contenidos de este repositorio

- carpeta [codigo_arduino](https://github.com/malparidv/aud5i022-2023-1/tree/main/proyecto-final/malparidv/Codigo_arduino)

- carpeta [diseño_3D](https://github.com/malparidv/aud5i022-2023-1/tree/main/proyecto-final/malparidv/Dise%C3%B1o%203D)

- carpeta [imágenes](https://github.com/malparidv/aud5i022-2023-1/tree/main/proyecto-final/malparidv/Im%C3%A1genes)

- archivo [README.md](https://github.com/malparidv/aud5i022-2023-1/blob/main/proyecto-final/malparidv/README.md)

---

# Acerca de 

Proyecto final **ALCHOTEST: un controlador de alcohol pórtatil y preciso**

###### x Diego Lopez y Antonia Vásquez para Diseño de interfaz electrónica mediante Arduino - Docentes: Aaron Montoya e Ignacio Passalacqua - FAU.Uchile.

---

### Video Presentación

https://drive.google.com/drive/u/2/folders/1fU6XIDReTW_ktsL8KD7b0nyMxMKf0-Na

### Materiales

- microcontrolador Seeeduino XIAO SAMD21.
- MQ-3 modulo sensor de alcohol. 
- luces LED.
- termoretractil.
- cables.
- buzzer.

### Software

- Arduino 2.1.0.
- Shapr3D.

### Impresora

  - Impresora 3D Creality Ender-3 S1

### Diseño en 3D

- Diseñar en 3D la carcasa del Alchotest en Shapr3D.

- Imprimir en Ender-3 S1.

![imagen](https://github.com/malparidv/aud5i022-2023-1/blob/main/proyecto-final/malparidv/Im%C3%A1genes/WhatsApp%20Image%202023-06-30%20at%2011.09.39%20AM(3).jpeg?raw=true)

# Armado de circuito

1. 

conectar los cables desde Seeeduino al sensor.

- del Seeduino pin análogo **A0**, el pin digital **D1** y el **5V** y **GND**.
- al sensor pin análogo **A0**, pin digital **D0**, **5V** y **GND** respectivamente.

![imagen1](https://github.com/malparidv/aud5i022-2023-1/blob/main/proyecto-final/malparidv/Im%C3%A1genes/WhatsApp%20Image%202023-06-30%20at%2011.09.39%20AM.jpeg?raw=true)

2.

colocar LED a la carcasa y soldarlos.

![imagen](https://github.com/malparidv/aud5i022-2023-1/blob/main/proyecto-final/malparidv/Im%C3%A1genes/WhatsApp%20Image%202023-06-30%20at%2011.09.39%20AM(5).jpeg?raw=true)

- conectar cables a positivo de LEDs y soldarlos.

![imagen](https://github.com/malparidv/aud5i022-2023-1/blob/main/proyecto-final/malparidv/Im%C3%A1genes/WhatsApp%20Image%202023-06-30%20at%2011.09.39%20AM(4).jpeg?raw=true)

- colocar termoretractiles a los cables.

![imagen](https://github.com/malparidv/aud5i022-2023-1/blob/main/proyecto-final/malparidv/Im%C3%A1genes/WhatsApp%20Image%202023-06-30%20at%2011.09.39%20AM(6).jpeg?raw=true)

3.

conectar LED al Seeeduino y al sensor.

- **GND** de LEDs a **GND** del Seeeduino.
- **GND** de LEDs a **GND** del sensor.

![imagen](https://github.com/malparidv/aud5i022-2023-1/blob/main/proyecto-final/malparidv/Im%C3%A1genes/WhatsApp%20Image%202023-06-30%20at%2011.09.39%20AM(1).jpeg?raw=true)

- positvo LED rojo a pin **D5** del Seeeduino.
- positivo LED amarillo a pin **D4** del Seeeduino.
- positvo LED verde a pin **D3** del Seeeduino.

![imagen](https://github.com/malparidv/aud5i022-2023-1/blob/main/proyecto-final/malparidv/Im%C3%A1genes/WhatsApp%20Image%202023-06-30%20at%2011.09.39%20AM(2).jpeg?raw=true)

5.

conectar Buzzer

- positivo del Buzzer a pin **8** del Seeeduino.
- negativo del Buzzer a **GND**.

---

### Código para Seeeduino

Monitorear los niveles de alcohol mediantes luces LED

**Repositorio:** [codigo_arduino/Alchotest.ino](https://github.com/malparidv/aud5i022-2023-1/blob/main/proyecto-final/malparidv/Codigo_arduino/Alchotest.ino)

**-Código basado en:**

How MQ3 Alcohol Sensor Works? & Interface it with Arduino:
https://lastminuteengineers.com/mq3-alcohol-sensor-arduino-tutorial/



