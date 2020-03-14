#ifndef SWAPXORHEADER_H
#define SWAPXORHEADER_H

template < typename T >
void swapXOR(T & val1, T & val2)
{
    val1 ^= val2;
    val2 ^= val1;
    val1 ^= val2;
    return;
}

#endif

