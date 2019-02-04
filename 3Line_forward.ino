int m1=2;
int m2=3;
int m3=4;
int m4=5;
int track1=6;
int track2=7;
int track3=8;



void setup() {
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT);
  pinMode(track1,INPUT);
  pinMode(track2,INPUT);
  pinMode(track3,INPUT);

}

void up(){
  analogWrite(m1,HIGH);
  analogWrite(m2,LOW);
  analogWrite(m3,HIGH);
  analogWrite(m4,LOW);
  }

void left(){
  analogWrite(m1,HIGH);
  analogWrite(m2,LOW);
  analogWrite(m3,LOW);
  analogWrite(m4,HIGH);
  }

void right(){
  analogWrite(m1,LOW);
  analogWrite(m2,HIGH);
  analogWrite(m3,HIGH);
  analogWrite(m4,LOW);
  }


void st(){
  analogWrite(m1,LOW);
  analogWrite(m2,LOW);
  analogWrite(m3,LOW);
  analogWrite(m4,LOW);
  }  






void loop() {

int val1=digitalRead(track1);
int val2=digitalRead(track2);
int val3=digitalRead(track3);

if (val1==0&val2==0&val3==0){
  up();
  }

else if (val1==1&val2==0&val3==0){
  right();
  }

else if (val1==0&val2==1&val3==0){
  st();
  }  
  
else if (val1==1&val2==1&val3==0){
  right();
  }

else if (val1==0&val2==0&val3==1){
  left();
  }

else if (val1==1&val2==0&val3==1){
  up();
  }

else if (val1==0&val2==1&val3==1){
  left();
  }
  

else if (val1==1&val2==1&val3==1){
  st();
  }


}
