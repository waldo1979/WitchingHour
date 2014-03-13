#include "Clock.h"

Clock* clock;

void setup()
{ 
  clock = new Clock(); 
}

void loop()
{
  clock->updateTime();
  clock->illuminateTubes();
}
