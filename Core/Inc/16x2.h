/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : 16x2.h
  * @brief          : Header for 16x2.h file.
  *                   This file contains the common defines of the application.
  *                 The datasheet for the chip that I have is found here https://pdf1.alldatasheet.com/datasheet-pdf/view/37317/SAMSUNG/KS0066U.html
  ******************************************************************************

  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __16X2_H
#define __16X2_H


/* Includes ------------------------------------------------------------------*/
//#include "main.h"

/* Exported types ------------------------------------------------------------*/


/* Exported constants --------------------------------------------------------*/


/* Exported macro ------------------------------------------------------------*/



/* Exported functions prototypes ---------------------------------------------*/
void INIT_LCD(void);

void lcd_write_str(char *str);

void lcd_clear(void);

void lcd_write_char(char ch, int row, int col);

void lcd_send_command(int rs, int rw, int data);
/* Private defines -----------------------------------------------------------*/

#define LCD_WIDTH 16
#define LCD_HEIGHT 2

#define LCD_SEGMENT_WIDTH 5
#define LCD_SEGMENT_HEIGHT 8


// RS and RW operations
// Bits in order RS then RW
#define SET_INSTRUCTION_WRITE 0x0
#define SET_BUSY_ADDR_READ    0x1
#define SET_DATA_WRITE        0x2
#define SET_READ_DATA         0x3


// common lcd commands
#define CLRSCR  0x01
#define HOME    0x02

#define DEC_CUR 0x04
#define INC_CUR 0x06

#define DEC_DISPLAY 0x05
#define INC_DISPLAY 0x07

#define DISPLAY_CURSOR_DISABLE  0x08
#define CURSOR_BLINK_ENABLE     0x09
#define CURSOR_ENABLE           0x0A
#define DISPLAY_ENABLE          0x0C

#define SHIFT_UP_CUR        0x10
#define SHIFT_DOWN_CUR      0x14
#define SHIFT_UP_DISPLAY    0x18
#define SHIFT_DOWN_DISPLAY  0x1C


#define SET_8BIT_2LINE_5x8 0x38
#define SET_4BIT_2LINE_5x8 0x28






// pin definitions
#define LCD_D0_Pin GPIO_PIN_15
#define LCD_D0_GPIO_Port GPIOC

#define LCD_D1_Pin GPIO_PIN_1
#define LCD_D1_GPIO_Port GPIOA

#define LCD_D2_Pin GPIO_PIN_2
#define LCD_D2_GPIO_Port GPIOA

#define LCD_D3_Pin GPIO_PIN_3
#define LCD_D3_GPIO_Port GPIOA

#define LCD_D4_Pin GPIO_PIN_4
#define LCD_D4_GPIO_Port GPIOA

#define LCD_D5_Pin GPIO_PIN_5
#define LCD_D5_GPIO_Port GPIOA

#define LCD_D6_Pin GPIO_PIN_6
#define LCD_D6_GPIO_Port GPIOA

#define LCD_D7_Pin GPIO_PIN_7
#define LCD_D7_GPIO_Port GPIOA

#define LCD_ENABLE_Pin GPIO_PIN_12
#define LCD_ENABLE_GPIO_Port GPIOA

#define LCD_RS_Pin GPIO_PIN_15
#define LCD_RS_GPIO_Port GPIOA

#define LCD_RW_Pin GPIO_PIN_3
#define LCD_RW_GPIO_Port GPIOB


#endif /* __16X2_H */
