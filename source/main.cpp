/*
 * Copyright 2024 Tedd OKANO
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

#include	"r01lib.h"
r01lib_start;	/* *** place this word before making instance of r01lib classes *** */

Ticker		t;
DigitalOut	led( GREEN );

void callback( void )
{
	led	= !led;
}


int main(void)
{
	PRINTF( "Check LED is blinking\r\n" );
	t.attach( callback, 0.1 );

	while ( true )
		;
}
