int led=2;
int m1=3;
int m2=5;
int m3=6;
int m4=9;
int swup=4;
int swdown=7;
int swleft=8;
int swright=10;
int sw=11;
int sens=A5;
int val;
int valsens;



void setup() {
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT);
  pinMode(led,OUTPUT);
  pinMode(swup,INPUT);
  pinMode(swdown,INPUT);
  pinMode(swleft,INPUT);
  pinMode(swright,INPUT);
  pinMode(sw,INPUT);
  pinMode(sens,INPUT);
  }

void up(){
  analogWrite(m1,HIGH);
  analogWrite(m2,LOW);
  analogWrite(m3,HIGH);
  analogWrite(m4,LOW);
  }

void down(){
  analogWrite(m1,LOW);
  analogWrite(m2,HIGH);
  analogWrite(m3,LOW);
  analogWrite(m4,HIGH);
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





void loop() {
if (digitalRead(swup)==HIGH){
  up();
  }

else if (digitalRead(swdown)==HIGH){
  down();
  }

else if (digitalRead(swleft)==HIGH){
  left();
  }

else if (digitalRead(swright)==HIGH){
  right();
  }

else if (digitalRead(sw)==HIGH){
  digitalWrite(led,HIGH);
  }  
else if (digitalRead(sw)==LOW){
  digitalWrite(led,LOW);
  }

  
  

}
