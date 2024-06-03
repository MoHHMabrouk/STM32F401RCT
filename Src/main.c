#include "RCC_Interface.h"
#include "GPIO_Interface.h"

int main(void) {
	RCC_voidSysClkEn();
	RCC_enPrephiralEnClk(AHB1_GPIOAEN);
	GPIO_voidInit();
	//GPIO_enPinSetSpeed(PINA12, GPIO_LOW_SPEED);
	GPIO_enPinSet(PINA12, HIGH);
	while (1) {
		GPIO_enPinSet(PINA12, HIGH);
	}

}
