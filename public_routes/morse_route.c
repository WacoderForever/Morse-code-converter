struct CwebHttpResponse * morse_route(struct CwebHttpRequest *request){
    request->read_content(request,20000);

    char *eng = request->get_param(request,"eng");

    if(eng == NULL){
        struct CTextStack *stack = render_interface(NULL);

        return cweb_send_rendered_CTextStack_cleaning_memory(
                stack,
                200
        );
    }
    char *token = generate_morse(eng);

    struct CTextStack *stack = render_interface(token);
    free(token);
    return cweb_send_rendered_CTextStack_cleaning_memory(
            stack,
            200
    );
}