int trigPin=6;
int echoPin=7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sure, mesafe;
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  sure = pulseIn(echoPin, HIGH);
  mesafe = (sure/2) / 29.1;
  if (mesafe >= 200 || mesafe <= 0)
  {
    Serial.println("Menzil Disi");
  }
  else
  {
    Serial.print(mesafe);
    Serial.println(" cm");
  }
  delay(250);
}
