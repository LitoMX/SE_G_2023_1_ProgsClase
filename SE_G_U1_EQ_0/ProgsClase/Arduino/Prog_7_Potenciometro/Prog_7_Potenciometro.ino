int potenciometro = A0; //analogico -> A0 - A5
//3 entradas:
// - izquierda (gnd, 5v)
// - centro. = A0
// - derecha   (5v, gnd)


void setup() { 
  // put your setup code here, to run once:  
  
  //LOS PINES ANALOGICOS, SOLO FUNCIONAN COMO ENTRADAS, POR LO QUE NO SE REQUIERE SE DEFINA EL MODO DE TRABAJO

  //ADC = // 5VOLTS DE VOLTAJE DE REFERENCIA //10 BITS DE RESOLUCION -- > 1024 VALORES = {0, 1023}
  //0 = 0 VOLTS
  //1023 = 5VOLTS

  Serial.begin(9600);
}

int valor; 
void loop() { 

  valor = analogRead(potenciometro);
  Serial.println("Valor Leido: " + String(valor));
  delay(250); //ms

}


