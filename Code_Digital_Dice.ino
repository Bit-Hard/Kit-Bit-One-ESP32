int button = 13; // specifying button

int led1 = 32; // specifying LEDs
int led2 = 33;
int led3 = 25;
int led4 = 26;
int led5 = 27;
int led6 = 14;
int led7 = 12;
long num;
int buttonstate;

void setup(){

pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
pinMode(led6, OUTPUT);
pinMode(led7, OUTPUT);
pinMode(button,INPUT);
randomSeed(analogRead(0)); //This code line is necessary for a correct random

}

void loop(){
//Read the status of the button
buttonstate = digitalRead(button);
if(buttonstate == HIGH){
num = random(1,7); // Generates random number from 1 to 6.
if (num == 1){
digitalWrite(led4,HIGH);
delay(2000); // provides time delay of 2 second before the LEDs goes out
}
if (num == 2){
digitalWrite(led3,HIGH);
digitalWrite(led5,HIGH);
delay(2000);
}
if (num == 3){
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
digitalWrite(led5,HIGH);
delay(2000);
}
if (num == 4){
digitalWrite(led1,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led5,HIGH);  
digitalWrite(led7,HIGH);
delay(2000);
}
if (num == 5){
digitalWrite(led4,HIGH);
digitalWrite(led1,HIGH);
digitalWrite(led3,HIGH);  
digitalWrite(led5,HIGH);  
digitalWrite(led7,HIGH);  
delay(2000);
}
if (num == 6){
digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);  
digitalWrite(led5,HIGH);  
digitalWrite(led6,HIGH);  
digitalWrite(led7,HIGH);
delay(2000);
}
}
    //If the button is not pressed, sets off the leds
digitalWrite (led1, LOW);
digitalWrite (led2, LOW);
digitalWrite (led3, LOW);
digitalWrite (led4, LOW);
digitalWrite (led5, LOW);
digitalWrite (led6, LOW);
digitalWrite (led7, LOW);

}
