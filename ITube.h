#include <Arduino.h>

#ifndef ITUBE_H
#define ITUBE_H
class ITube
{
private:
  static const int sN7414N_0_PINA = 2;
  static const int sN7414N_0_PINB = 3;
  static const int sN7414N_0_PINC = 4;
  static const int sN7414N_0_PIND = 5;
  static const int sN7414N_1_PINA = 6;
  static const int sN7414N_1_PINB = 7;
  static const int sN7414N_1_PINC = 8;
  static const int sN7414N_1_PIND = 9;
  static const int anodePin1 = 10;
  static const int anodePin2 = 11;
  static const int anodePin3 = 12;
  static const int anodePin4 = 13;
protected:
  static void illuminateTube(int anodePin, int num1, int num2);
public:
  static void setPinModes();
};

#endif // ITUBE_H
