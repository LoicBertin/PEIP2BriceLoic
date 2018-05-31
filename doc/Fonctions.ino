void rightStep(){

  Queue.write(initQueue - 60);
  delay(300);
  droite.write(initDroite + 25);  
  gDroit.write(initgDroit + 25);
  delay(300);
  gauche.write(initGauche + 30);
  gGauche.write(initgGauche + 30);
  
  delay(400);

  droite.write(initDroite);
  gDroit.write(initgDroit);
  delay(400);
  gauche.write(initGauche);
  gGauche.write(initgGauche);
  delay(200);
  Queue.write(initQueue);

  delay(500);
  
}


void leftStep(){

  gauche.write(initGauche - 25);  
  gGauche.write(initgGauche - 25);
  delay(300);
  droite.write(initDroite - 25);
  gDroit.write(initgDroit - 25);
  
  delay(400);

  gauche.write(initGauche);
  gGauche.write(initgGauche);
  delay(400);
  droite.write(initDroite);
  gDroit.write(initgDroit);

  delay(500);
  
}

void twoStep(){
  leftStep();
  delay(100);
  rightStep();
}

