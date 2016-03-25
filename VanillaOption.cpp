//
//  VanillaOption.cpp
//  DerivativePricing
//
//  Created by Yanbing Liu on 2/17/16.
//  Copyright (c) 2016 Yanbing Liu. All rights reserved.
//

#include "VanillaOption.h"


VanillaOptions::VanillaOptions(const PayOff& payofftype_,double Expiry_):Expiry(Expiry_)
{
    payoffpointer = payofftype_.clone();
}

double VanillaOptions::GetExpiry() const
{
    return Expiry;
}

double VanillaOptions::OptionPayOff(double spot) const
{
    return (*payoffpointer)(spot);
}

VanillaOptions::VanillaOptions(const VanillaOptions& original)
{
    Expiry = original.Expiry;
    payoffpointer = original.payoffpointer->clone();
}

VanillaOptions& VanillaOptions::operator=(const VanillaOptions& original)
{
    if(this != &original){
        Expiry = original.Expiry;
        delete payoffpointer;
        payoffpointer = original.payoffpointer->clone();
    }
    return *this;
}

VanillaOptions::~VanillaOptions()
{
    delete payoffpointer;
}