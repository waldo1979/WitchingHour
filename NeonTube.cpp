#include "NeonTube.h"

NeonTube::NeonTube (int anodePin, int cathodeHeader, int cathodePin) : m_anodePin(anodePin)
{
  cathodeHeader0 = (cathodeHeader == 0) ? m_cathodePin : 42;
  cathodeHeader1 = (cathodeHeader == 1) ? m_cathodePin : 42;
  m_state = false;
}

void NeonTube::setState(bool state)
{
  m_state = state;
}

bool NeonTube::getState()
{
  return m_state;
}

void NeonTube::illuminate()
{
  if(getState())
  {
    illuminateTube(m_anodePin, cathodeHeader0, cathodeHeader1); 
  };
}
