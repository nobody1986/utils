#include<stdlib.h>
#include<malloc.h>
#include<string.h>
#include "ustring.h"

ustring* ustring_new(char *sstr){
    ustring* str = (ustring *)malloc(sizeof(ustring));
    str->length = strlen(sstr);
    str->sval = (char *)malloc(sizeof(char) * (str->length + 1));
    memcpy(str->sval,sstr,sizeof(char) * (str->length + 1));
    return str;
}

