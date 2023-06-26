#include "mcc_generated_files/mccp1_compare.h"
#include "servo.h"




void Servo_Stop(void)
{
    
    CCP1RB = 1500; // 1.5 ms pulse width - stop the motor from rotating
    
}

void Servo_MoveRight(void)
{
    
     CCP1RB = 1100;  //1.2 ms  pulse width - move to right near 1500 motor rotation slow
    
}

void Servo_MoveLeft(void)
{
    
      CCP1RB = 1900; //1.8 ms  pulse width - move to left near 1500 motor rotation slow
    
}


void Servo_Position(uint16_t pw)
{
    
     CCP1RB = pw;
    
    
}