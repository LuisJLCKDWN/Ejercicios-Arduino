const int buttonPin = 4;
const int ledPins[] = {5, 6, 7, 8};
const int numLeds = 4;
int currentIndex = 0;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Configura el pin del pulsador como entrada con resistencia de pull-up
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT); // Configura los pines de los LEDs como salidas
    digitalWrite(ledPins[i], LOW); // Apaga los LEDs al inicio
  }
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    // Llama a la función para ejecutar la secuencia cuando se presiona el pulsador
    ejecutarSecuencia();
  }
}

void ejecutarSecuencia() {
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH); // Enciende el LED actual
    delay(200); // Espera 200 ms
    digitalWrite(ledPins[i], LOW); // Apaga el LED actual
  }
}


//IMPORTANTE: Hace falta el Pulsador. SIN ESTO NO SE EJECUTARA.