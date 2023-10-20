void *my_memchr(const void *str, int c, unsigned int n)
{
    unsigned int index=0;
    for( index=0; index<n; index++)
    {
        if( *(char *)(str+index) == c) return (char *)(str+index);
    }
    return NULL; // return null when not finding the target character in the block of memory or the input bytes is zero
}
