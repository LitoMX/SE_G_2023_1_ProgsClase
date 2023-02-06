//PWM = MODULACION POR ANCHO DE PULSO
// ANALOGIA:  CONSISTE EN SIMULAR UNA SEÑAL ANALOGICA A TRAVES DE LA MODIFICACION DEL TIEMPO DE TRABAJO 
// (ALTO) DE UNA SEÑAL DIGITAL

//PWM = 1 BYTE => 0 AL 255. 
//DONDE   0 = 0VOLTS
//      255 = 5VOLTS

//NO TODOS LOS PINES DIGITALES SON PWM, SOLO LOS QUE ASI LO INDICAN.
//EN EL CASO DEL ARDUINO UNO SON AQUELLOS QUE CUENTAN CON UNA VIRTGULILLA A SU LADO  (~) 

int led = 6; //pin comptabile con pwm 

void setup() { 
  //A LOS PINES PWM NO SE LES ESTABLECE MODO DE TRABAJO
}

int i;
void loop() { 
    for(i = 0;i<255;i++){
      analogWrite(led, i); //PWM
      delay(10);
    }

    for(i = 255; i>0; i--){
      analogWrite(led, i); //PWM
      delay(10);
    }

}


