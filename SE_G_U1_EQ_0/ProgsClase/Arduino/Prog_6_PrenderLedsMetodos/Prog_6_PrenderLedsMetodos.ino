int leds[] = {10,11,12}; //pin digital = {0-13}
int i;
int tiempoPrendido;
int tiempoApagado;

void setup() { 
  // put your setup code here, to run once:  
  tiempoPrendido =1000;
  tiempoApagado =500;

  //Debe establecerse el modo de trabajo de un pin digital, ya sea este de entrada o de salida
  for(i=0; i<3; i++){
    pinMode(leds[i], OUTPUT); 
  }

}

void loop() { 
  actionLED(1);
    delay(tiempoPrendido);
  actionLED(0);
    delay(tiempoApagado);
}

void actionLED(int v){
  for(i=0; i<3; i++){
    digitalWrite(leds[i], v);
  }
}
