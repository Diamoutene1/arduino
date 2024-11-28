int declencheur=7;
int echo=6;
long distance,dure;// declarer de entir distance et dure j'ai utulier long car c'est un entier de grande taille
void setup() {
  // put your setup code here, to run once:
  pinMode(declencheur,OUTPUT);//connecter comme sortie
  pinMode(echo,INPUT);//connecter comme  entrer
  Serial.begin(9600);//on initialise le moteur serie a une vitesse de 9600bauds

}

void loop() {
  // put your main code here, to run repeatedly
  digitalWrite(declencheur,LOW);    //on envoie un signal bas au declencheur 0v            
  delayMicroseconds(2); // on garde le signal pendant 02 micro seconde                
  digitalWrite(declencheur, HIGH);   //on envoie un signal haut au declencheur 5V
  delayMicroseconds(2);    // on garde le signal pendant 02 micro seconde                
  digitalWrite(declencheur, LOW);  //on envoie un signal bas au declencheur 0v                  
   
  dure = pulseIn(echo, HIGH);               // Lecture du temps écoulé avant que l' echo reçoive un signal,//pulseIn mesure le temps (en microsecondes) pendant lequel le signal sur la broche echo reste haut.
  distance = dure*340/(2*10000);         // Transforme le temps en distance (cm) 340=Vitesse du son en m/s  duree = temps mis pour l'aller retour en microsecondes

  Serial.print("La distance est : ");     // affiche le message entre guillemets sur le moniteur série
  Serial.print(distance);                 // affiche la valeur de la variable distance sur le moniteur série
  Serial.println(" cm");                  // affiche le message entre guillemets sur le moniteur série
  delay(1000);

}
