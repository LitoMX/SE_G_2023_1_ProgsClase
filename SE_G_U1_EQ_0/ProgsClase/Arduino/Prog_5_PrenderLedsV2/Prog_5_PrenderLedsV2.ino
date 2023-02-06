int leds[] = {10,11,12}; //pin digital = {0-13}
int i;

void setup() {
  // put your setup code here, to run once:  

  //Debe establecerse el modo de trabajo de un pin digital, ya sea este de entrada o de salida

  for(i=0; i<3; i++){
    pinMode(leds[i], OUTPUT); 
  }

}

void loop() {
  
  for(i=0; i<3; i++){
    digitalWrite(leds[i], 1);    
  }
  
  delay(1000);

  for(i=0; i<3; i++){
    digitalWrite(leds[i], 0);
  }
  
  delay(1000);

}
