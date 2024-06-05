#include "NVIC_Conf.h"
#include "NVIC_Private.h"
#include "NVIC_Interface.h"
#include "BIT_MATH.h"
#include "STD_TYPE.h"
#include "STM32F4_MEM_MAP.h"

// Enable interrupt
void NVIC_voidInterruptEnable(NVIC_TABLE_t copy_enInterruptName) {
	NVIC->NVIC_ISER[copy_enInterruptName / 32] = 1
			<< (copy_enInterruptName % 32);
}

// Disable interrupt
void NVIC_voidInterruptDisable(NVIC_TABLE_t copy_enInterruptName) {
	NVIC->NVIC_ICER[copy_enInterruptName / 32] = 1
			<< (copy_enInterruptName % 32);
}

// Set interrupt pending
void NVIC_voidInterruptSetPending(NVIC_TABLE_t copy_enInterruptName) {
	NVIC->NVIC_ISPR[copy_enInterruptName / 32] = 1
			<< (copy_enInterruptName % 32);
}

// Clear interrupt pending
void NVIC_voidInterruptClearPending(NVIC_TABLE_t copy_enInterruptName) {
	NVIC->NVIC_ICPR[copy_enInterruptName / 32] = 1
			<< (copy_enInterruptName % 32);
}

// Read active interrupt
void NVIC_voidInterruptReadActive(NVIC_TABLE_t copy_enInterruptName,
		NVIC_ACTIVE_FLAG_t *pActiveRead) {
	*pActiveRead = READ_BIT(NVIC->NVIC_IABR[copy_enInterruptName / 32],
			copy_enInterruptName % 32);
}

// Complete this two functions

// Set priority configuration
void NVIC_voidSetPriorityConfig(NVIC_PRIORITY_GROUP_t copy_enSetPriorityOption) {
	uint32_t local_u32SetSCBconfig = VECTOR_KEY
			| (copy_enSetPriorityOption << 8);
	SCB->SCB_AIRCR = local_u32SetSCBconfig; // Use = instead of |= to set the value correctly
}

// Set interrupt priority
void NVIC_voidSetInterruptPriority(NVIC_TABLE_t copy_enInterruptName,
		uint8_t copy_u8GroupPriority, uint8_t copy_u8SubPriority) {

	uint8_t local_u32Priority = (((copy_u8GroupPriority << 2)
			| copy_u8SubPriority) << 4);
	NVIC->NVIC_IPR[copy_enInterruptName] |= local_u32Priority;
}

