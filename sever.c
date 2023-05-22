#include "dependencies/CWebStudio.h"
#include "dependencies/doTheWorld.h"
#include "eng_morse.c"

#include "interfaces/render_interface.c"
#include "public_routes/main_route.c"
#include "public_routes/morse_route.c"

struct CwebHttpResponse *main_sever(struct CwebHttpRequest *request ){
    request->read_content(request,2000);

    char *route = request->route;
    //when short is clicked
    if(strcmp(route,"/morse_route") == 0) {
        return morse_route(request);
    }
    
    return main_route();
}