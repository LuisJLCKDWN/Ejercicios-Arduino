const int ledPins[] = {5, 6, 7, 8, 9};
const int buzzerPin = 10;
const int buttonPin = 11;

int sequenceDelay = 200;  // Tiempo inicial entre encendido y encendido de LEDs (200 ms)
int minDelay = 10;        // Tiempo mínimo entre encendido y encendido de LEDs (10 ms)
int correctDelayDecrease = 20;  // Reducción de tiempo al acertar

void setup() {
  for (int i = 0; i < 5; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);  // Apaga todos los LEDs al inicio
  }
  pinMode(buzzerPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);  // Configura el pin del pulsador como entrada con resistencia de pull-up
}

void loop() {
  int middleLed = random(0, 5);  // Selecciona un LED al azar como el "intermedio"
  
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(sequenceDelay);
    digitalWrite(ledPins[i], LOW);
    
    if (i == middleLed) {
      // Espera a que el jugador presione el pulsador cuando el LED intermedio se enciende
      int buttonState = digitalRead(buttonPin);
      if (buttonState == LOW) {
        // El jugador acertó
        digitalWrite(buzzerPin, HIGH);  // Activa el zumbador
        delay(100);  // Duración del zumbido
        digitalWrite(buzzerPin, LOW);
        sequenceDelay -= correctDelayDecrease;  // Reduce el tiempo entre encendido y encendido
        if (sequenceDelay < minDelay) {
          sequenceDelay = 200;  // Si el tiempo es menor que el mínimo, lo restablece a 200 ms
        }
      }
    }
  }
}