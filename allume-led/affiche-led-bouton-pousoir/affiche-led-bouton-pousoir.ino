int led1=6;

int led2=7;
int bp=4;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);//sortie  //pinMode() : Configure les broches  comme sorties ou entrer
  pinMode(led1,OUTPUT);//sortie
  pinMode(bp,INPUT);//entrer

}

void loop() {
  // put your main code here, to run repeatedly:
  if(bp){
    digitalWrite(led2,HIGH);//Allume led1 car cathode connecter a GND sinon LOW a la place de HIGH
    delay(1000);
    }
   else{
    digitalWrite(led1,HIGH);//Allume led1 car cathode connecter a GND sinon LOW a la place de HIGH
    delay(1000);
    }

}
