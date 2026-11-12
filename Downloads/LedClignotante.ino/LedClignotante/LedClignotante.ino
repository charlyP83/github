// Définition des broches
#define pinLed 4
#define pinBouton 8

void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(pinBouton, INPUT);
}

void loop() {

  int etatBouton = digitalRead(pinBouton);

  if (etatBouton == HIGH) {
    digitalWrite(pinLed, HIGH);
  } 

  else {
    digitalWrite(pinLed, LOW);
  }
}