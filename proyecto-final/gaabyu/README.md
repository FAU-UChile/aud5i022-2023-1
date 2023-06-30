
## Documentación
Estoy trabajando con [Gaabyu](http://github.com/Gaabyu) y [joaquinsuazo](http://github.com/joaquinsuazo)

# Instrumento Musical Arduino - Modos Musicales de DO

 Este codigo sirve para reproducir en un buzzer las escalas [ DO Jonica - DO Eolica - DO Locria ] mediante el uso de un potenciometro y botones. 
 Al presionar alguno de los botones y desplazarse por el rango de el potenciometro, se reproduciran las notas de la escala, las cuales, apareceran en el monitor serial en el formato: Nota (Escala) (ValorPotenciometro)

## Materiales
- 1 Hardware de Arduino 1 (Version Software 2.1.0)
- 1 Breadboard
- 1 Potenciometro
- 1 Buzzer o altavoz
- 3 botones
- 6 Cables de color verde
- 4 Cables de color amarillos
- 2 Cables de color rojo
- 1 cable de color blanco
  


## Registro de avance 1

![img-avance-1](https://github.com/joaquinsuazo/aud5i022-2023-1/assets/128074599/a9837f41-10f5-465a-be30-8447086e0375)


## Registro de avance 2

probamos dentro del codigo la herramienta de millis ademas de agregar al hardware un potenciometro.

![img-avance-2](https://github.com/joaquinsuazo/aud5i022-2023-1/assets/128074599/2b115492-26d6-4d89-b4f7-7c4652eb06d7)![img-avance-2-2](https://github.com/joaquinsuazo/aud5i022-2023-1/assets/128074599/64d4b48d-371c-41c4-9298-8e387ddf04c9)


## Registro de avance 3

modificamos el orden del hardware para mayor facilidad en las conexiones ademas de dar ciertos arreglos a como funciona el proyecto. incluimos al hardware un boton por el cual indicara cuando es que el sonido del buzzer debe ser activado.

tras terminado este arreglo proseguimos por crear nuevo codigo en donde el boton, buzzer y potenciometro funcionasen entre si correctamente ademas de dar una explicacion de que hace cada parte en el codigo. 
![img-avance-3-1](https://github.com/joaquinsuazo/aud5i022-2023-1/assets/128074599/f5ed36e8-8d8b-4add-a7dd-c4acad701797)![img-avance-3-2](https://github.com/joaquinsuazo/aud5i022-2023-1/assets/128074599/71bd7d5f-6671-4ec5-a15e-92347831090e)

https://github.com/joaquinsuazo/aud5i022-2023-1/assets/128074599/2f528f22-5c43-4b08-84fc-838ecff26650


## Procedimiento 

Conectamos 5 cables en la Breadboard para darle energía al potenciómetro

*	Cable rojo suministra 5v a carril positivo
*	Cable Verde desde carril negativo a GND 
*	Patita central del potenciómetro a analogic in A0
  
![1688093681482](https://github.com/joaquinsuazo/aud5i022-2023-1/assets/128186062/e40f4ec7-9b11-4256-8945-6766bdc774ae)
![1688093681499](https://github.com/joaquinsuazo/aud5i022-2023-1/assets/128186062/5f51feb9-cfe3-4121-b6af-248ef7394693)

Se incorpora Buzzer él y dos cables en sus respectivos carriles

*	Cable amarillo desde el lado positivo a pin 12
*	Cable verde hacia carril negativo
  
![1688093647594](https://github.com/joaquinsuazo/aud5i022-2023-1/assets/128186062/fbb03721-3021-4d4b-8c4a-5d7d27c359d8)
![1688093647581](https://github.com/joaquinsuazo/aud5i022-2023-1/assets/128186062/a21fee23-9a04-4309-8e1c-0bc2dbb7cab7)

Agregar botones

*	Colocación botón1, boton2 y boton3 al centro de la Breadboard 
*	Cables amarillos conducen una patita a pines 11, 10 y 9 respectivamente
* Cables verdes conectan la otra patita a GND
  
![1688093627924](https://github.com/joaquinsuazo/aud5i022-2023-1/assets/128186062/3d854e09-cafc-40cc-b5b7-b66eb9c33ba9)
![1688093627898](https://github.com/joaquinsuazo/aud5i022-2023-1/assets/128186062/58915f76-c6ba-46d9-8a69-ebfc2b7dc861)
![1688093627911](https://github.com/joaquinsuazo/aud5i022-2023-1/assets/128186062/2d354a9b-e07d-4b58-bf2c-b267c243c342)
![1688093627938](https://github.com/joaquinsuazo/aud5i022-2023-1/assets/128186062/136f65d9-b9a3-47b0-b4af-af8048843d3d)



## Código para Arduino uno <br /> 
<sub> controlar el Buzzer a traves de potenciometro y botones </sub>


**Repositorio: https://github.com/joaquinsuazo/aud5i022-2023-1/tree/main/proyecto-final/Maginni/sketch_EscalasDO.**

**Referencia: https://www.youtube.com/watch?v=5I7kO58g6xA.**

## Conclusión 

En este trabajo aprendimos como se relacionan los componentes del Arduino como los botones, el Buzzer y el potenciómetro. Esto nos brindó una experiencia didáctica, en donde hicimos que estos componentes funcionaran en conjunto. También nos permite ampliar nuestro conocimiento mediante la experimentación con notas musicales.
Nos encontramos con variadas dificultades. Tuvimos algunos problemas con el color de los cables, también se nos complicó incorporar la función del potenciómetro y los botones al mismo tiempo. Además, en un momento quisimos agregar un código de processing para complementar el trabajo, pero hubo problemas al desarrollar un código que leyera la información del Arduino
A pesar estos problemas, quedamos conformes con el proyecto ya que enriquecimos nuestros conocimientos. Siempre obtenemos una enseñada acerca sobre estos desafíos.








