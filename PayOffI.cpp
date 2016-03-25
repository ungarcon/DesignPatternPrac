//
//  PayOffI.cpp
//  DerivativePricing
//
//  Created by Yanbing Liu on 2/16/16.
//  Copyright (c) 2016 Yanbing Liu. All rights reserved.
//

#include "PayOffI.h"
#include "algorithm"

using namespace std;

PayOff::PayOff(double strike_, OptionType TheOptionsType_):strike(strike_),TheOptionsType(TheOptionsType_)
{
}

double PayOff::operator()(double Spot) const
{
    switch (TheOptionsType) {
        case call:
            return max(Spot-strike,0.0);
        case put:
            return max(strike-Spot,0.0);
        default:
            throw("unknown type");
    }
}