int led1=6;
int led2=7;
void setup() {
  // put your setup code here, to run once:
   pinMode(led1, OUTPUT);//pinMode() : Configure les broches  comme sorties.
   pinMode(led2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
    // Allumer LED1 et éteindre LED2
  digitalWrite(led1, HIGH);  //Allume ou éteint une LED en mettant la broche à HIGH ou LOW(si cathode connecter a GND la lampe s'allume si contraire non)
  digitalWrite(led2, LOW);//Allume ou éteint une LED en mettant la broche à HIGH ou LOW(si cathode connecter a GND la lampe s'allume si contraire non) 
  delay(500); // Attendre 500 ms

  // Allumer LED2 et éteindre LED1
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(500); // Attendre 500 ms

}
