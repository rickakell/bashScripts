#include <iostream>
#include "swapNormalHeader.h"
using std::cout;
using std::endl;

int main()
{
    const long numSwaps = 100000000;
        
    long swapValue1 = 12345;
    long swapValue2 = 67890;

    cout << "Value 1: " << swapValue1 << endl;
    cout << "Value 2: " << swapValue2 << endl;

    swapNormal(swapValue1, swapValue2);

    cout << "Value 1: " << swapValue1 << endl;
    cout << "Value 2: " << swapValue2 << endl;

    for(long i = 0; i < numSwaps; ++i)
    {
        swapNormal(swapValue1, swapValue2);
    }

    return 0;
}

