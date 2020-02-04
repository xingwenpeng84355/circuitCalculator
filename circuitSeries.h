//
//  circuitSeries.h
//  assignment3
//
//  Created by xingwenpeng on 27/11/2019.
//  Copyright © 2019 xingwenpeng. All rights reserved.
//

#ifndef circuitSeries_h
#define circuitSeries_h
#include <iostream>
#include "circuit.h"

class circuitInSeries: public circuit{

    
public:
    circuitInSeries(std::string);
    virtual double getOveralRegistence();//return the overal resistence of the circuit
    virtual  double getOveralVoltage();//return the overal voltage of the circuit
    virtual double getOverallCurrent();//return the overal current of the circuit
 
    virtual void setOverallVoltage(double);//set the overall voltage
   
      void setComp1(circuit*); //call the base class function to set the pointer
      void setComp2(circuit*); //call the base class function to set the pointer
};

#endif /* circuitSeries_h */

