int low_pressure(unsigned int *x)
{
    unsigned char *p = (unsigned char *)x;
    unsigned char *limit = p + 4;

    while (p < limit)
    {
        if (*p < 0xFE)
        {
            return 1;
        }
        p++;
    }
    return 0;
}