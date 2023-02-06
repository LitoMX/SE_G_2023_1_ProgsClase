int led = 13; //pin digital = {0-13}
//Arduino uno y Arduino Mega cuentan con un led de prueba en la placa ubicado en el pin 13


void setup() {
  // put your setup code here, to run once:  

  //Debe establecerse el modo de trabajo de un pin digital, ya sea este de entrada o de salida

  pinMode(led, OUTPUT); 

}

void loop() {
  
  //digitalWrite(led, HIGH); //PRENDER EL LED
  //digitalWrite(led, true); //PRENDER EL LED
  digitalWrite(led, 1); //PRENDER EL LED

  delay(1000);

  //digitalWrite(led, LOW); //APAGA EL LED
  //digitalWrite(led, false);
  digitalWrite(led, 0);

  delay(1000);

}
