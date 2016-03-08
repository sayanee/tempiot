int analogvalue = 0;
double tempC = 0;

void setup()
{
  Particle.variable("temperature", tempC);
  pinMode(A0, INPUT);
}

void loop()
{
  analogvalue = analogRead(A0);
  tempC = ((analogvalue * 3.3)/4095) * 100;
  delay(200);
}
