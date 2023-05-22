#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char *generate_morse(char *eng){
    int size=strlen(eng);
    int pos=0;
    char *token=malloc(sizeof(char)*size*5);
    while(pos<size){
        if(eng[pos]=='a'|| eng[pos]=='A'){
            char *rep="._";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='b'|| eng[pos]=='B'){
            char *rep="_...";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='c'|| eng[pos]=='C'){
            char *rep="_._.";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='d'|| eng[pos]=='D'){
            char *rep="_..";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='e'|| eng[pos]=='E'){
            char *rep=".";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='f'|| eng[pos]=='F'){
            char *rep=".._.";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='g'|| eng[pos]=='G'){
            char *rep="__.";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='h'|| eng[pos]=='H'){
            char *rep="....";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='i'|| eng[pos]=='I'){
            char *rep="..";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='j'|| eng[pos]=='J'){
            char *rep=".___";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='k'|| eng[pos]=='K'){
            char *rep="_._";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='l'|| eng[pos]=='L'){
            char *rep="._..";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='m'|| eng[pos]=='M'){
            char *rep="__";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='n'|| eng[pos]=='N'){
            char *rep="_.";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='o'|| eng[pos]=='O'){
            char *rep="___";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='p'|| eng[pos]=='P'){
            char *rep=".__.";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='q'|| eng[pos]=='Q'){
            char *rep="__._";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='r'|| eng[pos]=='R'){
            char *rep="._.";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='s'|| eng[pos]=='S'){
            char *rep="...";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='t'|| eng[pos]=='T'){
            char *rep="_";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='u'|| eng[pos]=='U'){
            char *rep=".._";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='v'|| eng[pos]=='V'){
            char *rep="..._";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='w'|| eng[pos]=='W'){
            char *rep=".__";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='x'|| eng[pos]=='X'){
            char *rep="_.._";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='y'|| eng[pos]=='Y'){
            char *rep="_.__";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='z'|| eng[pos]=='Z'){
            char *rep="__..";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='1'){
            char *rep=".____";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='2'){
            char *rep="..___";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='3'){
            char *rep="...__";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='4'){
            char *rep="...._";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='5'){
            char *rep=".....";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='6'){
            char *rep="_....";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='7'){
            char *rep="__...";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='8'){
            char *rep="___..";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='9'){
            char *rep="____.";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]=='0'){
            char *rep="_____";
            token=strcat(token,rep);
            ++pos;
        }
         if(eng[pos]==" "){
            char *rep=" ";
            token=strcat(token,rep);
            ++pos;
        }
    }
    return token;
}