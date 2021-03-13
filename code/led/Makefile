DEVICE     = at90usb162
CLOCK      = 8000000
OBJECTS    = main.o

COMPILE = avr-gcc -Wall -Os -DF_CPU=$(CLOCK) -mmcu=$(DEVICE)

# Symbolic targets

all:	main.hex

.c.o:
	$(COMPILE) -c $< -o $@

load: all
	sudo dfu-programmer $(DEVICE) erase
	sudo dfu-programmer $(DEVICE) flash main.hex

clean:
	rm -f main.hex main.elf $(OBJECTS)

# File targets

main.elf: $(OBJECTS)
	$(COMPILE) -o main.elf $(OBJECTS)

main.hex: main.elf
	rm -f main.hex
	avr-objcopy -j .text -j .data -O ihex main.elf main.hex
	avr-size --format=avr --mcu=$(DEVICE) main.elf

disasm:	main.elf
	avr-objdump -d main.elf
