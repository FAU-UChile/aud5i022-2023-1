Estoy trabajando con [chicomaker](https://github.com/chicomaker)

# acerca de 
## materiales

- microcontrolador Seeeduino XIAO SAMD21.
- MQ-3 modulo sensor de alcohol. 
- luces LED.
- pulsador.
- termoretractil.

## software

- Arduino 2.1.0.

## armado de circuito

1. 

conectar los cables del Seeeduino al sensor.

- soldar las conexiones al Seeduino ocupando el pin analogo A0, el pin digital D1 y el 5V y GND.
- conectar pines al sensor

2.

colocar los LED a la carcasa y soldarlos.

- conectar pines a los LED y soldarlos.
- colocar termoretractiles a los conectores.

3.

conectar LED al Seeeduino y al sensor.

- conectar GND de los LED a GND del Seeeduino mediante un pin.
- conectar GND de los LED a GND del sensor mediante un pin.
- conectar pines de los LED al Seeeduino: digital D3, D4 y D5.
- positvo LED rojo a pin D5
- positivo LED amarillo a pin D4
- positvo LED verde a pin D3

4.

conectar pulsador
- con una resistencia de 10k, conectar pulsador a GND 
- conectar pin superior de pulsador a 5V de Seeeduino.
- pulsador a A9

5.

conectar Buzzer

- positivo del Buzzer a pin 8
- negativo del Buzzer va a GND.

## código para Seeeduino




