//WORKS!!
#include <Servo.h>
#include <SoftwareSerial.h>

#define TxD 12
#define RxD 11
SoftwareSerial BTSerie(RxD,TxD);

 
Servo droite; // base 60;
Servo gauche; // base 64
Servo gDroit;
Servo gGauche;
Servo Queue;
int initDroite = 65;
int initGauche = 60;
int initgDroit = 58;
int initgGauche = 55;
int initQueue = 85;
char recvChar;

void setup() {

//BlueTooth Setup
  pinMode(RxD,INPUT);
  pinMode(TxD,OUTPUT);
  BTSerie.begin(9600);

  
  droite.attach(2);
  gauche.attach(3);
  gDroit.attach(4);
  gGauche.attach(5);
  Queue.attach(7);
//Remettre les jambes à 0
  gauche.write(initGauche); 
  droite.write(initDroite);
  gDroit.write(initgDroit);
  gGauche.write(initgGauche);
  Queue.write(initQueue);
  Serial.begin(9600);
}

void loop() {

  delay(500);

  if (BTSerie.available()) {
    recvChar = BTSerie.read(); //lecture 
    if(recvChar=='U'){
      twoStep();
    }else if(recvChar=='L'){
      leftStep();  
    }else if(recvChar=='R'){
      rightStep();
    } 
    Serial.print(recvChar); //ecriture
  }

  if (Serial.available()) {
    recvChar = Serial.read(); //lecture 
    
    BTSerie.write(recvChar); //ecriture
  }
}


