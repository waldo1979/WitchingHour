#include "NeonTube.h"

NeonTube::NeonTube (int anodePin, int cathodeHeader, int cathodePin) : m_anodePin(anodePin)
{
  m_cathodeHeader0 = (cathodeHeader == 0) ? cathodePin : 42;
  m_cathodeHeader1 = (cathodeHeader == 1) ? cathodePin : 42;
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
    illuminateTube(m_anodePin, m_cathodeHeader0, m_cathodeHeader1); 
  };
}
