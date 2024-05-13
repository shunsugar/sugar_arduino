int melo = 200; // 
int pin = 7;    // pin number

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  tone(pin, 262, melo);
  delay(melo);
  tone(pin, 294, melo);
  delay(melo);
  tone(pin, 330, melo);
  delay(melo);

  delay(1000);
}
