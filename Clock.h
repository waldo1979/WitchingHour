/*
Class to keep track of tubes, access
the RTC modules, update tube state objects
and illuminate tubes.
*/
#ifndef CLOCK_H
#define CLOCK_H
#include "NixieTube.h"
#include "NeonTube.h"
#include <Time.h>
#include <Wire.h>
#include <DS1307RTC.h>


class Clock
{
private:
  NixieTube* m_NixieHourA;
  NixieTube* m_NixieHourB;
  NixieTube* m_NixieMinuteA;
  NixieTube* m_NixieMinuteB;
  NeonTube* m_NeonColon;

public:
  Clock();
  void setup();
  void updateTime();
  void illuminateTubes();
};

#endif //CLOCK_H
