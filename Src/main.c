#include "RCC_Interface.h"
#include "GPIO_Interface.h"
#include "NVIC_Interface.h"

int main(void) {
	RCC_voidSysClkEn();
	RCC_enPrephiralEnClk(AHB1_GPIOAEN);
	GPIO_voidInit();

	GPIO_PIN_OUT_t PINA0_READ;

	while (1) {
		GPIO_enPinRead(PINA0, &PINA0_READ);
		if (PINA0_READ == LOW) {
			GPIO_enPinSet(PINA5, HIGH);
		} else {
			GPIO_enPinSet(PINA5, LOW);
		}

	}

}
