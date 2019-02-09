int led1=3;
int led2=5;
int led3=6;
int c=0;
int valsw;
int valsens;
int sens=A5;
int sw=7;

void setup() {
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(sw,INPUT);
pinMode(sens,INPUT);

}

void loop() {

valsw=digitalRead(sw);
if (valsw==HIGH){
  c++;
  if (c==1){
      valsens=analogRead(sens);
      valsens=map(valsens,0,1023,0,255);
      analogWrite(led1,valsens);
    }
  else if(c==2){
      valsens=analogRead(sens);
      valsens=map(valsens,0,1023,0,255);
      analogWrite(led2,valsens);
    }
  else if(c==3){
      valsens=analogRead(sens);
      valsens=map(valsens,0,1023,0,255);
      analogWrite(led3,valsens);
      c=0;
    }

delay(200);




  
  }

}
