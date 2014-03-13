#include "NixieTube.h"

NixieTube::NixieTube(int anodePin, int cathodeHeader) : m_anodePin(anodePin), m_cathodeHeader(cathodeHeader)
{
  m_digit = 0;
}

void NixieTube::setDigit(int digit)
{
  m_digit =  digit;
}

int NixieTube::getDigit()
{
  // TODO: Instrament a cross-fade
  return m_digit;
}

void NixieTube::illuminate()
{
  if(m_cathodeHeader == 0) { illuminateTube(m_anodePin, getDigit(), 42); }
  else {illuminateTube(m_anodePin, 42 , getDigit());  };
}
