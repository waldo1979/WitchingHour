#include "Clock.h"

Clock::Clock()
{  

  ITube::setPinModes();
  // Setup Tube State objects
  m_NixieHourA = new NixieTube(13, 0);
  m_NixieHourB = new NixieTube(12, 0);
  m_NixieMinuteA = new NixieTube(11, 1);
  m_NixieMinuteB = new NixieTube(10, 1);
  m_NeonColon =  new NeonTube(12, 1 , 0);
}

void Clock::setup()
{
    setSyncProvider(RTC.get); 
}

void Clock::updateTime()
{
  //  
  //DS1307RTC ds3231 = new DS1307RTC();
  int hours = hour();
  if(hours > 12) { hours = hours - 12; };
  int hourDigitOne = hours / 10;
  if(hourDigitOne == 0) { hourDigitOne = 42; }; // Turn off digit
  int hourDigitTwo = hours % 10;
  int minutes = minute();
  int minuteDigitOne = minutes / 10;
  int minuteDigitTwo = minutes % 10;
  int seconds = second();
  m_NeonColon->setState(  ((seconds % 2) == 0) );

  // Update Tube State Objects
  m_NixieHourA->setDigit(hourDigitOne);
  m_NixieHourB->setDigit(hourDigitTwo);
  m_NixieMinuteA->setDigit(minuteDigitOne);
  m_NixieMinuteB->setDigit(minuteDigitTwo);
}

void Clock::illuminateTubes()
{

  // The number 42 is used to cause the Shift Register
  // switch statements to default thereby setting all
  // cathode lines to the LOW state

  m_NixieHourA->illuminate();
  m_NixieHourB->illuminate();
  m_NixieMinuteA->illuminate();
  m_NixieMinuteB->illuminate();
  m_NeonColon->illuminate();
}


