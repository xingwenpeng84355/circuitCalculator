//
//  circuitSingle.h
//  assignment3
//
//  Created by xingwenpeng on 27/11/2019.
//  Copyright © 2019 xingwenpeng. All rights reserved.
//

#ifndef circuitSingle_h
#define circuitSingle_h
#include <iostream>
#include "circuit.h"
#include "register.h"


class circuitSingle: public circuit{
    
private:
    registor* comp1;
public:
    circuitSingle(std::string);
    virtual double getOveralRegistence();//return the overal resistence of the circuit
    virtual double getOveralVoltage();//return the overal voltage of the circuit
    virtual double getOverallCurrent();//return the overal current of the circuit
    virtual void setOverallVoltage(double);//set the overall voltage
      void setComp1(registor*); // set the pointer pointing to the registor

};
#endif /* circuitSingle_h */



