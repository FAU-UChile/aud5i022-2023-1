// ej_00_for

// este codigo no requiere hardware extra
// solamente Arduino Uno

// es para aprender for loop
// y arreglos

int maximo = 8;

int misNumeros[] = {
  2020, 2021, 2022, 2023
};

// arreglo de Strings
// a su vez un String es un arreglo de chars
// asterisco * es tema avanzado, pointers
// este ejemplo es un extracto de la canción
// al siguiente nivel de javiera mena

char *javiera[] = {"no lo analices más",
                   "esto va más allá",
                   "se puede comparar",
                   "va con la dirección",
                   "de mi generación",
                   "que va a pasar",
                   "al siguiente nivel"
                  };

void setup() {

  // abrir puerto serial
  Serial.begin(9600);

}

void loop() {

  // for es una construccion de codigo
  // que esta presente en todos los lenguajes de programacion
  // sirve para contar, iterar, recorrer elementos en un arreglo
  // el paréntesis de for()
  // incluye 3 líneas de código cortas
  // separadas por punto y coma ;
  // la 1a es para declarar una variable a iterar
  // e inicializar su valor
  // la 2a es la condicion de finalizacion
  // la 3a es para actualizar valor
  for (int i = 0; i < maximo; i++) {
    Serial.println(i);
  }

}
