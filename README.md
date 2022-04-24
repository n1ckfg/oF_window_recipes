# oF Window Recipes

## Raspberry Pi
### Legacy driver + EGL windows
* The RPi 3 (regular) is the fastest model that can still run oF 0.8.4.
* The RPi 3 can also run the same setup as RPi 4 below, which makes it the most flexible out of the Pi lineup.
* The RPi 3B+ is the fastest model that can still run OMX addons; as that's in the hardware it's not likely to change.

### Fake KMS driver + GLFW windows
* RPi 4 must always use Raspbian Buster or newer, oF 11, Fake KMS, and GLFW windows.
* Although it's possible to recompile oF 11 for EGL windows--afaik that doesn't work on RPi 4.
* RPi 4 can still run fully headless using xvfb. 
* Be careful with the GLFW window initialization steps; small changes can have huge performance impacts.

