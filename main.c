/*
 * main.c
 *
 *  Created on: Oct 25, 2017
 *      Author: fredrick
 */

#include <linux/init.h>     // module_init, module_exit
#include <linux/module.h>	// version info, MODULE_LICENSE, MODULE_AUTHOR, printk()

#include "tt-tuio.h"	//

//
MODULE_LICENSE("NoLicense");
MODULE_AUTHOR("Fredrick Johansson, Tangiamo 2017");

///
static int simple_driver_init(void)
{
	int result = 0;
	printk( KERN_NOTICE "tt-tuio: Initialization started" );

	result = register_device();
	return result;
}

///
static void simple_driver_exit(void)
{
	printk( KERN_NOTICE "tt-tuio: Exiting" );
	unregister_device();
}

// Set module function pointers
module_init(simple_driver_init);
module_exit(simple_driver_exit);
