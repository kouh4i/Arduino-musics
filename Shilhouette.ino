int PIN = 13;

#define N_G2  98
#define N_A2  110
#define N_B2  123
#define N_CS3 139
#define N_B3  247
#define N_C4  262
#define N_CS4 277
#define N_D4  294
#define N_E4  330
#define N_FS4 370
#define N_G4  392
#define N_A4  440
#define N_B4  494


void setup()
{
  pinMode(PIN, OUTPUT);
}

void loop()   
{
  Music();
}
 
void beep (unsigned char PIN, int frequencyInHertz, long timeInMilliseconds)
{
  int x;
  long delayAmount = (long)(1000000/frequencyInHertz);
  long loopTime = (long)((timeInMilliseconds*1000)/(delayAmount*2));
  for (x=0;x<loopTime;x++){
      digitalWrite(PIN,HIGH);
      delayMicroseconds(delayAmount);
      digitalWrite(PIN,LOW);
      delayMicroseconds(delayAmount);
  }
    delay(15);
}

void Music()
{
  beep(PIN, N_FS4, 303);
  delay(36);
  beep(PIN, N_D4, 303);
  delay(36);
  beep(PIN, N_E4, 296);
  delay(12);
  beep(PIN, N_FS4, 1250);
  delay(12);
  beep(PIN, N_D4, 284 );
  delay(12);
  beep(PIN, N_FS4, 115);
  delay(5);
  beep(PIN, N_FS4, 115);
  delay(5);
  beep(PIN, N_E4, 76);
  delay(8);
  beep(PIN, N_D4, 96);
  delay(8);
  beep(PIN, N_E4, 254);
  delay(76);
  beep(PIN, N_A4, 96);
  delay(4);
  beep(PIN, N_A4, 415);
  delay(45);
  beep(PIN, N_E4, 302);
  delay(76);
  beep(PIN, N_CS4, 302);
  delay(14);
  beep(PIN, N_E4, 315);
  delay(5);
  beep(PIN, N_D4, 526);
  delay(75);
  beep(PIN, N_B4, 303);
  delay(8);
  beep(PIN, N_A4, 300);
  delay(26);
  beep(PIN, N_D4, 476);
  delay(115);
  beep(PIN, N_B4, 302);
  delay(4);
  beep(PIN, N_A4, 302);
  delay(45);
  beep(PIN, N_D4, 254);
  delay(450);
  beep(PIN, N_D4, 615);
  delay(5);
  beep(PIN, N_CS4, 214);
  delay(5);
  beep(PIN, N_D4, 254);
  delay(15);
  beep(PIN, N_E4, 275);
  delay(7);
  beep(PIN, N_D4, 254);
  delay(77);
  beep(PIN, N_FS4, 275);
  delay(7);
  beep(PIN, N_D4, 254);
  delay(5);
  beep(PIN, N_E4, 275);
  delay(25);
  beep(PIN, N_FS4, 1500);
  delay(415);
  beep(PIN, N_D4, 115);
  delay(5);
  beep(PIN, N_D4, 115);
  delay(76);
  beep(PIN, N_FS4, 115);
  delay(5);
  beep(PIN, N_FS4, 115);
  delay(76);
  beep(PIN, N_E4, 115);
  delay(25);
  beep(PIN, N_D4, 126);
  delay(25);
  beep(PIN, N_E4, 316);
  delay(115);
  beep(PIN, N_A4, 115);
  delay(4);
  beep(PIN, N_A4, 376);
  delay(125);
  beep(PIN, N_E4, 306);
  delay(25);
  beep(PIN, N_C4, 296);
  delay(25);
  beep(PIN, N_E4, 306);
  delay(15);
  beep(PIN, N_D4, 427);
  delay(77);
  beep(PIN, N_B4,296);
  delay(5);
  beep(PIN, N_A4, 296);
  delay(25);
  beep(PIN, N_D4, 574);
  delay(77);
  beep(PIN, N_B4, 254);
  delay(7);
  beep(PIN, N_A4, 254);
  delay(26);
  beep(PIN, N_D4, 354);
  delay(215);
  beep(PIN, N_D4, 574);
  delay(5);
  beep(PIN, N_CS4, 306);
  delay(4);
  beep(PIN, N_D4, 296);
  delay(15);
  beep(PIN, N_E4, 306);
  delay(7);
  beep(PIN, N_D4, 296);
  delay(420);
  beep(PIN, N_B3, 100);
  delay(115);
  beep(PIN, N_FS4, 125);
  delay(175);
  beep(PIN, N_FS4, 426);
  delay(25);
  beep(PIN, N_D4, 115);
  delay(175);
  beep(PIN, N_D4, 115);
  delay(76);
  beep(PIN, N_FS4, 115);
  delay(115);
  beep(PIN, N_FS4, 404);
  delay(76);
  beep(PIN, N_D4, 115);
  delay(125);
  beep(PIN, N_D4, 115);
  delay(77);
  beep(PIN, N_B4, 115);
  delay(100);
  beep(PIN, N_FS4, 303);
  delay(96);
  beep(PIN, N_D4, 323);
  delay(223);
  beep(PIN, N_B4, 225);
  delay(65);
  beep(PIN, N_CS4, 215);
  delay(5);
  beep(PIN, N_D4, 306);
  delay(225);
  beep(PIN, N_D4, 454);
  delay(5);
  beep(PIN, N_CS4, 225);
  delay(5);
  beep(PIN, N_D4, 225);
  delay(25);
  beep(PIN, N_E4, 315);
  delay(115);
  beep(PIN, N_E4, 315);
  delay(115);
  beep(PIN, N_E4, 414);
  delay(76);
  beep(PIN, N_FS4, 275);
  delay(35);
  beep(PIN, N_E4, 275);
  delay(8);
  beep(PIN, N_D4, 275);
  delay(8);
  beep(PIN, N_E4, 275);
  delay(8);
  beep(PIN, N_D4, 275);
  delay(15);
  beep(PIN, N_A4, 275);
  delay(15);
  beep(PIN, N_D4, 275);
  delay(67);
  beep(PIN, N_FS4, 254);
  delay(4);
  beep(PIN, N_FS4, 254);
  delay(76);
  beep(PIN, N_E4, 100);
  delay(15);
  beep(PIN, N_D4, 100);
  delay(8);
  beep(PIN, N_E4, 506);
  delay(5);
  beep(PIN, N_E4, 305);
  delay(98);
  beep(PIN, N_A4, 225);
  delay(105);
  beep(PIN, N_CS4, 274);
  delay(54);
  beep(PIN, N_E4, 275);
  delay(76);
  beep(PIN, N_G4, 275);
  delay(8);
  beep(PIN, N_FS4, 115);
  delay(43);
  beep(PIN, N_E4, 100);
  delay(33);
  beep(PIN, N_FS4, 326);
  delay(76);
  beep(PIN, N_E4, 303);
  delay(25);
  beep(PIN, N_D4, 504);
  delay(75);
  beep(PIN, N_B4, 303);
  delay(12);
  beep(PIN, N_A4, 303);
  delay(22);
  beep(PIN, N_D4, 506);
  delay(12);
  beep(PIN, N_B4, 303);
  delay(8);
  beep(PIN, N_A4, 303);
  delay(75);
  beep(PIN, N_D4, 505);
  delay(5);
  beep(PIN, N_D4, 505);
  delay(8);
  beep(PIN, N_CS4, 275);
  delay(4);
  beep(PIN, N_D4, 303);
  delay(12);
  beep(PIN, N_E4, 306);
  delay(25);
  beep(PIN, N_FS4, 275);
  delay(46);
  beep(PIN, N_D4, 276);
  delay(12);
  beep(PIN, N_A4, 303);
  delay(12);
  beep(PIN, N_D4, 303);
  delay(25);
  beep(PIN, N_FS4, 404);
  delay(12);
  beep(PIN, N_FS4, 404);
  delay(12);
  beep(PIN, N_E4, 105);
  delay(25);
  beep(PIN, N_D4, 105);
  delay(25);
  beep(PIN, N_E4, 897);
  delay(12);
  beep(PIN, N_E4, 467);
  delay(75);
  beep(PIN, N_A4, 306);
  delay(75);
  beep(PIN, N_CS4, 296);
  delay(46);
  beep(PIN, N_E4, 115);
  delay(5);
  beep(PIN, N_E4, 115);
  delay(25);
  beep(PIN, N_G4, 404);
  delay(12);
  beep(PIN, N_FS4, 120);
  delay(25);
  beep(PIN, N_E4, 115);
  delay(25);
  beep(PIN, N_FS4, 300);
  delay(25);
  beep(PIN, N_E4, 303);
  delay(12);
  beep(PIN, N_D4, 506);
  delay(25);
  beep(PIN, N_B4, 304);
  delay(12);
  beep(PIN, N_A4, 304);
  delay(46);
  beep(PIN, N_D4, 526);
  delay(26);
  beep(PIN, N_B4, 312);
  delay(25);
  beep(PIN, N_A4, 312);
  delay(75);
  beep(PIN, N_D4, 526);
  delay(12);
  beep(PIN, N_D4, 526);
  delay(15);
  beep(PIN, N_CS4, 312);
  delay(4);
  beep(PIN, N_D4, 303);
  delay(25);
  beep(PIN, N_E4, 306);
  delay(25);
  beep(PIN, N_D4, 306);
  delay(76);
  beep(PIN, N_A2, 125);
  delay(345);
  beep(PIN, N_G2, 125);
  delay(345);
  beep(PIN, N_CS3, 125);
  delay(345);
  beep(PIN, N_B2, 1000);
  exit(Music);
}
