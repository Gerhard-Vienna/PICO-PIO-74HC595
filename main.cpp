/*
 * Copyright (c) 2022 Gerhard Schiller
 * SPDX-License-Identifier: GPL-3.0-or-later
 * https://www.gnu.org/licenses/gpl-3.0.txt
 */

#include <stdio.h>
#include "pico/stdlib.h"
// "hardware/clocks.h" gets included by "sn74595.pio.h"
#include "sn74595.pio.h"

int main()
{

	stdio_init_all();
	printf("SN74xx595 PIO-Interface for %d devices with %.2f kHz clock.\n",
		   sn75595_NUM_DEVICES, (float)(sn74595::SHIFT_CLK) / 1000.0) ;

	sn74595::shiftreg_init();

	while (true)
    {
		for (int i = 0; i < 8; i++){
			//setGlobalOutput() usage
			sn74595::setGlobalOutput(i, true);
			sleep_ms(500);
		}
		for (int i = 7; i >= 0; i--){
			//setDeviceOutput() usage
			sn74595::setDeviceOutput(0, i, false);
			sleep_ms(500);
		}
	}
}


