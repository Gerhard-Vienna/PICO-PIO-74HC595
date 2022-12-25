# PICO-PIO-74HC595

An implementation using PICOs programmable input/output block (PIO) to connect to 
SN74HC595 8-bit shift registers device.

It supports chains of up to 4 devices.

If you are also interested in its input counterpart have a look at [PICO-PIO-74HC165](https://github.com/Gerhard-Vienna/PICO-PIO-74HC165)

## How to use in your application:
1. Copy sn74595.pio into the directory that holds your applications 
2. Add:
	#include "snsn74595.pio.h"
to your code.
3. Add the line:
	pico_generate_pio_header(test ${CMAKE_CURRENT_LIST_DIR}/sn74595.pio)
to the CMakeLists.txt file

## How to build the example (main.cpp):

1. Follow the instructions in [Getting started with Raspberry Pi Pico](https://datasheets.raspberrypi.com/pico/getting-started-with-pico.pdf): 
"Chapter 8. Creating your own Project" to create a directory for your project.
2. Copy main.cpp, sn74595.pio and CMakeLists.txt from this repository into the newly created directory.
3. Copy the pico_sdk_import.cmake file from the external folder in your pico-sdk installation to your project directory.
4. Create the build subfolder, cd into it 
5. run "cmake .." followed by "make"


