#include "dependencies/CWebStudio.h"
#include "dependencies/doTheWorld.h"
#include "eng_morse.c"

#include "interfaces/render_interface.c"
#include "public_routes/main_route.c"
#include "public_routes/morse_route.c"


struct CwebHttpResponse *main_sever(struct CwebHttpRequest *request ){
    char *route = request->route;
    //when short is clicked
    if(strcmp(route,"/morse_route") == 0) {
        return morse_route(request);
    }
    //first page of web app
    return main_route();
}

int main(){

    for(int i=3000;i< 4000;i++){
        cweb_run_server(i,main_sever,CWEB_DEFAULT_TIMEOUT,CWEB_DANGEROUS_SINGLE_PROCESS);
    }

    return 0;
}
