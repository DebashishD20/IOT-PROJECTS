int red=4;
int green=5;
int blue=7;
void setup() {
  // put your setup code here, to run once:
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(blue,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(red,HIGH);
delay(7000);
digitalWrite(red,LOW);
delay(2000);

digitalWrite(green,HIGH);
delay(7000);
digitalWrite(green,LOW);
delay(2000);

for(int i=0;i<10;i++){
  digitalWrite(blue,HIGH);
  delay(2000/4);
  digitalWrite(blue,LOW);
  delay(2000/4);
}

}
