//
//  PayOffII.h
//  DerivativePricing
//
//  Created by Yanbing Liu on 2/17/16.
//  Copyright (c) 2016 Yanbing Liu. All rights reserved.
//

#ifndef __DerivativePricing__PayOffII__
#define __DerivativePricing__PayOffII__

#include <iostream>

class PayOff{
public:
    PayOff(){};
    virtual double operator()(double spot) const=0;
    virtual ~PayOff(){};
    virtual PayOff* clone() const = 0;
};


class CallPayOff:public PayOff{
public:
    CallPayOff(double strike_);
    virtual double operator()(double spot) const;
    virtual ~CallPayOff(){};
    virtual PayOff* clone() const;
private:
    double strike;
};


class PutPayOff:public PayOff{
public:
    PutPayOff(double strike_);
    virtual double operator()(double spot) const;
    virtual ~PutPayOff(){};
    virtual PayOff* clone() const;
private:
    double strike;
};


#endif /* defined(__DerivativePricing__PayOffII__) */
