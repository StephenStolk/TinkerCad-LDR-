int sensorVal = 0;
void setup(){
  pinMode(A0,INPUT);
  Serial.begin(9600);
  pinMode(9,OUTPUT);
}

void loop() {
  sensorVal = analogRead(A0);
  Serial.println(sensorVal);
  analogWrite(9, map(sensorVal, 0, 1023, 0 ,255));
  delay(100);
}
