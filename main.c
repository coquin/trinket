#include <avr/io.h>
#include <avr/power.h>
#include <util/delay.h>

int main (void)
{
    // Use 16 MHz clock
    clock_prescale_set(clock_div_1);

    // Set Data Direction to output on port B, pins 1:
    DDRB |= (1 << PB1);
    while (1) {
        // set PB1 high
        PORTB |= (1 << PB1);
        _delay_ms(200);
        // set PB1 low
        PORTB &= ~(1 << PB1);
        _delay_ms(1000);
    }

    return 1;
}
