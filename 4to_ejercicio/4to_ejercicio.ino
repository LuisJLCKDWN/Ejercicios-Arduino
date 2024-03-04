int leds[] = {5, 6, 7, 8, 9, 10, 11};
int numLeds = 7;
int tiempoEncendido = 50; // 50 ms

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // Secuencia de 5 a 11
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], HIGH);
    delay(tiempoEncendido);
    digitalWrite(leds[i], LOW);
  }

  // Secuencia de 11 a 5
  for (int i = numLeds - 1; i >= 0; i--) {
    digitalWrite(leds[i], HIGH);
    delay(tiempoEncendido);
    digitalWrite(leds[i], LOW);
  }
}