#ifndef SWAPADDSUBHEADER_H
#define SWAPADDSUBHEADER_H

template < typename T >
void swapAddSub(T & val1, T & val2)
{
    val1 += val2;
    val2 = val1 - val2;
    val1 -= val2;
    return;
}

#endif

