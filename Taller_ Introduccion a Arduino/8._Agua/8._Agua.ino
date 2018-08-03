
double valorAgua1;
double valorAgua2;
void setup() {
  Serial.begin(9600);
}
 
void loop() {
  valorAgua1 = analogRead(2);
  valorAgua2 = analogRead(3);
  
  //630 es el valor maximo que he visto que mostraba
 valorAgua1 = (valorAgua1*100)/675;
 valorAgua2 = (valorAgua2*100)/675;
  //Tomar cualquier valor superior a 630 como un 100%
  if (valorAgua1 > 100 && valorAgua2 > 100 )
    valorAgua1 = valorAgua2 = 100;
 
  Serial.print("Nivel de agua en %: ");
  Serial.println("Num1: ");
  Serial.println(valorAgua1);
  Serial.println("Num2: ");
  Serial.println(valorAgua2);
 
  delay(1000);
}

