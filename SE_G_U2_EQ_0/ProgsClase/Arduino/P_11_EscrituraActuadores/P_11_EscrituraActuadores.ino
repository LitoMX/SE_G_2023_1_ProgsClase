//Actuadores analogicos. -> PWM

int actuador1 = 3;
int actuador1 = 5;
int actuador1 = 6;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.setTimeout(10);  
}

int vA, vB, vC;
void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    String c = Serial.readString();
    //Serial.println(c); //confirmacion de la lectura recibida
    //E001R056R300C    
    if(c.length() == 13){ //cadena completa      
      if(c.charAt(0)=='E' && c.charAt(c.length()-1)=='C'){ //segunda validacion   
          //E001R056R300C       
          c = c.substring(1,c.length()-1) + 'R';
          Serial.println("L:"+c + "T");
          int cont = 0;
          String temp="";
          for(int i = 0; i<c.length();i++){
            if(c.charAt(i)!='R'){
              temp += c.charAt(i);
            }
            else{
              switch(cont){
                case 0:
                    vA = temp.toInt();
                break;
                case 1:
                    vB = temp.toInt();
                break;
                case 2:
                    vC = temp.toInt();
                break;
              }
              temp = "";
              cont++;
            }
          }

          Serial.println(String(vA) + "   " + String(vB) + "   "+ String(vC));

      }
    }

  }

  delay(100);
}
