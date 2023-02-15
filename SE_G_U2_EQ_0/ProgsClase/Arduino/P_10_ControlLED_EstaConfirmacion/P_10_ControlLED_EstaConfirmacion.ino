int led = 13; //pin digital de pruebas de Arduino

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);

  Serial.begin(9600);
  Serial.setTimeout(100);//ms por defecto 1000
}

int estado = 0;

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    estado = Serial.readString().toInt();
    Serial.println(String(estado));
    digitalWrite(led, estado);
  }

 
  delay(10);
  
}
