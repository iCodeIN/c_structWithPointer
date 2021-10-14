```
$ clang-13 main.c -static
$ ./a.out
sizeof(pointer):            8
sizeof(structWithPointer):  8
&structWithPointer:         0x7fffb68417a0
&structWithPointer.pointer: 0x7fffb68417a0
sizeof(pointer) == sizeof(structWithPointer): 1
$ 
$ clang-13 --version
clang version 13.0.0
Target: x86_64-unknown-linux-gnu
Thread model: posix
InstalledDir: /usr/bin
```
