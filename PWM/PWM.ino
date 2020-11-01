void setup() {
  // put your setup code here, to run once:
  
//PWM PINS--------------------------->
//~ ---> This sign indicates that this pin follow PWM. You can see in digital pins. 
//For PWM use analogWrite(pin,value);   value - 0-255
//value - 0(0%),64(25%),127(50%),191(75%),255(100%)

pinMode(3,OUTPUT);
pinMode(5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

//Method 1
analogWrite(3,150);

//Method 2
digitalWrite(5,1);
delayMicroseconds(100);  // If we decrease this value then brightness decreases
digitalWrite(5,0);
delayMicroseconds(100);  // If we decrease this value then brightness increases
}
