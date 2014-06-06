int RY,RX,LY,LX;

void analogPS(){
  int ARY = map(analogRead(A0), 0 , 1023 , 0 , 255);
  int ARX = map(analogRead(A1), 0 , 1023 , 0 , 255);
  int ALY = map(analogRead(A2), 0 , 1023 , 0 , 255);
  int ALX = map(analogRead(A3), 0 , 1023 , 0 , 255);

  if(ARY==124){RY=ARY+4;}
  else if(ARY==254){RY=ARY+1;}
  else {RY=ARY;}
  
  if(ARX==125){RX=ARX+3;}
  else if(ARX==254){RX=ARX+1;}
  else {RX=ARX;}

  if(ALY==122){LY=ALY+6;}
  else if(ALY==254){LY=ALY+1;}
  else {LY=ALY;}
  
  if(ALX==124){LX=ALX+4;}
  else if(ALX==254){LX=ALX+1;}
  else {LX=ALX;}
}


void setup(){
  Serial.begin(9600);
}

void loop(){


  analogPS();
  Serial.print("LY,LX,RY,RX : ");
  Serial.print(LY);
  Serial.print(" , ");
  Serial.print(LX);
  Serial.print(" , ");
  Serial.print(RY);
  Serial.print(" , ");
  Serial.println(RX);
}
  
