
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
  Serial.print(variable);

  //las CONDICIONALES SE MANEJAN IGUAL QUE EN JAVA

  if(variable<255){
    variable++;
  }
  else{
    Serial.print(" - Se ha llegado al limite de la variable");
  }

  Serial.println();
  delay(250); //ms = milisegundos

}
