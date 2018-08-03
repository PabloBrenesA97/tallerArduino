// Variable declaración
// Declaración de los PIN-es mediante un array
int pinArray [] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
int controlLed = 13; // LED de control
int waitNextLed = 100; // Tiempo antes de encender el siguiente LED
// Número de LED-s que permanecen encendidos antes de empezar a apagarlos para
//formar la cola
int tailLength = 4;
// Número de LED-s conectados (que es también el tamaño del array)
int lineSize = 11;
void setup() // Configuración de los PIN-es como salida digital
{
  int i;
  pinMode (controlLed, OUTPUT);
  for (i = 0; i < lineSize; i++)
  {
    pinMode(pinArray[i], OUTPUT);
  }
} void loop()
{
  int i;
  // Se establece la longitud de la cola en un contador
  int tailCounter = tailLength;
  // Se enciende el LED de control para indicar el inicio del loop
  digitalWrite(controlLed, HIGH);
  for (i = 0; i < lineSize; i++)
  {
    digitalWrite(pinArray[i], HIGH); // Se encienden consecutivamente los LED
    // Esta variable de tiempo controla la velocidad a la que se mueve la estrella
    delay(waitNextLed);
    if (tailCounter == 0)
    {
      // Se apagan los LED-s en función de la longitud de la cola.
      digitalWrite(pinArray[i - tailLength], LOW);
    }
    else if (tailCounter > 0)
      tailCounter--;
  }
  for (i = (lineSize - tailLength); i < lineSize; i++)
  {
    digitalWrite(pinArray[i], LOW); // Se apagan los LED
    // Esta variable de tiempo controla la velocidad a la que se mueve la estrella
    delay(waitNextLed);
  }
}
