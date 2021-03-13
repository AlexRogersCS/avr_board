DEVICE = at90usb162

# Symbolic targets

all:	main.hex

load: all
	sudo dfu-programmer $(DEVICE) erase
	sudo dfu-programmer $(DEVICE) flash main.hex

clean:
	rm -f main.hex

# File targets

main.hex: main.s
	gavrasm main.s
