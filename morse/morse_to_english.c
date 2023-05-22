
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

void change_morse_string_to_char(char*morse_text,char *text, char *morse_char, char eng_char,int *pos){
    
    //substr from pos to the len of morse_char
    int morse_char_len = strlen(morse_char);
    char *buffer = malloc(sizeof(char)*morse_char_len);

    char *string_in_position = morse_text + *pos;

    strncpy(buffer,string_in_position,morse_char_len);

    if(strcmp(buffer,morse_char) == 0){
        strcat(text,&eng_char);
        *pos+=strlen(morse_char);
    }
    free(buffer);    

}

char *morse_to_english(char *morse_text){
    int size = strlen(morse_text);
    char *text = malloc(sizeof(char)*size);


    for(int pos=0;pos < size; pos++){

        change_morse_string_to_char(morse_text,text,"._",'a',&pos);
        change_morse_string_to_char(morse_text,text,"_...",'b',&pos);
        change_morse_string_to_char(morse_text,text,"_._.",'c',&pos);
        change_morse_string_to_char(morse_text,text,"_..",'d',&pos);
        change_morse_string_to_char(morse_text,text,".",'e',&pos);
        change_morse_string_to_char(morse_text,text,".._.",'f',&pos);
        change_morse_string_to_char(morse_text,text,"__.",'g',&pos);
        change_morse_string_to_char(morse_text,text,"....",'h',&pos);
        change_morse_string_to_char(morse_text,text,"..",'i',&pos);
        change_morse_string_to_char(morse_text,text,".___",'j',&pos);
        change_morse_string_to_char(morse_text,text,"_._",'k',&pos);
        change_morse_string_to_char(morse_text,text,"._..",'l',&pos);
        change_morse_string_to_char(morse_text,text,"__",'m',&pos);
        change_morse_string_to_char(morse_text,text,"_.",'n',&pos);
        change_morse_string_to_char(morse_text,text,"___",'o',&pos);
        change_morse_string_to_char(morse_text,text,".__.",'p',&pos);
        change_morse_string_to_char(morse_text,text,"__._",'q',&pos);
        change_morse_string_to_char(morse_text,text,"._.",'r',&pos);
        change_morse_string_to_char(morse_text,text,"...",'s',&pos);
        change_morse_string_to_char(morse_text,text,"_",'t',&pos);
        change_morse_string_to_char(morse_text,text,".._",'u',&pos);
        change_morse_string_to_char(morse_text,text,"..._",'v',&pos);
        change_morse_string_to_char(morse_text,text,".__",'w',&pos);
        change_morse_string_to_char(morse_text,text,"_.._",'x',&pos);
        change_morse_string_to_char(morse_text,text,"_.__",'y',&pos);
        change_morse_string_to_char(morse_text,text,"__..",'z',&pos);

        //numbers
        change_morse_string_to_char(morse_text,text,".____",'1',&pos);
        change_morse_string_to_char(morse_text,text,"..___",'2',&pos);
        change_morse_string_to_char(morse_text,text,"...__",'3',&pos);
        change_morse_string_to_char(morse_text,text,"...._",'4',&pos);
        change_morse_string_to_char(morse_text,text,".....",'5',&pos);
        change_morse_string_to_char(morse_text,text,"_....",'6',&pos);
        change_morse_string_to_char(morse_text,text,"__...",'7',&pos);
        change_morse_string_to_char(morse_text,text,"___..",'8',&pos);
        change_morse_string_to_char(morse_text,text,"____.",'9',&pos);
        change_morse_string_to_char(morse_text,text,"_____",'0',&pos);

        //special characters
        change_morse_string_to_char(morse_text,text,".-.-.-",'.',&pos);
        change_morse_string_to_char(morse_text,text,"--..--",',',&pos);
        change_morse_string_to_char(morse_text,text,"..--..",'?',&pos);
        change_morse_string_to_char(morse_text,text,"-....-",'-',&pos);
        change_morse_string_to_char(morse_text,text,"-..-.",'/',&pos);
        change_morse_string_to_char(morse_text,text,"-.--.",'(',&pos);
        change_morse_string_to_char(morse_text,text,"-.--.-",')',&pos);
        change_morse_string_to_char(morse_text,text,"/",' ',&pos);
        //space

    }
    return text;
}