const int buzzerPin = 11;
const int ledPin = 13;
int ledState;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // read the voltage value which is between 0 and 1023 
  //so we divided it by 1023 and multiply it by 5 
  //to map the reading to the range between 0 and 5 
  double voltage = (analogRead(A0) / 1023.0) * 5;
  // print the voltage value
  Serial.println(voltage);
  // set the LEDs according to the voltage value
  if(voltage > 3){
    ledState = HIGH;
  }else if(voltage < 2.5){
     ledState = LOW; 
  }
  //if the led state is high turn on the buzzer else turn off the buzzer
  if(ledState){
    tone(buzzerPin, 1500, 500);
  }else{
    noTone(buzzerPin); 
  }
  //then output the curr state of the ledPin
  digitalWrite(ledPin, ledState);
  delay(1000);
}
