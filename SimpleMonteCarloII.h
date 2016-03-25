//
//  SimpleMonteCarloII.h
//  DerivativePricing
//
//  Created by Yanbing Liu on 2/17/16.
//  Copyright (c) 2016 Yanbing Liu. All rights reserved.
//

#ifndef __DerivativePricing__SimpleMonteCarloII__
#define __DerivativePricing__SimpleMonteCarloII__

#include <iostream>
#include "PayOffII.h"

double SimpleMonteCarlo(const PayOff& thePayOff, double T, double spot, double vol,
                        double r, unsigned long NumberOfPaths);

#endif /* defined(__DerivativePricing__SimpleMonteCarloII__) */
