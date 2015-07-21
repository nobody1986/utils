
typedef struct ustring_struct
{
    char sval[1];
    int length;
} ustring;

typedef struct uslice_struct
{
    ustring** p;
    int size;
} uslice;

ustring* ustring_new(char *str);
uslice* ustring_split(ustring* str,char *s);
