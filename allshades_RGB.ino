
 int red=11;
 int green=10;
 int blue=9;
void setup() {
  Serial.begin(9600);
 pinMode(red,OUTPUT);
 pinMode(blue,OUTPUT);
 pinMode(green,OUTPUT);

 Serial.println("You Are Looking For ?");
 Serial.println("1.All Shades of Blue");
 Serial.println("2.All Shades of Green");
 Serial.println("3.All Shades of Red");
 Serial.println("4.All Shades of Blue and Green");
 Serial.println("5.All Shades of Green and Red");
 Serial.println("6.All Shades of Blue and Red");
 Serial.println("7.All Shades of Blue,Green and Red");
}
void loop() {
  int getcase=0;
  while(getcase==0){
    getcase=Serial.parseInt();
   
  }
 switch(getcase){
  case 1:
  Serial.println("All Shades of Blue Glowing");
  for(int i=0;i<256;i++){
    glow(i,0,0);
    delay(30);

    if(i==255)
     Serial.println("Done!");
  }
  break;
  case 2:
  for(int i=0;i<256;i++){
    glow(0,i,0);
    delay(30);
    if(i==255)
     Serial.println("Done!");
  }
break;

  case 3:
  for(int i=0;i<256;i++){
    glow(0,0,i);
    delay(30);
    if(i==255)
     Serial.println("Done!");
  }
break;

  case 4:
  for(int i=0;i<256;i++){
    for(int j=0;j<256;j++){
      glow(i,j,0);
      delay(3);
    }
    if(i==255)
     Serial.println("Done!");
  }
break;
  case 5:
  for(int i=0;i<256;i++){
    for(int j=0;j<256;j++){
      glow(0,i,j);
      delay(3);
    }
    if(i==255)
     Serial.println("Done!");
  }
  break;
  case 6:
  for(int i=0;i<256;i++){
    for(int j=0;j<256;j++){
      glow(i,0,j);
      delay(3);
    }
    if(i==255)
     Serial.println("Done!");
  }
  break;
case 7:
  for(int i=0;i<256;i++){
    for(int j=0;j<256;j++){
      for(int k=0;k<256;k++){
        glow(i,j,k);
        delay(3);
      }
    }
    if(i==255)
     Serial.println("Done!");
  }
  
 }
}
 
void glow(int a,int b,int c){
  analogWrite(blue,a);
  analogWrite(green,b);
  analogWrite(red,c);
}
