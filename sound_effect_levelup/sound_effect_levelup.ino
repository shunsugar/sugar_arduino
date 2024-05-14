#define C3  130
#define CD3 139
#define D3  147
#define DE3 156
#define E3  165
#define F3  175
#define FG3 185
#define G3  196
#define GA3 208
#define A3  220
#define AB3 233
#define B3  247

#define C4  262       // ド
#define CD4 277       // ド#レb
#define D4  294       // レ
#define DE4 311       // レ#ミb
#define E4  330       // ミ
#define F4  349       // ファ
#define FG4 370       // ファ#ソb
#define G4  392       // ソ
#define GA4 415       // ソ#ラb
#define A4  440       // ラ
#define AB4 466       // ラ#シb
#define B4  494       // シ

int duration = 100;   // 
int pin = 7;          // pin number

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  tone(pin, F4);
  delay(duration / 2);
  noTone(pin);
  delay(duration);
  tone(pin, F4);
  delay(duration / 2);
  noTone(pin);
  delay(duration);
  tone(pin, F4);
  delay(duration / 2);
  noTone(pin);
  delay(duration);
  tone(pin, F4);
  delay(duration / 2);
  noTone(pin);
  delay(duration * 2);
  tone(pin, DE4);
  delay(duration / 2);
  noTone(pin);
  delay(duration * 2);
  tone(pin, G4);
  delay(duration / 2);
  noTone(pin);
  delay(duration * 2);
  tone(pin, F4);
  delay(duration * 7);
  noTone(pin);
  delay(duration * 20);
/*
  tone(pin, C4);    // ド
  delay(duration);
  tone(pin, B4);    // シ
  delay(duration);
  tone(pin, AB4);   // シb
  delay(duration);
  tone(pin, A4);    // ラ
  delay(duration);
  tone(pin, G4);    // ソ
  delay(duration);
  tone(pin, AB4);   // シb
  delay(duration);
  tone(pin, A4);    // ラ
  delay(duration);
  delay(1000);
*/
}
