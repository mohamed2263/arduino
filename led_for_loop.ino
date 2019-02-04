
int led=3;


void setup() {
  pinMode(led,OUTPUT);

}

void loop() {
  for (int i=0;i<=255;i++){
    analogWrite(led,i);
    delay(200);
    
    }
for (int i=255;i>=1;i--){
    analogWrite(led,i);
    delay(200);
    
    }




}
