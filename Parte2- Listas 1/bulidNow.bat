gcc -c .\list_sequencial.c -o .\list_sequencial.o
ar rc list_sec.a .\list_sequencial.o
gcc main.c -o main -L -l list_sequencial.o

.\main.exe