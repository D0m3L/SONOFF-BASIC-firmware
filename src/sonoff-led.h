#ifndef _sonoff_led_h
#define _sonoff_led_h

#include <Ticker.h>
#include "sonoff-configuration.h"

class SonoffLED
{
  public:
    SonoffLED();
    void On();
    void Off();
    void blink(int t = 100);
    void startBlinking(float t);
    void stopBlinking();
 
  private:  
    Ticker LEDTimer;

};
#endif