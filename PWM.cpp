#include "Arduino.h"
#include "PWM.h"

Led::Led(byte pin)
{
count=1;
Pwm_arr[count].pin_id=pin;
Pwm_arr[count].power=0;
Pwm_arr[count].state=0;
pinMode(Pwm_arr[count].pin_id,  OUTPUT);
}
void Led::addOne(byte pin)
{
count++; 
Pwm_arr[count].pin_id=pin;
pinMode(Pwm_arr[count].pin_id,  OUTPUT);
Pwm_arr[count].power=0;
Pwm_arr[count].state=0;
}
void Led::start_pwm(byte num,int time,byte stages);
{
  Pwm_arr[num].pin_id
  analogWrite(highestPin, 0);
      
}
