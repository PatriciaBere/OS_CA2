#include <stdio.h>
#include "./lib/sys.h"

int main() {

  long           bitness    = get_sys_bitness();
  sys_endianness endianness = get_sys_endianness();

  printf("You are working on a %ld-bit system\n", bitness);

  if (endianness == IS_BIG_ENDIAN) {
    printf("You are working on a big-endian system\n");
  }
  else {
    printf("You are working on a little-endian system\n");
  }

}
