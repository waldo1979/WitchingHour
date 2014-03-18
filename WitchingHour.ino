#include "Clock.h"
#include <Time.h>
#include <Wire.h>
#include <DS1307RTC.h>

Clock* clock;

void setup()
{ 
  clock = new Clock(); 
  clock->setup();
  
  TimeElements time;
  time_t timeStruct;
  time.Hour = 17;
  time.Minute = 15;
  time.Second = 00;
  time.Wday = 2;
  time.Day = 17;
  time.Month = 3;
  time.Year = 44;
  timeStruct = makeTime(time);
  //RTC.set(timeStruct);

}

void loop()
{
  clock->updateTime();
  //for(int x=40;x>0;x++){
  clock->illuminateTubes();
  //}
}
