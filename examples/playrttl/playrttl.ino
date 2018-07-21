#include <Rtttl.h>

#define SPEAKER_PIN 13 //Pin you have speaker/piezo connected to (be sure to include a 100 ohm resistor) and other side of speaker to GND.

Rtttl Rtttl(SPEAKER_PIN);
FLASH_STRING(song,"TwinkleT:d=4,o=5,b=60:16c#6,16c#6,16g#6,16g#6,16a#6,16a#6,16g#6,16p,16f#6,16f#6,16e#6,16e#6,16d#6,8c#6,16p,16g#6,16g#6,16f#6,16f#6,16e#6,16e#6,8d#6,16p,16g#6,16f#6,16f#6,16e#6,16e#6,8d#6,16p,16c#6,16c#6,16g#6,16g#6,16a#6,16g#6,16p,16f#6,16f#6,16e#6,16e#6,16d#6,16d#6,8c#6");

void setup()
{
        Rtttl.play(song);
}

void loop()
{
        Rtttl.updateMelody();
}
