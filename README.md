# trinket

Code examples for [Adafruit trinket board](https://www.adafruit.com/product/1501).

### Installation (ArchLinux)

```
pacman -S avrdude avr-gcc avr-libc
```

You may need to adjust `chip_erase_delay` value for `ATtiny85` section of `avrdude.conf` file (found in `/etc/avrdude.conf` on ArchLinux) to 400000 or something like that in order to make uploading to chip working.

### Usage

Plug the board to USB port, press reset button to enter the bootloader, red LED should start pulsing. Run 

```
make install
```

Note: fuse programming does not seem to be supported by trinket, default oscillator runs at 8 MHz, could be doubled in software.
