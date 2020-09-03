int x;

void setup()
{
  pinMode(6, INPUT);
  pinMode(13, OUTPUT);
}


void loop()
{
  while (HIGH) {
    x = digitalRead(6);
    if (x == HIGH) {
      digitalWrite(13, HIGH);

    }
    if (x == LOW) {
      digitalWrite(13, LOW);

    }
  }

}