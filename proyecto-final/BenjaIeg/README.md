Estoy trabajando con [sofiafuentesd](https://github.com/sofiafuentesd/)

Idea de pryecto: Sampleo y dj
La idea se basa en una biblioteca de audios que se consisten de bases de ritmos hip hop y poder interactuar con estos aplicando elementos de dj como el "scratch" y el "sampleo"
Para interactuar con el audio utilizaremos  processing como el programa que va a trabajar el audio y sonido y arduino como el elemento analogo el cual le dara los parametros a processig de como reproducir el audio
Por ejemplo: usar la perilla para manipular la posicion en el tiempo en el que se reproduce el audio
Como utilizaremos processing que se hara cargo del sonido hemos investigado una serie de comandos que tienen directa relacion con las acciones esenciales que se necesitan trabajar en el audio.


https://processing.org/reference/libraries/sound/AudioSample.html Sampleo: seleccion de comandos que  trabajan muestras de audio.
  https://processing.org/reference/libraries/sound/AudioSample_jumpFrame_.html
  https://processing.org/reference/libraries/sound/AudioSample_loop_.html
  https://processing.org/reference/libraries/sound/AudioSample_jump_.html
  https://processing.org/reference/libraries/sound/AudioSample_frames_.html
  https://processing.org/reference/libraries/sound/AudioSample_pause_.html

Clase de avance (16 de junio) 

Repasamos el avance de la clase del día 02 de junio, en donde habíamos encontrado en la página de processing algunos códigos que podrían servir para nuestro proyecto Luego nos fuimos a la aplicación de processing en el pc y en: Herramientas > Libraries > Buscamos ‘Sound’ e instalamos “Sound| Provides a simple way to work with audio.” Autor “The Processing Foundation” Luego en Processing > Archivo > Ejemplos: Estuvimos verificando que ejemplos de códigos podían servir. El primer ejemplo que analizamos fue: “AudioSampleManipulation” Aquí investigamos que significaba ‘int’ , ‘float’, ‘amp’, ‘loop’, ‘mousePressed’ y ‘KeyPressed’. El segundo ejemplo que analizamos fue: “SimplePlayback” Probamos subir un audio descargado por nosotros al processing. Lo cual nos funcinó. Además le añadimos ‘Sample.Play’ con el Mousse en “mouse.Pressed” y ‘Sample.Stop’ con la tecla de espacio en “KeyPressed”. Lo que también funcionó. Estuvimos verificando si el boton funcionaba con el ejercicio de cambiar de color un background. Lo ultimo fue añadir un boton a arduino e incorporarlo como botón de Play y Pause. Al incorporarlo el audio se saturó y manejó parametros que no le pertenecían.

