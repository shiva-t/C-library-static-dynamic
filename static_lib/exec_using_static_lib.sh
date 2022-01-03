#given the static library -libdll.a  and header - dll.h
#the executable needs to be genrerated for application : app.c

gcc -c app.c -o app.o
gcc app.o -o run_s.exe -L . -ldll
