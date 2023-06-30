Avance n° 1 (02 de junio)

yeauh yeauh 
Estoy trabajando con [BenjaIeg] (https://github.com/BenjaIeg)
Nuestra primera idea es trabajar con una suerte de "juego de DJ" de manera que existe una biblioteca de instrumentales de hip hop en processing y que con el arduino poder activar sonidos de scratch. 
Estuvimos investigando en la pagina de Processing (https://processing.org/reference/libraries/sound/index.html) que heramientas existen para esto. 
Las que investigamos fueron: 
SoundFile (https://processing.org/reference/libraries/sound/SoundFile.html) 
AudioSample (https://processing.org/reference/libraries/sound/AudioSample.html)
Jump (https://processing.org/reference/libraries/sound/AudioSample_jump_.html)
Loop (https://processing.org/reference/libraries/sound/AudioSample_loop_.html)
Play (https://processing.org/reference/libraries/sound/AudioSample_play_.html)
Pause (https://processing.org/reference/libraries/sound/AudioSample_pause_.html)
Stop (https://processing.org/reference/libraries/sound/AudioSample_stop_.html)
JumpFrame (https://processing.org/reference/libraries/sound/AudioSample_jumpFrame_.html)
Volume (https://processing.org/reference/libraries/sound/Sound_volume_.html)
Delay (https://processing.org/reference/libraries/sound/Delay.html)
Reverb (https://processing.org/reference/libraries/sound/Reverb.html)






 En el avance n° 2 (16 de junio)
Repasamos el avance de la clase del día 02 de junio, en donde habíamos encontrado en la página de processing algunos códigos que podrían servir para nuestro proyecto
Luego nos fuimos a la aplicación de processing en el pc y en: Herramientas > Libraries > Buscamos ‘Sound’ e instalamos “Sound| Provides a simple way to work with audio.” Autor “The Processing Foundation” 
Luego en Processing > Archivo > Ejemplos: Estuvimos verificando que ejemplos de códigos podían servir. 
El primer ejemplo que analizamos fue: “AudioSampleManipulation” Aquí investigamos que significaba ‘int’ , ‘float’, ‘amp’, ‘loop’, ‘mousePressed’ y ‘KeyPressed’.
El segundo ejemplo que analizamos fue: “SimplePlayback” Probamos subir un audio descargado ("basederap.mp3") por nosotros al processing. Lo cual nos funcinó. Además le añadimos ‘Sample.Play’ con el Mousse en “mouse.Pressed” y ‘Sample.Stop’ con la tecla de espacio en “KeyPressed”. Lo que también funcionó. 
Luego estuvimos verificando si el boton funcionaba como en el ejercicio de cambiar de color un background. Para recordar como funcionaba este paso. 
Lo ultimo fue añadir un boton a arduino e incorporarlo como botón de Play y Pause para nuestro audio "basederap.mp3". Al incorporarlo el audio se saturó y manejó parametros que no le pertenecían. 
Quedamos en solucionarlo pronto. 




Avance n° 3 (23 de junio)
Durante la semana de "trabajo autonomo" 
Seguimos avanzando en base a los códigos que encontramos en 'Libraries' de Processing 
El ejemplo "SimplePlayback" como dice en su descripción:
"* This is a simple sound file player. Use the mouse position to control playback
 * speed, amplitude and stereo panning."
Nos ayudó a encontrar una manera de jugar con un sonido > "vibraphon.aiff" 
En este codigo la interfaz para distorsionar el sonido era mediante el mouse.
Luego de agregar otro sonido a este codigo > "basederap.mp3"
Seguimos solucionando el problema que nos arrojaba procesing cuando intentabamos hacer funcionar el codigo de 'S
