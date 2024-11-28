#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Utilisez l'adresse trouvée (0x3F)
LiquidCrystal_I2C lcd(0x3F, 16, 2);

void setup() {
  // Initialisation de l'afficheur LCD
  lcd.init();
  lcd.backlight(); // Allume le rétroéclairage

  // Affiche un message sur l'afficheur LCD
  lcd.setCursor(0, 0); // Déplace le curseur à la première ligne
  lcd.print("Bonjour les");
  lcd.setCursor(0, 1); // Déplace le curseur à la deuxième ligne
  lcd.print("Sideens");
}

void loop() {
  // Pas de code dans la boucle loop() car l'affichage est statique
}
