#ifndef _RELAYS_H_
#define _RELAYS_H_
//#include <ChibiOS_ARM.h>
//MUTEX_DECL(Serial_mut);
#include "Arduino.h"
#define MAX_OF_RELAYS 5

class Relay
{
private:
struct Relay_t {
byte pin_id;
//char name_id[10];
boolean state;
};
Relay_t Relay_arr[MAX_OF_RELAYS];
public:
byte count;
Relay(byte pin);
void addOne(byte pin);
void setState (byte num,bool state);
//void setName (byte num); //under construction
bool getState  (byte num);
};
#endif