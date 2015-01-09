
#ifndef _PWM_H_
#define _PWM_H_
//#include <ChibiOS_ARM.h>
//MUTEX_DECL(Serial_mut);
#include "Arduino.h"

//#define PWM_FREQ1  5000
#define MAX_OF_PWM 5

class Led
{
 private:
enum pwm_states {OFF,ON,BLINK,SINEPOWER}; //
struct PWM_t {
byte pin_id;
byte power;
byte state;
};

PWM_t Pwm_arr[MAX_OF_PWM];
public:
byte count;
Led (byte pin);
void addOne(byte pin);
void setState (byte num,byte state);
//void setName (byte num); //under construction
void start_pwm(byte num,int time,byte stages); // pint number and time in miliseconds to ON/OFF pwm and stages of setup
void stop_pwm(byte num,int time,byte stages);

};