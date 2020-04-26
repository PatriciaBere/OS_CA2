#pragma once
#include <stdint.h>

#define BITS_PER_BYTE 8

typedef enum {
  IS_BIG_ENDIAN,
  IS_LITTLE_ENDIAN
} sys_endianness;

uint64_t       get_sys_bitness();
sys_endianness get_sys_endianness();
