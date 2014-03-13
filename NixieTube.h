/*
Maintains the state of Nixie Tubes
*/

#ifndef NIXIETUBE_H
#define NIXIETUBE_H
#include "ITube.h"

class NixieTube : public ITube
{
private:
  int m_anodePin;
  int m_cathodeHeader;
  int m_digit;
public:
  NixieTube(int anodePin, int cathodeHeader);
  void setDigit(int digit);
  int getDigit();
  void illuminate();
};

#endif //NIXIETUBE_H
