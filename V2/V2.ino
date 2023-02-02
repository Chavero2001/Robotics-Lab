
int d=1000; //Creates a variable to control de time of all the delays

void setup() {
  // for loop used to define the pins as outputs
  for(int i=4;i<11;i++){ //In my case, the pins used are pin 4 to pin 10
  pinMode(i,OUTPUT);
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:
//0 
  //Turn on the pins that display 0 on the 7-segment
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,1);
digitalWrite(9,1);
digitalWrite(10,0);
delay(d); //delay of 1 second, the duration can be changeg modifying the value of d
//1
  //Turn on the pins that display 1 on the 7-segment
digitalWrite(4,0);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,0);
digitalWrite(8,0);
digitalWrite(9,0);
digitalWrite(10,0);
delay(d);
//2
  //Turn on the pins that display 2 on the 7-segment
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,0);
digitalWrite(7,1);
digitalWrite(8,1);
digitalWrite(9,0);
digitalWrite(10,1);
delay(d);
//3
  //Turn on the pins that display 3 on the 7-segment
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,0);
digitalWrite(9,0);
digitalWrite(10,1);
delay(d);
//4
  //Turn on the pins that display 4 on the 7-segment
digitalWrite(4,0);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,0);
digitalWrite(8,0);
digitalWrite(9,1);
digitalWrite(10,1);
delay(d);
//5
  //Turn on the pins that display 5 on the 7-segment
digitalWrite(4,1);
digitalWrite(5,0);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,0);
digitalWrite(9,1);
digitalWrite(10,1);
delay(d);
//6
  //Turn on the pins that display 6 on the 7-segment
digitalWrite(4,1);
digitalWrite(5,0);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,1);
digitalWrite(9,1);
digitalWrite(10,1);
delay(d);
//7
  //Turn on the pins that display 7 on the 7-segment
digitalWrite(4,1)
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,0);
digitalWrite(8,0);
digitalWrite(9,0);
digitalWrite(10,0);
delay(d);
//8
  //Turn on the pins that display 8 on the 7-segment
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,1);
digitalWrite(9,1);
digitalWrite(10,1);
delay(d);
//9
  //Turn on the pins that display 9 on the 7-segment
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,0);
digitalWrite(8,0);
digitalWrite(9,1);
digitalWrite(10,1);
delay(d);
}
