int potentio=A0;
int led1=7;
int led2=6;
int lire;// pour lire la valeur du potentio
 void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(potentio,INPUT);
  Serial.begin(9600); // Démarrer la communication série à 9600 bauds

}

void loop() {
  // put your main code here, to run repeatedly:
  lire=analogRead(potentio);//analogRead()permet de lire une valeur analogique
  lire=map(lire,0,1023,100,1000);//map() est utilisée pour redimensionner une valeur d'une plage donnée à une autre plage map(valeur, in_min, in_max, out_min, out_max);
  // Afficher la valeur lue pour vérification
  Serial.print("Delai: ");
  Serial.println(lire);
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  delay(lire);//on attend le temps de la variable lire
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  delay(lire);//on attend le temps de la variable lire

}
