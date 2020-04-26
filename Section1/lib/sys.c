#include <stdlib.h>
#include <unistd.h>
#include "./sys.h"

// Solution: simply check the size of a size_t
uint64_t get_sys_bitness() {
  return sizeof(size_t) * BITS_PER_BYTE;
}

// Solution: create an unsigned integer with FF as
// the low-order bytes, and 00 as the high-order byte
// Cast pointer to the integer, cast the pointer to
// a 1 byte integer, dereference and check if the
// value is 00 or FF -- downcasting a pointer will
// always result in a pointer to the lowest addressed
// bytes in the original value
sys_endianness get_sys_endianness() {
  uint32_t check_num    = 0x000000FF;
  uint8_t* low_byte_ptr = (uint8_t*)(&check_num);
  return *low_byte_ptr == 0xFF
    ? IS_LITTLE_ENDIAN
    : IS_BIG_ENDIAN;
}
