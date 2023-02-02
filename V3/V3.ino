
int d=1000;
int zero[]={1,1,1,1,1,1,0};
int one[]={0,1,1,0,0,0,0};
int two[]={1,1,0,1,1,0,1};
int three[]={1,1,1,1,0,0,1};
int four[]={0,1,1,0,0,1,1};
int five[]={1,0,1,1,0,1,1};
int six[]={1,0,1,1,1,1,1};
int seven[]={1,1,1,0,0,0,0};
int eight[]={1,1,1,1,1,1,1};
int nine[]={1,1,1,0,0,1,1};
int pins[]={4,5,6,7,8,9,10};

void setup() {
  // put your setup code here, to run once:
  for(int i=4;i<11;i++){
  pinMode(i,OUTPUT);
  }
  
}

void Zero(){
  //0 
for (int a=0;a<8;a++){
  digitalWrite(pins[a],zero[a]);
}
delay(d);
}  

void One(){
//1
for (int a=0;a<8;a++){
  digitalWrite(pins[a],one[a]);
}
delay(d);
}

void Two(){
//2
for (int a=0;a<8;a++){
  digitalWrite(pins[a],two[a]);
}
delay(d);
}

void Three(){

}

void Four(){

}

void Five(){

}

void Six(){

}

void Seven(){

}

void Eight(){

}

void Nine(){

}


void loop() {
  // put your main code here, to run repeatedly:





//3
for (int a=0;a<8;a++){
  digitalWrite(pins[a],three[a]);
}
delay(d);
//4
for (int a=0;a<8;a++){
  digitalWrite(pins[a],four[a]);
}
delay(d);
//5
for (int a=0;a<8;a++){
  digitalWrite(pins[a],five[a]);
}
delay(d);
//6
for (int a=0;a<8;a++){
  digitalWrite(pins[a],six[a]);
}
delay(d);
//7
for (int a=0;a<8;a++){
  digitalWrite(pins[a],seven[a]);
}
delay(d);
//8
for (int a=0;a<8;a++){
  digitalWrite(pins[a],eight[a]);
}
delay(d);
//9
for (int a=0;a<8;a++){
  digitalWrite(pins[a],nine[a]);
}
delay(d);

}
