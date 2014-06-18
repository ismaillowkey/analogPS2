//this is analog PS 2 controller
//ane ambil dari stick PS 2
//created by ismail lowkey
//www.ismail-lowkey.blogspot.com

int RY,RX,LY,LX;

void analogPS(){
  int ARY = map(analogRead(A0), 0 , 1023 , 0 , 255);
  int ARX = map(analogRead(A1), 0 , 1023 , 0 , 255);
  int ALY = map(analogRead(A2), 0 , 1023 , 0 , 255);
  int ALX = map(analogRead(A3), 0 , 1023 , 0 , 255);

  if(ARY>=120 && ARY <=130){RY=128;}
  else if(ARY>=250){RY=255;}
  else {RY=ARY;}
  
  if(ARX>=120 && ARX <=130){RX=128;}
  else if(ARX>=250){RX=255;}
  else {RX=ARX;}

  if(ALY>=120 && ALY<=130){LY=128;}
  else if(ALY>=250){LY=255;}
  else {LY=ALY;}
  
  if(ALX>=120 && ALX<=130){LX=128;}
  else if(ALX>=250){LX=255;}
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
  
