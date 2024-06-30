#include <avr/io.h>
#include <util/delay.h>

int main (void)
{
    // Set Data Direction to output on port B, pins 1:
    DDRB = 0b00000010;
    while (1) {
        // set PB1 high
        PORTB = 0b00000010;
        _delay_ms(200);
        // set PB1 low
        PORTB = 0b00000000;
        _delay_ms(1000);
    }

    return 1;
}
