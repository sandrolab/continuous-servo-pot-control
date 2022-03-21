This is a minimal code for controlling the position of a continuous rotation servo with Arduino and a potentiometer.

The basic wiring: https://www.arduino.cc/en/Tutorial/Knob

## Code:

### #1 cont-servo-test.ino
Check the exact middle point (where the servo stops, theorically 1500).

### #2 cont-servo-pot-control.ino
Control the servo with a potentiometer (change *servoStop* if your servo doesn't stop at 1500)

## Video demonstration:

 https://youtu.be/qKCKjXpQUgU

------------

*DISCLAIMER: Because of the big inaccuracy of these motors, you can't express rotation in degrees and there is no angle feedback; so the positioning will be always very approximate. Any improvement or suggestions would be greatly appreciated!*