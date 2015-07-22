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

inline int str_cmp(char *s1,char *s2,int len){
}

uslice* ustring_split(ustring* str,char *s){
if(str == NULL){
return NULL;
}
int slen = 0;
int sslen = 0;
uslice* slice = (uslice *)malloc(sizeof(uslice));

if(s == NULL){
ustring* s = ustring_new(str->sval);
slice->size = 1;
(*slice)->p = s;
return slice;
}

}
