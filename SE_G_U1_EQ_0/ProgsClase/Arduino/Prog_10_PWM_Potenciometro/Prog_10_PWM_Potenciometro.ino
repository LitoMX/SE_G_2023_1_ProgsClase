int led = 6; //pin comptabile con pwm 
int pot = A0;

void setup() { 
  
}

int valor;
void loop() { 
    valor = analogRead(pot); //0 - 1023

    //opcion 1.. map

    //opcion 2.. logica
    valor = valor/4;

    analogWrite(led, valor); //0 - 255

}


