#include <avr/io.h>

int main(void) {

    DDRD |= (1<<4);

	while (1) {

		if (PIND & (1<<7)) {
			PORTD &= ~(1<<4);
		} else {
            PORTD |= (1<<4);
        }

    }

	return 0;

}

