#include "mcc_generated_files/lcd.h"
#include "lcd_app.h"
#include "mcc_generated_files/pin_manager.h"
#include "conveyor.h"
#include "servo.h"

void LCD_CLEAR(void)
{
    LCD_LOW_POWER_Off();
    LCD_LOW_POWER_AltOff();
    BATTERY1_A_Off();
    BATTERY1_B_Off();
    BATTERY1_C_Off();
    BATTERY1_D_Off();
    
    BATTERY1_A_AltOff();
    BATTERY1_B_AltOff();
    BATTERY1_C_AltOff();
    BATTERY1_D_AltOff();
    
    LCD_COLON1_AltOff();
    LCD_COLON1_Off();
    LCD_DOT1_AltOff();
    LCD_DOT2_AltOff();
    LCD_DOT3_AltOff();
    LCD_DOT4_AltOff();
    LCD_DOT5_AltOff();
    LCD_DOT6_AltOff();
    
    LCD_DOT1_Off();
    LCD_DOT2_Off();
    LCD_DOT3_Off();
    LCD_DOT4_Off();
    LCD_DOT5_Off();
    LCD_DOT6_Off();
}


void LCD_DISPLAY_FAIL(void) 
{   
    LCD_CLEAR();
    
    
    LCD_CHAR1_Print('F');
    LCD_CHAR2_Print('A');
    LCD_CHAR3_Print('I');
    LCD_CHAR4_Print('L');
  
   
 
    LED_R_SetHigh();
    LED_G_SetLow();
    
// Use these line of code for debugging  
//    
//    Servo_Stop();
//    Conveyor_Stop();
    
    
}

void LCD_DISPLAY_TEST(void) 
{   
    LCD_CLEAR();
  
    
    LCD_CHAR1_Print('T');
    LCD_CHAR2_Print('E');
    LCD_CHAR3_Print('S');
    LCD_CHAR4_Print('T');
   
    

    LED_G_SetHigh();
    LED_R_SetLow();
}
