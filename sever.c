#include "dependencies/CWebStudio.h"
#include "dependencies/doTheWorld.h"
#include "morse/english_to_morse.c"
#include "morse/morse_to_english.c"

#include "interfaces/render_interface.c"
#include "public_routes/main_route.c"
#include "public_routes/translate_route.c"

struct CwebHttpResponse *main_sever(struct CwebHttpRequest *request ){
    request->read_content(request,2000);

    char *route = request->route;
    //when short is clicked
    if(strcmp(route,"/translate_route") == 0) {
        return translate_route(request);
    }
    
    return main_route();
}