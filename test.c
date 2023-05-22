#include "morse/english_to_morse.c"
#include <stdio.h>

int main(){
    char *test = "SOS";

    char *result  = generate_morse(test);
    printf("%s\n",result);
    return 0;
}
