int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;
int h=12;

int red=9;
int green=10;
int blue=11;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  randomSeed(analogRead(0));
pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
pinMode(c,OUTPUT);
pinMode(d,OUTPUT);
pinMode(e,OUTPUT);
pinMode(f,OUTPUT);
pinMode(g,OUTPUT);
pinMode(h,OUTPUT);



}

void loop() {
  // put your main code here, to run repeatedly:
int n;
for(int i=0;i<4;i++){
  glow(i);
n=random(1,7);
if(n==1){
  for(int i=0;i<3;i++){
    one();
  }
}

else if(n==2){
  for(int i=0;i<3;i++){
    two();
  }
}

else if(n==3){
  for(int i=0;i<3;i++){
    three();
  }
}

else if(n==4){
  for(int i=0;i<3;i++){
    four();
  }
}

else if(n==5){
  for(int i=0;i<3;i++){
    five();
  }
}

else if(n==6){
  for(int i=0;i<3;i++){
    six();
  }

}
analogWrite(blue,0);
analogWrite(green,0);
analogWrite(red,0);
delay(3000);
}

}
void glow(int i){
  if(i==0){
    analogWrite(red,255);
    analogWrite(blue,0);
    analogWrite(green,0);
  }
  else if(i==1){
    analogWrite(red,0);
    analogWrite(blue,255);
    analogWrite(green,0);
  }
  else if(i==2){
    analogWrite(red,0);
    analogWrite(blue,0);
    analogWrite(green,255);
  }
  else{
    analogWrite(red,195);
    analogWrite(blue,155);
    analogWrite(green,0);
  }
}
void zero(){
   digitalWrite(a,HIGH);
digitalWrite(h,HIGH);
digitalWrite(d,HIGH);
digitalWrite(f,HIGH);
digitalWrite(e,HIGH);
digitalWrite(b,HIGH);
delay(500);
 digitalWrite(a,LOW);
digitalWrite(h,LOW);
digitalWrite(f,LOW);
digitalWrite(e,LOW);
digitalWrite(b,LOW);
digitalWrite(d,LOW);
delay(500);
}

void one(){
  digitalWrite(b,HIGH);
digitalWrite(d,HIGH);
delay(500);
digitalWrite(b,LOW);
digitalWrite(d,LOW);
delay(500);
}
void two(){
  digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(g,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
delay(500);
digitalWrite(a,LOW);
digitalWrite(b,LOW);
digitalWrite(g,LOW);
digitalWrite(e,LOW);
digitalWrite(f,LOW);
delay(500);
}
void three(){
  digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(g,HIGH);
digitalWrite(d,HIGH);
digitalWrite(f,HIGH);

delay(500);
 digitalWrite(a,LOW);
digitalWrite(b,LOW);
digitalWrite(g,LOW);
digitalWrite(d,LOW);
digitalWrite(f,LOW);

delay(500);
}
void four(){
   
digitalWrite(b,HIGH);
digitalWrite(g,HIGH);
digitalWrite(d,HIGH);
digitalWrite(h,HIGH);

delay(500);
digitalWrite(b,LOW);
digitalWrite(g,LOW);
digitalWrite(d,LOW);
digitalWrite(h,LOW);

delay(500);
}
void five(){
   digitalWrite(a,HIGH);
digitalWrite(h,HIGH);
digitalWrite(g,HIGH);
digitalWrite(d,HIGH);
digitalWrite(f,HIGH);

delay(500);
 digitalWrite(a,LOW);
digitalWrite(h,LOW);
digitalWrite(g,LOW);
digitalWrite(d,LOW);
digitalWrite(f,LOW);

delay(500);
}
void six(){
   digitalWrite(a,HIGH);
digitalWrite(h,HIGH);
digitalWrite(g,HIGH);
digitalWrite(d,HIGH);
digitalWrite(f,HIGH);
digitalWrite(e,HIGH);
delay(500);
 digitalWrite(a,LOW);
digitalWrite(h,LOW);
digitalWrite(g,LOW);
digitalWrite(d,LOW);
digitalWrite(f,LOW);
digitalWrite(e,LOW);
delay(500);
}
