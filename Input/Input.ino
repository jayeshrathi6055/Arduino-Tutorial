void setup() {
  // put your setup code here, to run once:
pinMode(3,INPUT);
//For Digital Input----------------->
pinMode(2,INPUT);

//For Analog Input/Serial Input------------------>
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

//Taking Digital input---------------->
int buttonstate = digitalRead(2);

//Taking analog input----------------->
int pot = analogRead(A0);
Serial.println(pot);

//Use of map function - It will convert range into 0-255.------------------->
//Syntax -> variable_name = map(name,minimum_no,maximum_no,0,255);
int dot = map(pot,0,1023,0,255);
analogWrite(3,dot);
Serial.println(pot);

//Taking Serial input---------------->
if(Serial.available()>0){
  // Serial.available --> It will check any value present in monitor
  char input = Serial.read();
  Serial.println(input);
}

}
