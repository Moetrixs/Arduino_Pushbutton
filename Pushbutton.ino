int buttonOff = 2;     // Tombol OFF pin 2
int buttonOn = 3;     // Tombol ON pin 3
int led =  13;      // led pin 13 / ledBuiltin

// variables will change:
int ledState = 0;         // variabel status Led

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buttonOff, INPUT);
  pinMode(buttonOn, INPUT);
}

void loop() {
  if (digitalRead(buttonOff)= HIGH) {
    ledState == 0;}
  else (digitalRead(buttonOn)= HIGH){
    ledState == 1;
  }

  if (ledState == 1) {
    digitalWrite(led, 1);   // Led Menyala
  } else {
    digitalWrite(led, 0);   // Led Padam
  }
}
