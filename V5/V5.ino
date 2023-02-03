//The goal of this program is to  display digits on a 7-segment display using switch case, functions, for loop and arrays
//Switch case, function, arrays, for loop, digitalWrite, pinMode

int d=1000;  //Variable to control the time of the delay 

//Arrays of size of 7 that contains the LEDs that must be turn on or off in order to display the number
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

//Variable used to change the case through a for loop
int var;

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
  digitalWrite(pins[a],zero[a]); //it digital write True or False in the pin. It takes the values from the arrays
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

//For loop that allows to change the case after the previous one has been completed
for(var=0;var<10;var++){ //since it is for each digit it starts at 0 and continuos to 9 
  
switch(var){
  case 0: //for each case it calls its respective function that will display the number
    Zero(); //For example, case 0 will use function Zero to display 0 on the 7-segment
    
    break; //break the case and continue 
    
    //the same applies for the case of each digit
    case 1:
      One();
      
      break;
    case 2:
      Two();
     
      break;  
    case 3:
      Three();
     
      break;
    case 4:
      Four();
     
      break;   
    case 5:
      Five();
      
      break; 
    case 6:
      Six();
      
      break; 
    case 7:
      Seven();
   
      break; 
    case 8:
      Eight();
      
      break; 
    case 9:
      Nine();
      
      break; 
    default: //default case
      break;          
}
delay(d); //after each case there's a delay of 1 second that can be changed with the variable d
//at the end the loop starts again.
}










}
