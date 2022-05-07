# reviung_ish
In this readme you find information about the keyboard, build guide and how to flash it.

### Introduction
Welcome! 

Reviung_ish is a child born from the original reviung. This keyboard features choc switches (Only compatible with choc switches), choc space and a number row. The default keymap is my 'base' layout which i try to use across all my boards, though still WIP. The keymap consists of combos and 1 layer. I like to have various ways to use my keboards which is why i combine combo use with normal use e.g. having enter as combo (C, V) and a regular enter key. This is what feels most ergonomic for me. But feel free to modify it to your liking!

The bottom row has 7 keys where 2 of them can be 1.5 units and the middle 2 units. Holes have been made if one would create a case, though two of the holes are a bit off compared to the other holes on the other side. (These holes will probably not be in the next version.

<strong>One note is that the 2U key in the middle of the bottom row is a bit tight to insert the switch since i forgot to make the holes the correct size. But its not a problem, just a bit tight. You could prepare a switch before soldering by inserting the switch into the tight switch hole and take it off again. Then use that switch when the socket has been soldered. If in doubt, just hit me up on discord: https://discord.gg/aTsAaWN5tc</strong>. 

![picture1](https://github.com/fredbabe/reviung_ish/blob/main/pictures/picture1.jpg)
![picture2](https://github.com/fredbabe/reviung_ish/blob/main/pictures/picture2.jpg)

You will find a short build guide below, and if you want to have extra PCB or haven't got yours yet you can catch me on discord: https://discord.gg/aTsAaWN5tc.

# Build guide

### Components:
Most of the components can be bought from EU vendors: splitkb or keycapsss.

| Component  | Amount |
| ------------- | ------------- |
| 1N4148 SMD Diodes  | 56  |
| Pro micro or equivalent  | 1  |
| Choc hotswap sockets | 56 |
| Choc switches v1| 56 |
| Reset switch (https://splitkb.com/collections/keyboard-parts/products/reset-buttons?variant=42291963527427) Its the top push variant, can also be bought from alieexpress| 1 |
| 3M Bumpers | 8 at least |
| Micro usb cable | 1 |


### Soldering

I start of soldering one side of each pad of the diodes pad as well the hotswap pads.

Afterwards i solder the diodes on first, you could take inspiration of the Lily58 build guide. Remember to solder the diodes in the correct oriantation as the arrow shows. See picture below:

![picture4](https://github.com/fredbabe/reviung_ish/blob/main/pictures/IMG-3101.jpg)

When the diodes is soldered on, i would start on the micro controller. <strong>Solder the pro micro face down (Components towards the pcb)!.</strong> Afterwards solder the reset button. Then i would install the firmware and test with a tweezer that everything works. When all good, the solder the hotswaps on and wolla, your done :))

Remember when you cut the legs of the sockets and reset button on the back board, after solder it on, to use some sort of eye protection! The legs will fly over when flushed.

It could be easier to solder the sockets after the diodes, but i like to test the board before soldering the sockets. The bumpers can be put as shown in the second picture above. You could insert extra 3M bumpers if you feel for it. They just need to be high enough to go above the sockets. I bought mine through keycapsss.com and they were perfect.

### Firmware
The firmware can be installed by navigating to the fork i'm linking to in this repo. Clone that repo and navigate to qmk/keyboards/reviung_ish/keymaps/default and in your terminal write qmk flash. If any issues let me know on disc.
