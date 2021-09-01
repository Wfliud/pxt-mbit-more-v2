#include "CoolExtension.h"

//Cool Library
/**
 * Motor set
 */
void ScratchMoreService::Cool_motor_drive(int exterpin, int speed, int dir) {
  int motor_pin1, motor_pin2;

  switch (exterpin) {
  // IO5/11
  case 0:
    motor_pin1 = 5;
    motor_pin2 = 11;
    break;
  // IO8/12
  case 1:
    motor_pin1 = 8;
    motor_pin2 = 12;
    break;
  default:
    break;
  }

  switch (dir) {
  // motor turn forward.
  case 0:
    uBit.io.pin[motor_pin1].setAnalogValue(0);
    uBit.io.pin[motor_pin2].setAnalogValue(speed * 4);
    break;
  // motor turn reverse.
  case 1:
    uBit.io.pin[motor_pin1].setAnalogValue(speed * 4);
    uBit.io.pin[motor_pin2].setAnalogValue(0);
    break;
  default:
    break;
  }
}