int sensorPin = A0;
int sensorValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  
}

void loop() {
  sensorValue = map(analogRead(sensorPin),0,1023,0,20);
  Serial.println(sensorValue);

  digitalWrite(6, sensorValue > 3 ? HIGH : LOW);
  digitalWrite(5, sensorValue > 7 ? HIGH : LOW);
  digitalWrite(4, sensorValue > 11 ? HIGH : LOW);
  digitalWrite(3, sensorValue > 15 ? HIGH : LOW);
  digitalWrite(2, sensorValue > 19 ? HIGH : LOW);
 
  
}
