void setup() {
  // put your setup code here, to run once:

//Serial communication - It means bit by bit communication.----------------->
pinMode(13,OUTPUT);
//Establish Serial communication
Serial.begin(9600);     // baud rate - Number of symbols per second.
}

void loop() {
  // put your main code here, to run repeatedly:

Serial.println("Communication start");  // ---->We can print anything
digitalWrite(13,1);
Serial.println("On");
delay(1000);
digitalWrite(13,0);
Serial.println("Off");
delay(1000);

}
