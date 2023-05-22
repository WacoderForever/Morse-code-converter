//
// Created by jurandi on 13-05-2023.
//


struct CTextStack * render_interface(char *token){
    struct CTextStack *s = newCTextStack(CTEXT_LINE_BREAKER, CTEXT_SEPARATOR);
    s->$open(s,HTML,"lang=\"en\"");
    s->open(s,HEAD);
        char *fav_icon_link = smart_static_ref("favicon.ico");
        s->auto$close(s,LINK,"rel=\"shortcut icon\" href=\"%s\"",fav_icon_link);
        free(fav_icon_link);

        char *style = smart_static_ref("style.css");
        s->auto$close(s,LINK,"rel=\"stylesheet\" href=\"%s\"",style);
        free(style);
                

    s->close(s,HEAD);
        s->open(s,BODY);
        s->auto$close(s,BR,"");
            s->$open(s,DIV,R"(class="center")");
                s->open(s,H3);
                    s->segment_text(s,"MORSE CODE CONVERTER");
                s->close(s,H3);
                s->$open(s,FORM,R"(action="/morse_route" method="POST" )");
                s->auto$close(s,INPUT,R"( name="eng" placeholder="Enter string" )");
                s->auto$close(s,BR,"");
                s->auto$close(s,BR,"");
                s->open(s,BUTTON);
                     s->segment_text(s,"Convert");
                s->close(s,BUTTON);

                s->close(s,FORM);

                if(token != NULL){
                    s->open(s,H4);

                         s->segment_text(s,"MORSE CODE FORMAT:");
                         s->auto$close(s,BR,"");
                        s->segment_text(s,token);
                        s->close(s,H4);
                    
                }

            s->close(s,DIV);



        s->close(s,BODY);
    s->close(s,HTML);
    return s;
}