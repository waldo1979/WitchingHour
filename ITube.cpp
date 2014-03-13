#include "ITube.h"

void ITube::setPinModes()
{
  // Initialize Arduino GPIO's for use
  // with the Arduinix Driver
  pinMode(sN7414N_0_PINA, OUTPUT);      
  pinMode(sN7414N_0_PINB, OUTPUT);      
  pinMode(sN7414N_0_PINC, OUTPUT);      
  pinMode(sN7414N_0_PIND, OUTPUT);    
  
  pinMode(sN7414N_1_PINA, OUTPUT);      
  pinMode(sN7414N_1_PINB, OUTPUT);      
  pinMode(sN7414N_1_PINC, OUTPUT);      
  pinMode(sN7414N_1_PIND, OUTPUT);      
  
  pinMode(anodePin1, OUTPUT);  
  pinMode(anodePin2, OUTPUT);
  pinMode(anodePin3, OUTPUT);
  pinMode(anodePin4, OUTPUT); 
}

void ITube::illuminateTube(int anodePin, int num1, int num2)
{  
  int a,b,c,d;
  
  // set defaults.
  a=1;b=1;c=0;d=1; // will display a zero.
  
  // Load the a,b,c,d.. to send to the SN74141 IC (1)
  switch( num1 )
  {
    case 0: a=0;b=0;c=0;d=0;break;
    case 1: a=1;b=0;c=0;d=0;break;
    case 2: a=0;b=1;c=0;d=0;break;
    case 3: a=1;b=1;c=0;d=0;break;
    case 4: a=0;b=0;c=1;d=0;break;
    case 5: a=1;b=0;c=1;d=0;break;
    case 6: a=0;b=1;c=1;d=0;break;
    case 7: a=1;b=1;c=1;d=0;break;
    case 8: a=0;b=0;c=0;d=1;break;
    case 9: a=1;b=0;c=0;d=1;break;
    default: a=1;b=1;c=1;d=1; break;
  }

 // Write to output pins
  digitalWrite(sN7414N_0_PIND, d);
  digitalWrite(sN7414N_0_PINC, c);
  digitalWrite(sN7414N_0_PINB, b);
  digitalWrite(sN7414N_0_PINA, a);

  // Load the a,b,c,d.. to send to the SN74141 IC (2)
  switch( num2 )
  {
    case 0: a=0;b=0;c=0;d=0;break;
    case 1: a=1;b=0;c=0;d=0;break;
    case 2: a=0;b=1;c=0;d=0;break;
    case 3: a=1;b=1;c=0;d=0;break;
    case 4: a=0;b=0;c=1;d=0;break;
    case 5: a=1;b=0;c=1;d=0;break;
    case 6: a=0;b=1;c=1;d=0;break;
    case 7: a=1;b=1;c=1;d=0;break;
    case 8: a=0;b=0;c=0;d=1;break;
    case 9: a=1;b=0;c=0;d=1;break;
    default: a=1;b=1;c=1;d=1;
    break;
  }
  
  // Write to output pins
  digitalWrite(sN7414N_1_PIND, d);
  digitalWrite(sN7414N_1_PINC, c);
  digitalWrite(sN7414N_1_PINB, b);
  digitalWrite(sN7414N_1_PINA, a);
  
  digitalWrite(anodePin, 1);
  digitalWrite(anodePin, 0);
}


