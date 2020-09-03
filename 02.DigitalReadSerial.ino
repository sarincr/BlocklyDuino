int x;

void setup()
{
  pinMode(6, INPUT);
  Serial.begin(9600);

}


void loop()
{
  while (HIGH) {
    x = digitalRead(6);
    if (x) {
      Serial.println(x);

    }
  }

}