#include <stdio.h>
#include "lists.h"

/**
 * my_constructor - executes string outside of main
 *
 * Return - void
 */

void __attribute__ ((constructor)) my_constructor()
{	
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
