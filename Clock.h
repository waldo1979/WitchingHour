#ifndef CLOCK_H
#define CLOCK_H
#include "NixieTube.h"
#include "NeonTube.h"

class Clock
{
private:
  NixieTube* m_NixieHourA;
  NixieTube* m_NixieHourB;
  NixieTube* m_NixieMinuteA;
  NixieTube* m_NixieMinuteB;
  NeonTube* m_NeonColon;
  
  void illuminateTube(int AnodePin, int num1, int num2);
public:
  Clock();
  void updateTime();
  void illuminateTubes();
};

#endif //CLOCK_H
