//
//  VanillaOption.h
//  DerivativePricing
//
//  Created by Yanbing Liu on 2/17/16.
//  Copyright (c) 2016 Yanbing Liu. All rights reserved.
//

#ifndef __DerivativePricing__VanillaOption__
#define __DerivativePricing__VanillaOption__

#include <iostream>
#include "PayOffII.h"

class VanillaOptions{
public:
    VanillaOptions(const PayOff& payofftype_,double Expiry_);
    VanillaOptions(const VanillaOptions& original);
    VanillaOptions& operator=(const VanillaOptions& original);
    ~VanillaOptions();
    
    double GetExpiry() const;
    double OptionPayOff(double spot) const;
    
private:
    PayOff* payoffpointer;
    double Expiry;
};
#endif /* defined(__DerivativePricing__VanillaOption__) */
