void setup() {
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);

}

void loop() {
  //Empiezan apagados
digitalWrite(8,LOW);
delay(200);
digitalWrite(7,LOW);
delay(200);
digitalWrite(6,LOW);
delay(200);
digitalWrite(5,LOW);
delay(200);
//Secuencia de encendido
digitalWrite(8,HIGH);
delay(200);
digitalWrite(7,HIGH);
delay(200);
digitalWrite(6,HIGH);
delay(200);
digitalWrite(5,HIGH);
delay(200);
}