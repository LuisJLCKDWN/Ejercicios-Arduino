int semaforo1Rojo = 3;
int semaforo1Ambar = 4;
int semaforo1Verde = 5;
int semaforo2Rojo = 6;
int semaforo2Ambar = 7;
int semaforo2Verde = 8;

void setup() {
  pinMode(semaforo1Rojo, OUTPUT);
  pinMode(semaforo1Ambar, OUTPUT);
  pinMode(semaforo1Verde, OUTPUT);
  pinMode(semaforo2Rojo, OUTPUT);
  pinMode(semaforo2Ambar, OUTPUT);
  pinMode(semaforo2Verde, OUTPUT);
}

void loop() {
  // Rojo 1 - Verde 2 durante 3 segundos
  digitalWrite(semaforo1Rojo, HIGH);
  digitalWrite(semaforo2Verde, HIGH);
  delay(3000);
  
  // Rojo 1 - Amarillo 2 (parpadea) durante 500 ms
  digitalWrite(semaforo1Ambar, HIGH);
  delay(500);
  digitalWrite(semaforo1Ambar, LOW);
  delay(500);
  
  // Verde 1 - Rojo 2 durante 3 segundos
  digitalWrite(semaforo1Rojo, LOW);
  digitalWrite(semaforo1Verde, HIGH);
  digitalWrite(semaforo2Verde, LOW);
  digitalWrite(semaforo2Rojo, HIGH);
  delay(3000);
  
  // Amarillo 1 (parpadea) - Rojo 2 durante 500 ms
  digitalWrite(semaforo1Ambar, HIGH);
  delay(500);
  digitalWrite(semaforo1Ambar, LOW);
  digitalWrite(semaforo2Rojo, LOW);
  delay(500);
}