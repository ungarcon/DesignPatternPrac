//
//  PayOffI.h
//  DerivativePricing
//
//  Created by Yanbing Liu on 2/16/16.
//  Copyright (c) 2016 Yanbing Liu. All rights reserved.
//

#ifndef __DerivativePricing__PayOffI__
#define __DerivativePricing__PayOffI__

#include <iostream>

class PayOff{
public:
    enum OptionType {call, put};
    PayOff(double strike_,OptionType TheOptionsType_);
    double operator ()(double Spot) const;
    
private:
    double strike;
    OptionType TheOptionsType;
};


#endif /* defined(__DerivativePricing__PayOffI__) */
