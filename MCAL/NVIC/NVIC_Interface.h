#ifndef _NVIC_INTERFACE_H_
#define _NVIC_INTERFACE_H_

typedef enum {
	NVIC_WWDG,
	NVIC_EXTI16_PVD,
	NVIC_EXTI121_TAMP_STAMP,
	NVIC_EXTI122_RTC_WKUP,
	NVIC_FLASH,
	NVIC_RCC,
	NVIC_EXTI0,
	NVIC_EXTI1,
	NVIC_EXTI2,
	NVIC_EXTI3,
	NVIC_EXTI4,
	NVIC_DMA1_STREAM0,
	NVIC_DMA1_STREAM1,
	NVIC_DMA1_STREAM2,
	NVIC_DMA1_STREAM3,
	NVIC_DMA1_STREAM4,
	NVIC_DMA1_STREAM5,
	NVIC_DMA1_STREAM6,
	NVIC_ADC,
	NVIC_EXTI19_5 = 23,
	NVIC_TIM1_BRK_TIM9,
	NVIC_TIM1_UP_TIM10,
	NVIC_TIM1_TRG_COM_TIM11,
	NVIC_TIM1_CC,
	NVIC_TIM2,
	NVIC_TIM3,
	NVIC_TIM4,
	NVIC_I2C1_EV,
	NVIC_I2C1_ER,
	NVIC_I2C2_EV,
	NVIC_I2C2_ER,
	NVIC_SPI1,
	NVIC_SPI2,
	NVIC_USART1,
	NVIC_USART2,
	NVIC_EXTI15_10 = 40,
	NVIC_EXTI17_RTC_ALARM,
	NVIC_EXTI18_OTG_FS_WKUP,
	NVIC_DMA1_STREAM7 = 47,
	NVIC_SDIO = 49,
	NVIC_TIM5,
	NVIC_SPI3,
	NVIC_DMA2_STREAM0 = 56,
	NVIC_DMA2_STREAM1,
	NVIC_DMA2_STREAM2,
	NVIC_DMA2_STREAM3,
	DMA2_STREAM4,
	NVIC_OTG_FS = 67,
	NVIC_DMA2_STREAM5,
	NVIC_DMA2_STREAM6,
	NVIC_DMA2_STREAM7,
	NVIC_USART6,
	NVIC_I2C3_EV,
	NVIC_I2C3_ER,
	NVIC_I2C3,
	NVIC_FP = 81,
	NVIC_SPI4 = 84
} NVIC_TABLE_t;

typedef enum {
	NOT_ACTIVE, ACTIVE
} NVIC_ACTIVE_FLAG_t;

typedef enum {
	PRIORITY_GR16_SUB0 = 0x000,
	PRIORITY_GR8_SUB2 = 0x100,
	PRIORITY_GR4_SUB4 = 0x101,
	PRIORITY_GR2_SUB8 = 0x110,
	PRIORITY_GR0_SUB16 = 0x111
} NVIC_PRIORITY_GROUP_t;

void NVIC_voidInterruptEnable(NVIC_TABLE_t copy_enInterruptName);

void NVIC_voidInterruptClearEnable(NVIC_TABLE_t copy_enInterruptName);

void NVIC_voidInterruptSetPending(NVIC_TABLE_t copyInterruptName);

void NVIC_voidInterruptClearPending(NVIC_TABLE_t copyInterruptName);

void NVIC_voidSetPriorityConfig(NVIC_PRIORITY_GROUP_t copy_enSetPriorityOption);

#endif
