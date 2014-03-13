/*
Maintains the state of a neon tube
*/

#ifndef NEONTUBE_H
#define NEONTUBE_H
#include "ITube.h"

class NeonTube : public ITube
{
private:
  bool  m_state;
  int   m_anodePin;
  int   m_cathodeHeader0;
  int   m_cathodeHeader1;
  int   m_cathodePin;
public:
  NeonTube(int anodPin, int cathodeHeader, int cathodePin);
  void setState(bool state);
  bool getState();
  void illuminate();
};

#endif //NEONTUBE_H
