
typedef struct ustring_struct
{
    char sval[1];
    int length;
} ustring;


ustring* ustring_new(char *str);
