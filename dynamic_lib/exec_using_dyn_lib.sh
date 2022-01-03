#given the dynamic library -libdll.so  and header - dll.h
#the executable needs to be genrerated for application : app.c

gcc -c app.c -o app.o
cp libdll.so /usr/lib
sudo ldconfig
gcc app.o -o run_d.exe -ldll
