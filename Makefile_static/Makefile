Target: exe

libdll.a: dll.o dll_cleanup.o
	ar rs libdll.a dll.o dll_cleanup.o

dll.o: dll.c
	gcc -c dll.c -o dll.o
dll_cleanup.o: dll_cleanup.c
	gcc -c dll_cleanup.c -o dll_cleanup.o
app.o:app.c
	gcc -c app.c -o app.o
exe:app.o libdll.a
	gcc app.o -o run.exe -L . -ldll

clean:
	rm *.o
	rm *.exe
	rm *.a
