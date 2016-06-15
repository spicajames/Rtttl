This is an adaptation of a sample scketch from tone library, it uses Rtttl
which is a compact format por mono ringtones.

This uses TimerFreetone by Tim Eckel (http://forum.arduino.cc/index.php?topic=235774.0),
so it can be used with LedControl, Servos and other libraries that requiere
the use of timers.

Also uses Flash library by Mikal Hart (http://arduiniana.org/libraries/flash/)
to store the strings in PROGMEM this helps reducing the RAM use, wich is essential
when you use complex code or need to play several melodies.

Why Rtttl?
It's compact, its just a string you can paste in your code, no array construction
with frequencies and durations. You can change the octave and tempo fast and easy.

More info
https://en.wikipedia.org/wiki/Ring_Tone_Transfer_Language
