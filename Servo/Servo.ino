#define Sevo 3
long f;
short c;
byte g;

void servo()
{
    f = c;
    f *= 2000;
    f /= 180;
    f += 450; 
    for (g = 0; g < 25; g++)
    {
        digitalWrite(Sevo, HIGH);
        delayMicroseconds(f);
        digitalWrite(Sevo, LOW);
        delayMicroseconds(20000 - f);
    }
}

void setup()
{
    pinMode(Sevo, OUTPUT);
}

void loop()
{
    servo();
    c++;
    if (c > 180)
        c = 0;
    delay(100);
}