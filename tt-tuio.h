/*
 * tt-tuio.h
 *
 *  Created on: Oct 25, 2017
 *      Author: Fredrick
 */

#ifndef TT_TUIO_H_
#define TT_TUIO_H_

#include <linux/compiler.h>	//
#include <linux/types.h>	//

/// Module Init
__must_check int register_device(void);

/// Module Exit
void unregister_device(void);

#endif // TT_TUIO_H_
