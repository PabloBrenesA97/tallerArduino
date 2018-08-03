// Deficion de variables globales
const int LED_VERDE=13;
const int LED_ROJO=10;
const int LED_AMARILLO=9;
unsigned int dato;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // Se inicializa con una velocidad 9600
  pinMode(LED_VERDE,OUTPUT);
  pinMode(LED_ROJO,OUTPUT);
  pinMode(LED_AMARILLO,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()>0){ // Si la conexion es permitada entra
    dato = Serial.read(); //Lectura del serial
    
    if(dato=='G')digitalWrite(LED_VERDE,HIGH);
    if(dato=='g')digitalWrite(LED_VERDE,LOW);
    if(dato=='Y')digitalWrite(LED_AMARILLO,HIGH);
    if(dato=='y')digitalWrite(LED_AMARILLO,LOW);
    if(dato=='R')digitalWrite(LED_ROJO,HIGH);
    if(dato=='r')digitalWrite(LED_ROJO,LOW);
    if(dato=='T'){
      digitalWrite(LED_VERDE,HIGH);
      digitalWrite(LED_AMARILLO,HIGH);
      digitalWrite(LED_ROJO,HIGH);
    }
    if(dato=='t'){
      digitalWrite(LED_VERDE,LOW);
      digitalWrite(LED_AMARILLO,LOW);
      digitalWrite(LED_ROJO,LOW);
    }
    
  }
}
