//
//  SimpleMonteCarlo.cpp
//  DerivativePricing
//
//  Created by Yanbing Liu on 2/16/16.
//  Copyright (c) 2016 Yanbing Liu. All rights reserved.
//

#include "SimpleMonteCarlo.h"
#include <cmath>
using namespace std;

double SimpleMonteCarlo(const PayOff& thePayOff, double T, double spot, double vol,
                         double r, unsigned long NumberOfPaths)
{
    double variance = vol*vol*T;
    double rootVar = sqrt(variance);
    double itoCorrection = -0.5*variance;
    
    double movedSpot = spot*exp(r*T+itoCorrection);
    double thisSpot;
    double runningsum = 0;
    
    double mean = runningsum/NumberOfPaths;
    mean *=  exp(-r*T);
    return mean;
}