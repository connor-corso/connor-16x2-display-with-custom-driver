// this is where the driver code will be, written by connor corso
#include "main.h"
#include "16x2.h"

void INIT_LCD(void)
{
    
}

void lcd_write_str(char *str);

void lcd_clear(void);

void lcd_write_char(char ch, int row, int col);


// takes a command and sets all of the pins to match that command
void lcd_send_command(int rs, int rw, int data)
{

    HAL_GPIO_WritePin(LED_D0_GPIO_Port, LED_D0_Pin, data & 0b00000001);
    HAL_GPIO_WritePin(LED_D1_GPIO_Port, LED_D1_Pin, data & 0b00000010);
    HAL_GPIO_WritePin(LED_D2_GPIO_Port, LED_D2_Pin, data & 0b00000100);
    HAL_GPIO_WritePin(LED_D3_GPIO_Port, LED_D3_Pin, data & 0b00001000);
    HAL_GPIO_WritePin(LED_D4_GPIO_Port, LED_D4_Pin, data & 0b00010000);
    HAL_GPIO_WritePin(LED_D5_GPIO_Port, LED_D5_Pin, data & 0b00100000);
    HAL_GPIO_WritePin(LED_D6_GPIO_Port, LED_D6_Pin, data & 0b01000000);
    HAL_GPIO_WritePin(LED_D7_GPIO_Port, LED_D7_Pin, data & 0b10000000);

    //HAL_GPIO_WritePin(LED_EN_GPIO_Port, LED_EN_Pin, GPIO_PIN_SET);
    //delay 100us
    //HAL_GPIO_WritePin(LED_EN_GPIO_Port, LED_EN_Pin, GPIO_PIN_RESET)
    
}