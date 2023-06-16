01
estoy trabajando con [laura] (https://github.com/laura.simunovic)

Desde donde comenzo este trabajo

Inicialmente esta fue la idea:
El trabajo se basa en reproducir una cancion mediente el parlante en Arduino y que simultaneamente las leds pudieran 'reproducir' la frecuencia de la canciobn dependiendo de los bajos y los altos. Algo así como los salvapantallas donde se ven 'lienas de un solo color altas' y lineas ' bajas' de pendiendo del los fuertes y suaves de una canción, aqui algunas referencias 
adjunto referencias visiuales y el trabajo de referencia en arduino que es un reloj led que cambia de hora y segundos pasando por distintos leds para determinar que hora es.

Ahora la idea cambio a un sensor que percibe la distancia y mediante ello un led RGB cambiando dependiendo de la proximidad del objeto, en este caso, la mano y la sombra que proyecta esta. Con el cambio de color en el LED simultaneamnete se produce un sonido producido por un Buzzer.

Los pasos que se siguieron:
1. El primer paso fue comprobar el funcionamiento del sensor mediante el acercamiento o sombra producida por la mano.
2. segundo: fue probar con un led rgb de dos tonos verde y rojo: mientras más lejos este la mano del sensor este sera rojo, conforme se va hacercando la mano al sensor este pasa a ser verde
3. ahora, hecho esto, utilizmos cuatro 'if': rojo, azul, verde y blanco, el rojo es el color preterminado al tener la mano lejos del sensor, el azul; mientras se va acercando y el blanco vendria siendo cuando el sensor este totalmente cubierto con la mano.

4. BUZZER: primer intento; emite un sonido entre el paso del rojo al verde: lo que bscamos hacer es que por cada paso de color: rojo, verde, azul y blanco, el sonido siga emitiendose constantemente y a mayor volumen

se adjuntara con los vanazes producidos en la clase del dia 16.06.23
