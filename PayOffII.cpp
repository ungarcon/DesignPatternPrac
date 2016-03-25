//
//  PayOffII.cpp
//  DerivativePricing
//
//  Created by Yanbing Liu on 2/17/16.
//  Copyright (c) 2016 Yanbing Liu. All rights reserved.
//

#include "PayOffII.h"
using namespace std;

CallPayOff::CallPayOff(double strike_):strike(strike_)
{
}

double CallPayOff::operator() (double spot) const
{
    return max(spot-strike,0.0);
}

PayOff* CallPayOff::clone() const
{
    return new CallPayOff(*this);
}

PutPayOff::PutPayOff(double strike_):strike(strike_)
{
}

double PutPayOff::operator() (double spot) const
{
    return max(strike - spot,0.0);
}

PayOff* PutPayOff::clone() const
{
    return new PutPayOff(*this);
}