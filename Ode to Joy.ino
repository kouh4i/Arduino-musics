int speakerPin = 13;

#define NOTE_C3 131
#define NOTE_C4 262
#define NOTE_D3 147
#define NOTE_D4 294
#define NOTE_E4 330 
#define NOTE_F4 349
#define NOTE_G4 392

void setup()
{

  pinMode(speakerPin, OUTPUT);
 
}
 
void loop()   
{
  Music();
}
 
void beep (unsigned char speakerPin, int frequencyInHertz, long timeInMilliseconds)
{

 
    int x;
    long delayAmount = (long)(1000000/frequencyInHertz);
    long loopTime = (long)((timeInMilliseconds*1000)/(delayAmount*2));
    for (x=0;x<loopTime;x++)
    {
        digitalWrite(speakerPin,HIGH);
        delayMicroseconds(delayAmount);
        digitalWrite(speakerPin,LOW);
        delayMicroseconds(delayAmount);
    }
 
  
    delay(15);
    
}
 
void Music()
{
    beep(speakerPin, NOTE_E4, 470);
    delay(55);
    beep(speakerPin, NOTE_E4, 450);
    delay(55);
    beep(speakerPin, NOTE_F4, 470);
    delay(55);
    beep(speakerPin, NOTE_G4, 450);
    delay(57);
    beep(speakerPin, NOTE_G4, 470);
    delay(75);
    beep(speakerPin, NOTE_F4, 450);
    delay(65);
    beep(speakerPin, NOTE_E4, 470);
    delay(55);
    beep(speakerPin, NOTE_D4, 450);
    delay(57);
    beep(speakerPin, NOTE_C4, 470);
    delay(55);
    beep(speakerPin, NOTE_C4, 450);
    delay(55);
    beep(speakerPin, NOTE_D4, 470);
    delay(55);
    beep(speakerPin, NOTE_E4, 450);
    delay(55);
    beep(speakerPin, NOTE_E4, 590);
    delay(36);
    beep(speakerPin, NOTE_D4, 303);
    delay(15);
    beep(speakerPin, NOTE_D4, 650);
    delay(55);
    beep(speakerPin, NOTE_E4, 470);
    delay(55);
    beep(speakerPin, NOTE_E4, 445);
    delay(55);
    beep(speakerPin, NOTE_F4, 448);
    delay(55); 
    beep(speakerPin, NOTE_G4, 465);
    delay(55);
    beep(speakerPin, NOTE_G4, 387);
    delay(54);
    beep(speakerPin, NOTE_F4, 448);
    delay(54);
    beep(speakerPin, NOTE_E4, 448);
    delay(54);
    beep(speakerPin, NOTE_D4, 448);
    delay(54);
    beep(speakerPin, NOTE_C4, 457);
    delay(54);
    beep(speakerPin, NOTE_C4, 436);
    delay(34);
    beep(speakerPin, NOTE_D4, 397);
    delay(54);
    beep(speakerPin, NOTE_E4, 377);
    delay(54);
    beep(speakerPin, NOTE_D4, 450);
    delay(35);
    beep(speakerPin, NOTE_C4, 526);
    delay(34);
    beep(speakerPin, NOTE_C4, 526);
    delay(4);
    beep(speakerPin, NOTE_D4, 526);
    delay(54);
    beep(speakerPin, NOTE_D4, 397);
    delay(54);
    beep(speakerPin, NOTE_E4, 397);
    delay(54);
    beep(speakerPin, NOTE_C4, 397);
    delay(54);
    beep(speakerPin, NOTE_D4, 397);
    delay(54);
    beep(speakerPin, NOTE_E4, 188);
    delay(54);
    beep(speakerPin, NOTE_F4, 205);
    delay(54);
    beep(speakerPin, NOTE_E4, 397);
    delay(54);
    beep(speakerPin, NOTE_C4, 397);
    delay(54);
    beep(speakerPin, NOTE_D4, 397);
    delay(54);
    beep(speakerPin, NOTE_E4, 188);
    delay(54);
    beep(speakerPin, NOTE_F4, 205);
    delay(54);
    beep(speakerPin, NOTE_E4, 397);
    delay(54);
    beep(speakerPin, NOTE_C4, 397);
    delay(54);
    beep(speakerPin, NOTE_D4, 397);
    delay(54);
    beep(speakerPin, NOTE_C4, 397);
    delay(54);
    beep(speakerPin, NOTE_G4, 1000); 
    delay(54);
    beep(speakerPin, NOTE_E4, 1000);
    delay(54);
    beep(speakerPin, NOTE_E4, 445);
    delay(55);
    beep(speakerPin, NOTE_F4, 448);
    delay(55); 
    beep(speakerPin, NOTE_G4, 465);
    delay(55);
    beep(speakerPin, NOTE_G4, 387);
    delay(54);
    beep(speakerPin, NOTE_F4, 448);
    delay(54);
    beep(speakerPin, NOTE_E4, 448);
    delay(54);
    beep(speakerPin, NOTE_D4, 448);
    delay(54);
    beep(speakerPin, NOTE_C4, 457);
    delay(54);
    beep(speakerPin, NOTE_C4, 436);
    delay(34);
    beep(speakerPin, NOTE_D4, 397);
    delay(54);
    beep(speakerPin, NOTE_E4, 377);
    delay(54);
    beep(speakerPin, NOTE_D4, 450);
    delay(35);
    beep(speakerPin, NOTE_C4, 726);
    delay(34);
    beep(speakerPin, NOTE_C4, 224);
    delay(4);
    exit(Music);
}
