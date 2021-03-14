# AVR Development Board

I like to explore different instruction sets during my Computer Architecture course - typically x86-64, ARMv7, ARMv8 and AVR. For the latter, I thought it would be fun to have a small cheap development board that the students could experiment with, so I designed one.

The board uses an 8-bit Atmel AT90USB162 processor since it requires minimal external components, comes with a factory programmed USB bootloader so no additional programmer is required, and can implement USB devices such as single key keyboards and mice.

This repository contains the Eagle CAD, Gerber and placement files, along with the BOM and a couple of simple code examples that use AVR-GCC and Gerd’s AVR assembler ([gavrasm](http://www.avr-asm-tutorial.net/gavrasm/index_en.html)).

## Development Tools

The AVR-GCC developnment tools and the programmer can be installed as below:

On Ubuntu 20.04 LTS

```
> sudo apt-get install libusb
> sudo apt-get install dfu-programmer
> sudo apt-get install gcc-avr binutils-avr avr-libc
```

On Fedora 32

```
> sudo dnf install libusb
> sudo dnf install dfu-programmer
> sudo dnf install avr-gcc avr-binutils avr-libc
```

### Gerd’s AVR Assembler

Gerd’s AVR assembler is a simple assembler that generate hex files directly. It supports many AVR processors, including the AT90USB162, without requiring any additional configuration files. It can be installed from [here](http://www.avr-asm-tutorial.net/gavrasm/index_en.html).
