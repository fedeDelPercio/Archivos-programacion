#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t tiempo = time(0);
    struct tm*tlocal = localtime(&tiempo);
    char output[128];
    strftime(output , 128 ,"%d/%m/%y %H:%M:%S", tlocal);
    printf("%s \n\n",output);

    return 0;
}
