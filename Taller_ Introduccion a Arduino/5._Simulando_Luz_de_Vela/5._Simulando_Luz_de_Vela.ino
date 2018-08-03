
int ledPin = 9; // selecciona el puerto PWM
int val = 0; // define y pone a cero la variable "brillo"
int delayval = 0; // define el intervalo de cambio de valor de salida
void setup() {
 randomSeed(0); // inicializa el generador de números aleatorios
 pinMode(ledPin, OUTPUT); // declara el pin de SALIDA pin 9
}
void loop() {
 val = random(100,255); // genera un número aleatorio entre 100 y 255 que asigna a la variable val
 analogWrite(ledPin, val); // envía ese valor a la salida pin 9
 delayval = random(50,150); // genera un numero aleatorio entre 30 y 100 y lo asigna a la variable de temporización
 delay(delayval); // espera un tiempo delayval medido en milisegundos
}
