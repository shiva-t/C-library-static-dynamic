#Linked List related functions are defined in dll.c and dll_cleanup.c
#these have to be used by application
#static library can be created using the two dll source implementation

gcc -c dll.c -o dll.o
gcc -c dll_cleanup.c -o dll_cleanup.o
ar rs libdll.a dll.o dll_cleanup.o
