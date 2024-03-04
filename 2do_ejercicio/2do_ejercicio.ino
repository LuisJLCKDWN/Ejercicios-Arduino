int leds[] = {2, 3, 4, 5, 6, 7, 8, 9};  // Pines a los que están conectados los LEDs
int numLeds = 8;  // Número de LEDs

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(leds[i], OUTPUT);  // Configura los pines de los LEDs como salidas
  }
}

void loop() {
  secuenciaNormal();
  secuenciaReversa();
  secuenciaSalto();
}

void secuenciaNormal() {
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], HIGH);
    delay(200);
    digitalWrite(leds[i], LOW);
  }
}

void secuenciaReversa() {
  for (int i = numLeds - 1; i >= 0; i--) {
    digitalWrite(leds[i], HIGH);
    delay(200);
    digitalWrite(leds[i], LOW);
  }
}

void secuenciaSalto() {
  for (int i = 0; i < numLeds; i += 2) {
    digitalWrite(leds[i], HIGH);
    delay(200);
    digitalWrite(leds[i], LOW);
  }
}