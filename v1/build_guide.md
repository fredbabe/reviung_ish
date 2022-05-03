# Build guide

## Components:
Most of the components can be bought from EU vendors: splitkb or keycapsss.

| Component  | Amount |
| ------------- | ------------- |
| 1N4148 SMD Diodes  | 56  |
| Pro micro or equivalent  | 1  |
| Choc hotswap sockets | 56 |
| Reset switch (https://splitkb.com/collections/keyboard-parts/products/reset-buttons?variant=42291963527427) Its the top push variant, can also be bought from alieexpress| 1 |
| Bumpers | 8 at least |
| Micro usb cable | 1 |

## Introduction
This version of reviung_ish features a 56 key keyboard with 7 keys in the bottom row where 2 of them can be 1.5 units and the middle 2 units. Holes have been made if one would create a case, though two of the holes are a bit off compared to the other holes on the other side.

<strong>One note is that the 2U key in the middle of the bottom row is a bit tight to insert the switch since i forgot to make the holes the correct size. But its not a problem, just a bit tight. You could prepare a switch before soldering by inserting the switch into the tight switch hole and take it off again. Then use that switch when the socket has been soldered. If in doubt, just hit me up on discord: https://discord.gg/aTsAaWN5tc</strong>

![picture1](https://github.com/fredbabe/reviung_ish/blob/main/pictures/picture1.jpg)

## Soldering

I start of soldering one side of each pad of the diodes pad as well the hotswap pads.

Afterwards i solder the diodes on first, you could take inspiration of the Lily58 build guide: https://github.com/kata0510/Lily58/blob/master/Pro/Doc/buildguide_en.md.

When the diodes is soldered on, i would start on the micro controller. <strong>Solder the pro micro face down (Components towards the pcb)! Important.</strong> Afterwards solder the reset button. Then i would install the firmware and test with a tweezer that everything works. When all good, the solder the hotswaps on and wolla, your done :))

It could be easier to solder the sockets after the diodes, but i like to test the board before soldering the sockets.
