#include <stdio.h>
#include <time.h>

int main()
{
    time_t tempo;
    struct tm * tempo_info;

    time(&tempo);
    tempo_info = localtime(&tempo);
    printf ("Data/hora: %s", asctime(tempo_info));
    return 0;
}
