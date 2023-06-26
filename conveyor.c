#include "mcc_generated_files/pin_manager.h"
#include "conveyor.h"



void Conveyor_Stop (void)
{
    
   CS_IN1_SetLow();
    
    
}


void Conveyor_Start (void)
{
    
    
    CS_IN1_SetHigh();
    
    
}


void Conveyor_Init (void)
{
    
    CS_IN1_SetLow();
    RST_IN2_SetLow();
    INT_STBY_SetHigh();
    
   
}