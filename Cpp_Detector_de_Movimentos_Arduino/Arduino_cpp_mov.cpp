// Código em C++, direcionado para um detector de movimento no Arduino

int time = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int valorRecebido = analogRead(A0);

  Serial.println(valorRecebido);

  if (valorRecebido > 0) {
    while (time <= 5000) {
      tone(2, 1000);
      delay(500);
      noTone(2);
      delay(500);
      time += 1000;
    }
    time = 0; 
  }
}