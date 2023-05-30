  void convert_char_to_morse(char *text, char current_char,char tested, char *conversion){
        
    char upper = toupper(tested);

    if(current_char ==tested||current_char  == upper){ 
            text=strcat(text,conversion); 
            strcat(text," ");
    }
}


char *generate_morse(char *eng){
    int size=strlen(eng);

    char *text=malloc(sizeof(char)*size*6);

    for(int pos=0;pos<size;pos++){
        
    
        convert_char_to_morse(text,eng[pos],'a',"._");        
        convert_char_to_morse(text,eng[pos],'b',"_...");
        convert_char_to_morse(text,eng[pos],'c',"_._.");
        convert_char_to_morse(text,eng[pos],'d',"_..");
        convert_char_to_morse(text,eng[pos],'e',".");
        convert_char_to_morse(text,eng[pos],'f',".._.");
        convert_char_to_morse(text,eng[pos],'g',"__.");
        convert_char_to_morse(text,eng[pos],'h',"....");
        convert_char_to_morse(text,eng[pos],'i',"..");
        convert_char_to_morse(text,eng[pos],'j',".___");
        convert_char_to_morse(text,eng[pos],'k',"_._");
        convert_char_to_morse(text,eng[pos],'l',"._..");
        convert_char_to_morse(text,eng[pos],'m',"__");
        convert_char_to_morse(text,eng[pos],'n',"_.");
        convert_char_to_morse(text,eng[pos],'o',"___");
        convert_char_to_morse(text,eng[pos],'p',".__.");
        convert_char_to_morse(text,eng[pos],'q',"__._");
        convert_char_to_morse(text,eng[pos],'r',"._.");
        convert_char_to_morse(text,eng[pos],'s',"...");
        convert_char_to_morse(text,eng[pos],'t',"_");
        convert_char_to_morse(text,eng[pos],'u',".._");
        convert_char_to_morse(text,eng[pos],'v',"..._");
        convert_char_to_morse(text,eng[pos],'w',".__");
        convert_char_to_morse(text,eng[pos],'x',"_.._");
        convert_char_to_morse(text,eng[pos],'y',"_.__");
        convert_char_to_morse(text,eng[pos],'z',"__..");
        //nnumbers
        convert_char_to_morse(text,eng[pos],'1',".____");
        convert_char_to_morse(text,eng[pos],'2',"..___");
        convert_char_to_morse(text,eng[pos],'3',"...__");
        convert_char_to_morse(text,eng[pos],'4',"...._");
        convert_char_to_morse(text,eng[pos],'5',".....");
        convert_char_to_morse(text,eng[pos],'6',"_....");
        convert_char_to_morse(text,eng[pos],'7',"__...");
        convert_char_to_morse(text,eng[pos],'8',"___..");
        convert_char_to_morse(text,eng[pos],'9',"____.");
        convert_char_to_morse(text,eng[pos],'0',"_____");
        //special characters
        convert_char_to_morse(text,eng[pos],' ',"/");
        convert_char_to_morse(text,eng[pos],'.',".-.-.-");
        convert_char_to_morse(text,eng[pos],',',"--..--");
        convert_char_to_morse(text,eng[pos],'?',"..--..");
        convert_char_to_morse(text,eng[pos],'\'',".----.");
        convert_char_to_morse(text,eng[pos],'!',"-.-.--");
        convert_char_to_morse(text,eng[pos],'/',"-..-.");
        convert_char_to_morse(text,eng[pos],'(',"-.--.");
        convert_char_to_morse(text,eng[pos],')',"-.--.-");
        convert_char_to_morse(text,eng[pos],'&',".-...");
        convert_char_to_morse(text,eng[pos],':',"---...");
        convert_char_to_morse(text,eng[pos],';',"-.-.-.");
        convert_char_to_morse(text,eng[pos],'=',"-...-");
        convert_char_to_morse(text,eng[pos],'+',".-.-.");
        convert_char_to_morse(text,eng[pos],'-',"-....-");
        convert_char_to_morse(text,eng[pos],'_',"..--.-");
        convert_char_to_morse(text,eng[pos],'"',".-..-.");
        convert_char_to_morse(text,eng[pos],'$',"...-..-");
        convert_char_to_morse(text,eng[pos],'@',".--.-.");

    
    }
    text[strlen(text)-1]='\0';
    return text;
}