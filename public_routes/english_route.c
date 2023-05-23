struct CwebHttpResponse * english_route(struct CwebHttpRequest *request){
    request->read_content(request,20000);

    char *morse_text = request->get_param(request,"morse_text");

    if(morse_text == NULL){
        struct CTextStack *stack = render_english_interface(NULL);

        return cweb_send_rendered_CTextStack_cleaning_memory(
                stack,
                200
        );
    }
    char *token = morse_to_english(morse_text);

    struct CTextStack *stack = render_english_interface(token);
    free(token);
    return cweb_send_rendered_CTextStack_cleaning_memory(
            stack,
            200
    );
}