#include <iostream>
#include "demo_depend_lib/line.h"

int main()
{
    std::cout<<"in main"<<std::endl;

    Line line;
    line.print();
    return 0;
}
