char *skip_spaces(char *s)
{
    char *p = s;

    while(*p == ' '){     
        p++;            
    }
    return p;
}