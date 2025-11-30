#include "helper.h"
#include <stdlib.h>
#include <stdio.h>



int main(){

    FILE *file = open_text_file();

    int file_size = get_file_size(file);
    char *content = malloc(file_size);    
    printf("%ld\n",file_size);
    fill_array_text_chars(content, file);
    free(content);
    fclose(file);
    return 0;
}