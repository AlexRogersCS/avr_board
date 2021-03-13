.DEVICE AT90USB162

	sbi DDRD,4
loop:
	sbis PIND,7
	rjmp button_down
	cbi PORTD,4
	rjmp loop
button_down:
	sbi PORTD,4
	rjmp loop
