void setup() {
  // put your setup code here, to run once:

//Declare Variables-------------------->
int a = 10;
bool b = true;
float c = 2.25;
char d = 'c';
String e = "Hello";

// set baud rate--------------------->
Serial.begin(9600);

//Loops------------------------------>
for(int i = 0;i<8;i++){
  pinMode(i,OUTPUT);
}

//Left things are-------------------->
//1. Nested if-else
//2. Operators
//3. While loop
//4. Other things similar to C,C++
}

void loop() {
  // put your main code here, to run repeatedly:
  
//Read any digital pin------------------------>
int buttonstate = digitalRead(10);

//If-else Statements-------------------------->
if(buttonstate == 0){
  digitalWrite(0,1);
}
else{
  digitalWrite(7,1);
}

}
