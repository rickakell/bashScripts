#ifndef SWAPNORMALHEADER_H
#define SWAPNORMALHEADER_H

template < typename T >
void swapNormal(T & val1, T & val2)
{
    T temp = val1;
    val1 = val2;
    val2 = temp;
    return;
}

#endif

