unsigned int size_string_wrong (char s[]) {
    return sizeof(s);
}

unsigned int size_string_correct (char s[]) {
    unsigned int cont=0;
    while(s[cont]!=0)
    {
        cont++;
    }
    return cont;
}

unsigned int string_to_int (char s[]) {
    unsigned int result = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        result = result * 10 + (s[i] - '0');
    }
    return result;
}