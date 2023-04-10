/*
 * register.h
 *
 * Created: 4/5/2023 4:56:33 PM
 *  Author: acer
 */ 


#ifndef REGISTER_H_
#define REGISTER_H_

#include "types.h"

// PORTA registers
#define PORTA *((volatile uint8_t*)0x3B)
#define DDRA *((volatile uint8_t*)0x3A)
#define PINA *((volatile uint8_t*)0x39)

// PORTB registers
#define PORTB *((volatile uint8_t*)0x38)
#define DDRB *((volatile uint8_t*)0x37)
#define PINB *((volatile uint8_t*)0x36)

// PORTC registers
#define PORTC *((volatile uint8_t*)0x35)
#define DDRC *((volatile uint8_t*)0x34)
#define PINC *((volatile uint8_t*)0x33)

// PORTD registers
#define PORTD *((volatile uint8_t*)0x32)
#define DDRD *((volatile uint8_t*)0x31)
#define PIND *((volatile uint8_t*)0x30) 

// External Interrupts registers
#define MCUCR *((volatile uint8_t*)0x55) //8-bit register
#define MCUCSR *((volatile uint8_t*)0x54) //8-bit register
#define GICR *((volatile uint8_t*)0x5B) //8-bit register
#define GIFR *((volatile uint8_t*)0x5A) //8-bit register
#define SREG *((volatile uint8_t*)0x5F) //8-bit register

//Timer registers
#define TCCR0 *((volatile uint8_t*)0x53) 
#define TCNT0 *((volatile uint8_t*)0x52) 
#define TIFR *((volatile uint8_t*)0x58) 

#endif /* REGISTER_H_ */