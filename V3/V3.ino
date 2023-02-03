//The goal of this program is to  display digits on a 7-segment display using for loop and arrays
//Arrays, for loop, digitalWrite, pinMode

int d=1000;//Variable to control the time of the delay 

//Arrays of 7 that contains the LEDs that must be turn on or off in order to display the number
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

//Array for pins, they are connected to segment a-g in the respective order
int pins[]={4,5,6,7,8,9,10};

void setup() {
  // for loop used to define pins as outputs
  for(int i=4;i<11;i++){ //for pins 4 to 10 (the number of the pins) define as output
  pinMode(i,OUTPUT);
  }
}

void loop() {
  //0 
  
for (int a=0;a<8;a++){//for loop that works with the arrays. It starts at 0 ang goes to 7, which is the number of pins and segments 
  digitalWrite(pins[a],zero[a]); //it digital write True or False in the pin. It takes the values from the arrays.
}
delay(d);//delay of 1 second 

//1
for (int a=0;a<8;a++){ //For each number the loop works the same, the only difference is the array that determines if the pin is off or on...
  digitalWrite(pins[a],one[a]);//In this case the pins will be turning on or off in a way that the display will show 1
}
delay(d);

//2
for (int a=0;a<8;a++){
  digitalWrite(pins[a],two[a]);//Array that will show 2
}
delay(d);

//3
for (int a=0;a<8;a++){
  digitalWrite(pins[a],three[a]); //Array that will show 3
}
delay(d);
//4
for (int a=0;a<8;a++){
  digitalWrite(pins[a],four[a]);//Array that will show 4
}
delay(d);
//5
for (int a=0;a<8;a++){
  digitalWrite(pins[a],five[a]);//Array that will show 5
}
delay(d);
//6
for (int a=0;a<8;a++){
  digitalWrite(pins[a],six[a]);//Array that will show 6
}
delay(d);
//7
for (int a=0;a<8;a++){
  digitalWrite(pins[a],seven[a]);//Array that will show 7
}
delay(d);
//8
for (int a=0;a<8;a++){
  digitalWrite(pins[a],eight[a]);//Array that will show 8
}
delay(d);
//9
for (int a=0;a<8;a++){
  digitalWrite(pins[a],nine[a]);//Array that will show 9
}
delay(d);

}
