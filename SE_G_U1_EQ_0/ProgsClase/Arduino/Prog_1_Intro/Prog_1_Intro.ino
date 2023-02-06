//1.- EL METODO SETUP Y LOOP DEBEN PERMANECER AUNQUE NO SE UTILICE ALGUNO
//2.- LA DECLARACION Y ASIGNACION DE VARIABLES SE REALIZA IGUAL QUE EN JAVA
//      UNICAMENTE SE DEBE CONSIDERAR QUE LOS TIPOS DE DATOS SON LIGERAMENTE DIFERENTES
//            - TAREA INVESTIGAR LAS CAPACIDADES DE LOS TIPOS DE DATO EN ARDUNO

int valor; //en java es 4 bytes --- en arduino es de 2 bytes

byte b;

char c;

long l;

String s;

bool boo;

int v[5]; //los vectores se declaran y utilizan como en c++

//EN ARDUINO CUANDO SE SOBREPASA AL LIMITE DEL TIPO DE DATO DE UNA VARIABLE
// SE APLICA RESIDUO.

byte variable;

void setup() {
  // put your setup code here, to run once:
  variable = 0;
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(variable++);

  delay(250); //ms = milisegundos
}
