#ifndef BITSTREAM_H_
#define BITSTREAM_H_

#include "can_parse.h"

#define BITSTREAM_FLASH_RX_TIMEOUT (50)

void bitstreamInit();
void bitstream10Hz();
void bitstream100Hz();

#endif