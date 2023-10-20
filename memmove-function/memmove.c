void *my_memmove(void *str1, const void *str2, size_t n)
{
    unsigned int index=0;
    if( str1==NULL || str2==NULL) return NULL; // means error in the passed data
    else
    {
        /* Now, overlapping the content of string1 by copying the content of string2 into it */
        for( index=0; index<n; index++)
        {
            *(char *)(str1+index)=*(char *)(str2+index);
        } // end for loop
        return ( (char *)str2 );
    } // end else
}
