//
//  main.cpp
//  DerivativePricing
//
//  Created by Yanbing Liu on 1/13/16.
//  Copyright (c) 2016 Yanbing Liu. All rights reserved.
//

#include <iostream>
#include <bitset>
using namespace std;

int main(int argc, const char * argv[])
{

    // insert code here...
//    std::cout << "Hello, World!\n";
    bitset<4> bitsettest(string("0101"));
    cout << bitsettest.flip(2) << endl;
    cout << bitsettest.flip() << endl;
    cout << bitsettest.count() << endl;
    return 0;
}

