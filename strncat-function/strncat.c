char *my_strncat(char *const dest, const char *src, unsigned int n)
{
    unsigned int dest_index=0;
    unsigned int src_index=0;

    if( src==NULL || dest==NULL) return NULL;
    else
    {
        /* Now we get the index that indicates the end of the destination string*/
        while ( *(dest+dest_index) != '\0') dest_index++; // after while excution, dest_index = index of '\0' which indicates the end of the string

        for( src_index=0 ; src_index < n ; src_index++ ) // loop from index 0 of src string to n-1
        {
            *(dest+dest_index)= (*(src+src_index)); // copy values in src string into dest string
            dest_index++;   // heading to the next byte of the dest string
        }// end for loop
        /* Now assign end of string to the last index */
        *(dest+dest_index)='\0';

        return dest;
    }// end else

}
