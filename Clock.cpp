#include "Clock.h"

Clock::Clock()
{  
  
  ITube::setPinModes();
  // Setup Tube State objects
  m_NixieHourA = new NixieTube(10, 0);
  m_NixieHourB = new NixieTube(11, 0);
  m_NixieMinuteA = new NixieTube(12, 1);
  m_NixieMinuteB = new NixieTube(13, 1);
  m_NeonColon =  new NeonTube(11,1,0);
}

void Clock::updateTime()
{
  // Update Tube State Objects
  m_NixieHourA->setDigit(0);
  m_NixieHourB->setDigit(0);
  m_NixieMinuteA->setDigit(0);
  m_NixieMinuteB->setDigit(0);
  m_NeonColon->setState(true);
}

void Clock::illuminateTubes()
{
  
  // The number 42 is used to cause the Shift Register
  // switch statements to default thereby setting all
  // cathode lines to the LOW state
  
  // The code below is not very OO, a tube should know
  // how to illuminate itself
  
  m_NixieHourA->illuminate();
  m_NixieHourB->illuminate();
  m_NixieMinuteA->illuminate();
  m_NixieMinuteB->illuminate();
  m_NeonColon->illuminate();
}

