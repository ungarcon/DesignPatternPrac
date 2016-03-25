//
//  SimpleMonteCarlo.h
//  DerivativePricing
//
//  Created by Yanbing Liu on 2/16/16.
//  Copyright (c) 2016 Yanbing Liu. All rights reserved.
//

#ifndef __DerivativePricing__SimpleMonteCarlo__
#define __DerivativePricing__SimpleMonteCarlo__

#include <iostream>
#include "PayOffII.h"

double SimpleMonteCarlo(const PayOff& thePayOff, double T, double spot, double vol,
                         double r, unsigned long NumberOfPaths);

#endif /* defined(__DerivativePricing__SimpleMonteCarlo__) */
