//The goal of this program is to  display digits on a 7-segment display using functions, for loop and arrays
//Function, arrays, for loop, digitalWrite, pinMode

int d=500; //Variable to control the time of the delay 

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

//Function for each digit
void Zero(){ 
  //0 
for (int a=0;a<8;a++){ //for loop that works with the arrays. It starts at 0 ang goes to 7, which is the number of pins and segments
  digitalWrite(pins[a],zero[a]); //it digital write True or False in the pin. It takes the values from the arrays.
}

}  

void One(){
//1
for (int a=0;a<8;a++){ //For each number the loop works the same, the only difference is the array that determines if the pin is off or on
  digitalWrite(pins[a],one[a]); //In this case the pins will be turning on or off in a way that the display will show 1
}

}

void Two(){
//2
for (int a=0;a<8;a++){
  digitalWrite(pins[a],two[a]); //pins and arrays that show 2
}

}

void Three(){
//3
for (int a=0;a<8;a++){
  digitalWrite(pins[a],three[a]); //pins and arrays that show 3
}

}

void Four(){
//4
for (int a=0;a<8;a++){
  digitalWrite(pins[a],four[a]); //pins and arrays that show 4
}

}

void Five(){
//5
for (int a=0;a<8;a++){
  digitalWrite(pins[a],five[a]); //pins and arrays that show 5
}

}

void Six(){
//6
for (int a=0;a<8;a++){
  digitalWrite(pins[a],six[a]); //pins and arrays that show 6
}

}

void Seven(){
//7
for (int a=0;a<8;a++){
  digitalWrite(pins[a],seven[a]); //pins and arrays that show 7
}

}

void Eight(){
//8
for (int a=0;a<8;a++){
  digitalWrite(pins[a],eight[a]); //pins and arrays that show 8
}

}

void Nine(){
//9
for (int a=0;a<8;a++){
  digitalWrite(pins[a],nine[a]); //pins and arrays that show 9
}
}


void loop() {

Zero(); //Call the function that displays 0 on the 7-segment
delay(d); //delay of 1 second, it can be changed modifying the variable d
One(); //Call the function that displays 1 on the 7-segment
delay(d);
Two(); //Call the function that displays 2 on the 7-segment
delay(d);

//Call the functions that display the digits on the 7-segment
//The order can be easily changed, or more numbers can be added by only calling the function for the digit
Three();
delay(d);
Four();
delay(d);
Five();
delay(d);
Six();
delay(d);
Seven();
delay(d);
Eight();
delay(d);
Nine();
delay(d);


}
