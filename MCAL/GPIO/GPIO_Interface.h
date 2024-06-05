/*
 * GPIO_Interface.h
 *
 *  Created on: Mar 10, 2024
 *      Author: Mohamed Mabrouk
 */

#ifndef GPIO_INTERFACE_H_
#define GPIO_INTERFACE_H_

//Remeber to remove these
#include "STD_TYPE.h"
#include "GPIO_Conf.h"

/*
 typedef enum {
 GPIO_OUTPUT_PP = 0b1000,
 GPIO_OUTPUT_PP_PU = 0b1001,
 GPIO_OUTPUT_PP_PD = 0b1010,
 GPIO_OUTPUT_OD = 0b1100,
 GPIO_OUTPUT_OD_PU = 0b1101,
 GPIO_OUTPUT_OD_PD = 0b1110,
 GPIO_AF_PP = 0b10000,
 GPIO_AF_PP_PU = 0b10001,
 GPIO_AF_PP_PD = 0b10010,
 GPIO_AF_OD = 0b10100,
 GPIO_AF_OD_PU = 0b10101,
 GPIO_AF_OD_PD = 0b10110,
 GPIO_INPUT_FLOATING = 0b0,
 GPIO_INPUT_PU = 0b1,
 GPIO_INPUT_PD = 0b10,
 GPIO_IN_OUT_ANALOG = 0b11
 } GPIO_PIN_MODE_t;
 */

void GPIO_voidInit(void);

ERROR_t GPIO_enPinConfig(GPIO_PINS_t copy_enPinNum,
		GPIO_PIN_MODE_t copy_enPinMode);

ERROR_t GPIO_enPinSet(GPIO_PINS_t copy_enPinNum, GPIO_PIN_OUT_t copy_enPinOut);

ERROR_t GPIO_enPinSetSpeed(GPIO_PINS_t copy_enPinNum, GPIO_SPEED_t copy_enSpeed);

ERROR_t GPIO_enPinRead(GPIO_PINS_t copy_enPinNum, GPIO_PIN_OUT_t *pPinInput);

#endif /* GPIO_INTERFACE_H_ */
