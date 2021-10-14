#include <stdio.h>

typedef struct StructWithPointer {
  void * pointer;
} StructWithPointer;

int main() {
  void * pointer = 0;
  StructWithPointer structWithPointer = {};
  printf("sizeof(pointer):            %lu\n", sizeof(pointer));
  printf("sizeof(structWithPointer):  %lu\n", sizeof(structWithPointer));
  printf("&structWithPointer:         %p\n", &structWithPointer);
  printf("&structWithPointer.pointer: %p\n", &structWithPointer.pointer);
  printf("sizeof(pointer) == sizeof(structWithPointer): %d\n", sizeof(pointer) == sizeof(structWithPointer));
}
