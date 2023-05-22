#include "morse/english_to_morse.c"
#include "morse/morse_to_english.c"
#include <stdio.h>

int main(){
    char *test = "._  ._  /  _... ";

    char *result  = morse_to_english(test);
    printf("%s\n",result);
    return 0;
}
