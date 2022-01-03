#Linked List related functions are defined in dll.c and dll_cleanup.c
#these have to be used by appplication
#dynamic library can be created using the two dll source implementation

gcc -c -fPIC dll.c -o dll.o
gcc -c -fPIC dll_cleanup.c -o dll_cleanup.o
gcc dll.o dll_cleanup.o -shared -o libdll.so
