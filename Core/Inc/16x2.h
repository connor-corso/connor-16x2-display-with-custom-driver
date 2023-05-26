/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : 16x2.h
  * @brief          : Header for 16x2.h file.
  *                   This file contains the common defines of the application.
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
