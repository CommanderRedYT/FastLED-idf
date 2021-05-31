#pragma once

#include "sdkconfig.h"

#include "fastpin_esp32.h"

#ifdef FASTLED_ALL_PINS_HARDWARE_SPI
#include "fastspi_esp32.h"
#endif

#ifdef CONFIG_FASTLED_METHOD_I2S
#include "clockless_i2s_esp32.h"
#endif

#ifdef CONFIG_FASTLED_METHOD_RMT
#include "clockless_rmt_esp32.h"
#endif

// #include "clockless_block_esp32.h"
