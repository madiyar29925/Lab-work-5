
#define PERIOD_EXAMPLE_VALUE			(0xFFFF)
#define DUTY_CYCLE_EXAMPLE_VALUE		(0x8000)		
0% duty cycle
#include <avr/io.h>


void PORT_init(void);
void TCA1_init(void);

void PORT_init(void)
{
	PORTC.DIRSET |= PIN6_bm;						/*set pin 6 of PORT C as output*/
}

void TCA1_init(void)
{
    PORTMUX.TCAROUTEA = PORTMUX_TCA10_bm;			/* set waveform output on PORT C */

    TCA1.SINGLE.CTRLB = TCA_SINGLE_CMP2EN_bm                    /* enable compare channel 2 */
                      | TCA_SINGLE_WGMODE_SINGLESLOPE_gc ;		/* single-slope PWM mode */
					
	TCA1.SINGLE.PER = PERIOD_EXAMPLE_VALUE;			
	TCA1.SINGLE.CMP2 = DUTY_CYCLE_EXAMPLE_VALUE;	
	
	TCA1.SINGLE.CTRLA = TCA_SINGLE_CLKSEL_DIV16_gc	
					  | TCA_SINGLE_ENABLE_bm;		

}

int main(void)
{ 
	PORT_init();
	
	TCA1_init();
    
    while (1) 
    {
		;
    }
}