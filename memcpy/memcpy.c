void *my_memcpy( void *destination, const void *source, int Bytes_size)
{
    if( destination==NULL || source==NULL ) return NULL;
    else
    {
      while(Bytes_size--)
        *((char *)destination+Bytes_size) = *((char *)source+Bytes_size);
    } //end else


    return destination;
}

