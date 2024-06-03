#ifndef GPIO_CONF_H_
#define GPIO_CONF_H_

// Mode : input - General Output - Alternative Function - Analog Function
// OTYPER : Output push pull - Output open drain
// OSPEEDER : Low speed - Meduim speed - High speed - Very high speed
// PUPDR : No pull-up - pull down
typedef enum {
	MODER_INPUT = 0x0, MODER_OUTPUT, MODER_ALTERNATIVE_FUNC, MODER_ANALOG_FUNC,
} MODER_t;

typedef enum {
	OTYPER_OUTPUT_PUSH_PULL = 0x0, OTYPER_OUTPUT_OPEN_DRAIN
} OTYPER_t;

typedef enum {
	OSPEEDER_LOW_SPEED = 0x0,
	OSPEEDER_MEDUIM_SPEED,
	OSPEEDER_HIGH_SPEED,
	OSPEEDER_VERY_HIGH_SPEED
} OSPEEDR_t;

typedef enum {
	PUPDR_NO_PULL_UP_PULL_DOWN = 0x0, PUPDR_PULL_UP, PUPDR_PULL_DOWN
} PUPDR_t;

typedef struct {
	MODER_t MODER;
	OTYPER_t OTYPER;
	OSPEEDR_t OSPEEDER;
	PUPDR_t PUPDR;
} GPIO_PIN_MODE_t;

typedef enum {
	PINA0 = 0,
	PINA1,
	PINA2,
	PINA3,
	PINA4,
	PINA5,
	PINA6,
	PINA7,
	PINA8,
	PINA9,
	PINA10,
	PINA11,
	PINA12,
	PINA13,
	PINA14,
	PINA15,
	PINB0,
	PINB1,
	PINB2,
	PINB3,
	PINB4,
	PINB5,
	PINB6,
	PINB7,
	PINB8,
	PINB9,
	PINB10,
	PINB11,
	PINB12,
	PINB13,
	PINB14,
	PINB15,
	PINC13 = 45,
	PINC14,
	PINC15,
	PIN_TOTAL
} GPIO_PINS_t;

typedef enum {
	PORTA, PORTB, PORTC
} GPIO_Port_t;

typedef enum {
	LOW = 0, HIGH
} GPIO_PIN_OUT_t;

typedef enum {
	GPIO_LOW_SPEED = 0, GPIO_MID_SPEED, GPIO_HIGH_SPEED, GPIO_VHIGH_SPEED
} GPIO_SPEED_t;

extern const GPIO_PIN_MODE_t GPIO_pinStatusArray[PIN_TOTAL];

#endif /* GPIO_CONF_H_ */
