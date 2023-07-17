int PIN = 13;

/* Consult "Musical Note.ino" file to define the necessary notes to make your music (^人^)*/



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
/*  
  Template to build your music:
  delay();
  beep(PIN, N_, );
  delay();
  beep(PIN, N_, );
  delay();
  beep(PIN, N_, );
  delay();
  beep(PIN, N_, );
  delay();
  beep(PIN, N_, );
  delay();
  beep(PIN, N_, );
  delay();
  beep(PIN, N_, );
*/

  exit(Music);
}
