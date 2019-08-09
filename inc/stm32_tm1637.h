#pragma once

#define CLK_PIN GPIO_PIN_10
#define CLK_PORT GPIOB
#define DIO_PIN GPIO_PIN_11
#define DIO_PORT GPIOB

void tm1637Init(void);
void tm1637DisplayDecimal(int v, int displaySeparator);
void tm1637SetBrightness(char brightness);
