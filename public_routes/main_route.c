struct CwebHttpResponse * main_route(){

    struct CTextStack *stack = render_interface(NULL);
    return cweb_send_rendered_CTextStack_cleaning_memory(
            stack,
            200
    );
}
