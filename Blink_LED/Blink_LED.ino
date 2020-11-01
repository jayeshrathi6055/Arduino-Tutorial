void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13,HIGH);  // We can also use 1 for high
delay(1000);    // 1000ms -> 1sec
digitalWrite(13,LOW);  // We can also use 0 for low
delay(1000);
}
