// (c) Spyridon Zervos


#include<iostream>

#include "Core/PolarCoordinates.h"

int main(int argc, char* argv[])
{
    PolarCoordinates s(1, 90);
    std::cout << s.ToString() << '\n';
    return 0;
}