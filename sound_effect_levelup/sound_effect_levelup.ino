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

#define C5  523
#define CD5 554
#define D5  587
#define DE5 622
#define E5  659
#define F5  698
#define FG5 740
#define G5  784
#define GA5 830
#define A5  880
#define AB5 932
#define B5  988

#define C6  1047
#define CD6 1109
#define D6  1175
#define DE6 1245
#define E6  1319
#define F6  1397
#define FG6 1480
#define G6  1568
#define GA6 1661
#define A6  1760
#define AB6 1865
#define B6  1976

#define C7  2093
#define CD7 2217
#define D7  2349
#define DE7 2489
#define E7  2637
#define F7  2794
#define FG7 2960
#define G7  3136
#define GA7 3322
#define A7  3520
#define AB7 3729
#define B7  3951

int duration = 100;   // duration
int pin1 = 7;         // pin number
// int pin2 = 8;         // pin number

// ファ　ファ　ファ　ファ　ミb　ソ　ファ
// ド　　シ　　シb　　ラ　　ソ　シb　ラ

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  tone(pin1, F6);     
  delay(duration / 2);
  noTone(pin1);
  delay(duration);

  tone(pin1, F6);
  delay(duration / 2);
  noTone(pin1);
  delay(duration);

  tone(pin1, F6);
  delay(duration / 2);
  noTone(pin1);
  delay(duration);

  tone(pin1, F6);
  delay(duration / 2);
  noTone(pin1);
  delay(duration * 2);

  tone(pin1, DE6);
  delay(duration / 2);
  noTone(pin1);
  delay(duration * 2);

  tone(pin1, G6);
  delay(duration / 2);
  noTone(pin1);
  delay(duration * 2);

  tone(pin1, F6);
  delay(duration * 7);
  noTone(pin1);
  delay(duration * 20);
}
