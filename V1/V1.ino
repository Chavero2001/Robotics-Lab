void setup() {
  // put your setup code here, to run once:
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

//0 
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,1);
digitalWrite(9,1);
digitalWrite(10,0);
delay(1000);
//1
digitalWrite(4,0);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,0);
digitalWrite(8,0);
digitalWrite(9,0);
digitalWrite(10,0);
delay(1000);
//2
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,0);
digitalWrite(7,1);
digitalWrite(8,1);
digitalWrite(9,0);
digitalWrite(10,1);
delay(1000);
//3
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,0);
digitalWrite(9,0);
digitalWrite(10,1);
delay(1000);
//4
digitalWrite(4,0);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,0);
digitalWrite(8,0);
digitalWrite(9,1);
digitalWrite(10,1);
delay(1000);
//5
digitalWrite(4,1);
digitalWrite(5,0);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,0);
digitalWrite(9,1);
digitalWrite(10,1);
delay(1000);
//6
digitalWrite(4,1);
digitalWrite(5,0);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,1);
digitalWrite(9,1);
digitalWrite(10,1);
delay(1000);
//7
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,0);
digitalWrite(8,0);
digitalWrite(9,0);
digitalWrite(10,0);
delay(1000);
//8
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,1);
digitalWrite(9,1);
digitalWrite(10,1);
delay(1000);
//9
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,0);
digitalWrite(8,0);
digitalWrite(9,1);
digitalWrite(10,1);
delay(1000);
}