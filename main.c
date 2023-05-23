#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#include <stdbool.h>
#include <stdio.h>


#include "dependencies/CWebStudio.h"
#include "morse/english_to_morse.c"
#include "morse/morse_to_english.c"

#include "interfaces/render_interface.c"
#include "interfaces/render_english_interface.c"
#include "interfaces/general.c"
#include "public_routes/main_route.c"
#include "public_routes/translate_route.c"
#include "public_routes/english_route.c"


struct CwebHttpResponse *main_sever(struct CwebHttpRequest *request ){
    char *route = request->route;
    //when short is clicked
    
    if(strcmp(route,"/translate_route") == 0) {
        return translate_route(request);
    }
     //when page is changed to english translator
    if(strcmp(route,"/english_route")==0){
        return english_route(request);
    }
    

    //first page of web app
    return main_route();
}

int main(){

    for(int i=3000;i< 4000;i++){
           
        struct CwebSever *sever = newCwebSever(i, main_sever);
        sever->single_process = true;
        sever->start(sever);
        sever->free(sever);
    }

    return 0;
}
