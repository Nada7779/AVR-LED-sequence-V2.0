/*
 * application.h
 *
 * Created: 4/8/2023 10:08:38 AM
 *  Author: Nada
 */ 

#include "application.h"

// Macros
#define Number_of_sequence 8
// Variables
uint8_t sequence= 0;

void APP_init(void)
{
	// LEDs init
	LED_init(led_1_port, led_1_pin);
	LED_init(led_2_port, led_2_pin);
	LED_init(led_3_port, led_3_pin);
	LED_init(led_4_port, led_4_pin);
	// button init
	Button_init(BUTTON_1_PORT, BUTTON_1_PIN);
	// Enable global interrupts
	Global_interrupt_enable ();
	// Choose the external interrupt sense - sense in rising edge
	External_interrupt_mode (rising_edge);
	// Enable External interrupt 0 - INT0
	Exit_enable0 ();   
}
void APP_start(void){
	while(1)
	{
		
		switch (sequence)
		{
           case 0:
		        LED_off(led_1_port, led_1_pin);
		        LED_off(led_2_port, led_2_pin);
		        LED_off(led_3_port, led_3_pin);
		        LED_off(led_4_port, led_4_pin);

           case 1:
		        LED_on(led_1_port, led_1_pin);
				break;
		   case 2:
	            LED_on(led_2_port, led_2_pin);
	            break;
		   case 3:
		   LED_on(led_3_port, led_3_pin);
		   break;
		  case 4:
		   LED_on(led_4_port, led_4_pin);
		   break;
		  case 5:
		    LED_off(led_1_port, led_1_pin);
		    break;
		  case 6:
			 LED_off(led_2_port, led_2_pin);
			 break;
		  case 7:
		  LED_off(led_3_port, led_3_pin);
		  break;
		  case 8:
		  LED_off(led_4_port, led_4_pin);
		  break;
		  default:
		   // Do nothing
		   break;		   				   
		   		
		}
	}
}
   
   ISR (EXT_INT_0)
   {
	  
	   if (sequence < Number_of_sequence)
	   {
		   sequence++;
	   }
	   else
	   {
		   sequence = 1;
	   }
   }
   

	
		
		
