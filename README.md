# Rtttl
This is an adaptation of a sample scketch from tone library By Brett Hagman,
it uses Rtttl which is a compact format por mono ringtones.

## Why Rtttl?
It's compact, its just a string you can paste in your code, no array
construction with frequencies and durations. You can change the octave and tempo
fast and easy.

## What change from the original scketch?
This uses [TimerFreetone](http://forum.arduino.cc/index.php?topic=235774.0) by Tim Eckel ,
so it can be used with LedControl, Servos and other libraries that requiere
the use of timers.

Also uses [Flash](http://arduiniana.org/libraries/flash/) library by Mikal Hart
to store the strings in PROGMEM this helps reducing the RAM use, wich is essential
when you use complex code or need to play several melodies.

Delays and while loop has been removed so it could plays asynchronously using the
technique described in  [BlinkWithoutDelay](https://www.arduino.cc/en/Tutorial/BlinkWithoutDelay)
so you can blink leds, move servos, checking inputs while the music plays.

## More info
- https://en.wikipedia.org/wiki/Ring_Tone_Transfer_Language
- https://code.google.com/archive/p/rogue-code/wikis/ToneLibraryDocumentation.wiki

\* If you know the original author please let me know.
