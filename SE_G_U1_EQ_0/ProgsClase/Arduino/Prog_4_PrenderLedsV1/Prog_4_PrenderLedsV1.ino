int led1 = 10; //pin digital = {0-13}
int led2 = 11;
int led3 = 12;

void setup() {
  // put your setup code here, to run once:  

  //Debe establecerse el modo de trabajo de un pin digital, ya sea este de entrada o de salida

  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT); 
  pinMode(led3, OUTPUT); 

}

void loop() {
  
  //digitalWrite(led, HIGH); //PRENDER EL LED
  //digitalWrite(led, true); //PRENDER EL LED
  digitalWrite(led1, 1); //PRENDER EL LED
  digitalWrite(led2, 1); //PRENDER EL LED
  digitalWrite(led3, 1); //PRENDER EL LED

  delay(1000);

  //digitalWrite(led, LOW); //APAGA EL LED
  //digitalWrite(led, false);
  digitalWrite(led1, 0);
  digitalWrite(led2, 0);
  digitalWrite(led3, 0);

  delay(1000);

}
