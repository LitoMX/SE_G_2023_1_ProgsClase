String dato = "E001R056R300T";
int numeros[3];
String separar[3];
char* dividir = NULL;
int i = 0;
void setup() {
  Serial.begin(9600);
  if (dato.charAt(0) == 'E' && dato.charAt(dato.length() - 1) == 'T') {
    dato = dato.substring(1,dato.length()-1);
    char *cad =dato.c_str();
    dividir = strtok(cad, "R");
    int cont = 0;
    while (dividir != NULL) {
      separar[cont]=dividir;
      numeros[cont] = separar[cont].toInt();
      dividir = strtok(NULL, "R");
      cont++;
    }
    Serial.println("");
    Serial.println("--------");
    for(i=0; i<3;i++)
    {
      Serial.println(numeros[i]);
    }
  }
}

void loop() {
  //Nada
}