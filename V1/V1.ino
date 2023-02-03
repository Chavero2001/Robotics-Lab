//The purpose of this program is to display digits on a 7-segment display in the simplest way possible,
//pinMode and digitalWrite

void setup() {
  // Define pins as outputs
  // Each pin is individually defined 
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {

//0 
//Turn on the pins that will display 0 on the 7-segment display
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,1);
digitalWrite(9,1);
digitalWrite(10,0);
delay(1000); //delay of 1 second
//1
  //Turn on the pins that will display 1 on the 7-segment display
digitalWrite(4,0);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,0);
digitalWrite(8,0);
digitalWrite(9,0);
digitalWrite(10,0);
delay(1000);
//2
  //Turn on the pins that will display 2 on the 7-segment display
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,0);
digitalWrite(7,1);
digitalWrite(8,1);
digitalWrite(9,0);
digitalWrite(10,1);
delay(1000);
//3
  //Turn on the pins that will display 3 on the 7-segment display
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,0);
digitalWrite(9,0);
digitalWrite(10,1);
delay(1000);
//4
  //Turn on the pins that will display 4 on the 7-segment display
digitalWrite(4,0);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,0);
digitalWrite(8,0);
digitalWrite(9,1);
digitalWrite(10,1);
delay(1000);
//5
  //Turn on the pins that will display 5 on the 7-segment display
digitalWrite(4,1);
digitalWrite(5,0);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,0);
digitalWrite(9,1);
digitalWrite(10,1);
delay(1000);
//6
  //Turn on the pins that will display 6 on the 7-segment display
digitalWrite(4,1);
digitalWrite(5,0);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,1);
digitalWrite(9,1);
digitalWrite(10,1);
delay(1000);
//7
  //Turn on the pins that will display 7 on the 7-segment display
digitalWrite(4,1)
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,0);
digitalWrite(8,0);
digitalWrite(9,0);
digitalWrite(10,0);
delay(1000);
//8
  //Turn on the pins that will display 8 on the 7-segment display
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,1);
digitalWrite(9,1);
digitalWrite(10,1);
delay(1000);
//9 
  //Turn on the pins that will display 9 on the 7-segment display
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,0);
digitalWrite(8,0);
digitalWrite(9,1);
digitalWrite(10,1);
delay(1000);
}
