/*****************************************************************************/
//	Auteur:				    Guillaume Pelletier
//	Description:		  	Prototype ESP32
//	Date de creation:		Octobre 2020
//	But:				    Vérifier le fonctionnement de l'ESP32
/*****************************************************************************/

#include <Arduino.h>		//Librairie requise pour le SDK Arduino


//Initie la LED
void setup() {
pinMode (2, OUTPUT);
}

//Modification de l'état de la LED
void loop() {

//Ouvre la LED 1 seconde
digitalWrite(2, HIGH);
delay(1000);

//Ferme la LED 1 seconde
digitalWrite(2, LOW);
delay(1000);
}
