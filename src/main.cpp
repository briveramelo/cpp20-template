#include <iostream>
#include "examples/sample.h"

namespace SampleProject
{
    sample sample;
    int main()
    {
        std::cout << "Hello, World!" << std::endl;
        sample.add(1, 2);
        return 0;
    }
}
