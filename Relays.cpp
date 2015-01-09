#include "Arduino.h"
#include "Relays.h"


Relay::Relay(byte pin)
{
count=1;

Relay_arr[count].pin_id=pin;
pinMode(Relay_arr[count].pin_id,  OUTPUT);
}
void Relay::addOne(byte pin)
{
count++; 
Relay_arr[count].pin_id=pin;
pinMode(Relay_arr[count].pin_id,  OUTPUT);
}
void Relay::setState (byte num,bool state)
{
 Relay_arr[num].state=state;
}
//void  Relay::setName (byte num,)
//{
// Relay_arr[num].state=state;
//}
bool Relay::getState  (byte num)
{
Serial.print(Relay_arr[num].state);
}