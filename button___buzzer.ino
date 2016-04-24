

int readPIN = 0;


void setup() {
  //for (int y=0, y<11, y+3){
  pinMode(1, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, INPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, INPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, INPUT);
  pinMode(12, OUTPUT);

  //}

  { 
  // declare pin 13 to be an output:
  pinMode(13, OUTPUT);
} 
}

void loop() {


  int buzzflag = 0;
  int panel1 =0;
  int panel2 =0;
  int panel3 =0;
  int panel4 =0;
  
  digitalWrite(1, HIGH);
  readPIN = digitalRead(2); 
  if (readPIN == LOW) {
    panel1 = 1;
  } else {
    panel1 = 0;
  }
  digitalWrite(4, HIGH);
  readPIN = digitalRead(5); 
  if (readPIN == LOW) {
    panel2 = 1;
  } else {
    panel2 = 0;
  }
  digitalWrite(7, HIGH);
  readPIN = digitalRead(8); 
  if (readPIN == LOW) {
    panel3 = 1;
  } else {
    panel3 = 0;
  }
  digitalWrite(10, HIGH);
  readPIN = digitalRead(11); 
  if (readPIN == LOW) {
    panel4 = 1;
  } else {
    panel4 = 0;
  }
 
if (panel1 == 1){
  digitalWrite(3,HIGH);
  buzzflag = 1;
}
else{
  digitalWrite(3,LOW);
}


if (panel2 == 1){
  digitalWrite(6,HIGH);
  buzzflag = 1;
}
else{
  digitalWrite(6,LOW);
}



if (panel3 == 1){
  digitalWrite(9,HIGH);
  buzzflag = 1;
}
else{
  digitalWrite(9,LOW);
}


if (panel4 == 1){
  digitalWrite(12,HIGH);
  buzzflag = 1;
}
else{
  digitalWrite(12,LOW);
}

if (buzzflag == 1)
beep(2);
buzzflag = 0;
 
}

void beep(unsigned char delayms){
  for (int c=0;c<50;c++){
  analogWrite(13,200);      // Almost any value can be used except 0 and 255
                           // experiment to get the best tone
  delay(delayms);          // wait for a delayms ms
  analogWrite(13, 0);       // 0 turns it off
  delay(delayms);          // wait for a delayms ms  
  } 
}  
