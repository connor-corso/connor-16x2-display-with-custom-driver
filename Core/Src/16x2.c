// this is where the driver code will be, written by connor corso
#include "main.h"
#include "16x2.h"

// Call this to initialize the display, the setup order is from the datasheet found here
// https://pdf1.alldatasheet.com/datasheet-pdf/view/37317/SAMSUNG/KS0066U.html
void INIT_LCD(void)
{
    lcd_send_command(0,0,SET_8BIT_2LINE_5x8);
    HAL_Delay(1); // wait for 1ms for the screen to be cleared. This only should be 39us
    lcd_send_command(0,0,DISPLAY_ENABLE);
    HAL_Delay(1); // wait for 1ms for the display to be enabled
    lcd_send_command(0,0,CLRSCR);
    HAL_Delay(2); // wait for 2ms for the screen to be cleared
    lcd_send_command(0,0,INC_CUR);
    HAL_Delay(1); // wait for 1ms to set increment mode
}

void lcd_write_str(char *str);

void lcd_clear(void);

void lcd_write_char(char ch, int row, int col);


// takes a command and sets all of the pins to match that command
void lcd_send_command(int rs, int rw, int data)
{
    // Set the RS and RW pins
    HAL_GPIO_WritePin(LED_RS_GPIO_Port,LED_RS_Pin, rs & 0x1);
    HAL_GPIO_WritePin(LED_RW_GPIO_Port,LED_RW_Pin, rw & 0x1);

    // set the data pins
    HAL_GPIO_WritePin(LED_D0_GPIO_Port, LED_D0_Pin, data & 0b00000001);
    HAL_GPIO_WritePin(LED_D1_GPIO_Port, LED_D1_Pin, data & 0b00000010);
    HAL_GPIO_WritePin(LED_D2_GPIO_Port, LED_D2_Pin, data & 0b00000100);
    HAL_GPIO_WritePin(LED_D3_GPIO_Port, LED_D3_Pin, data & 0b00001000);
    HAL_GPIO_WritePin(LED_D4_GPIO_Port, LED_D4_Pin, data & 0b00010000);
    HAL_GPIO_WritePin(LED_D5_GPIO_Port, LED_D5_Pin, data & 0b00100000);
    HAL_GPIO_WritePin(LED_D6_GPIO_Port, LED_D6_Pin, data & 0b01000000);
    HAL_GPIO_WritePin(LED_D7_GPIO_Port, LED_D7_Pin, data & 0b10000000);

    //enable the led so that it can read everything in, and then disable it again
    HAL_GPIO_WritePin(LED_ENABLE_GPIO_Port, LED_ENABLE_Pin, GPIO_PIN_SET);
    HAL_Delay(1); //wait 1ms -> should be lowered to about 100ms
    HAL_GPIO_WritePin(LED_ENABLE_GPIO_Port, LED_ENABLE_Pin, GPIO_PIN_RESET);
    
}