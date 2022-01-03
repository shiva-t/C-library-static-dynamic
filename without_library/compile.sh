rm *.o *.exe
gcc -c dll.c -o dll.o
gcc -c app.c -o app.o
gcc -c dll_cleanup.c -o dll_cleanup.o
gcc dll.o app.o dll_cleanup.o -o run.exe
