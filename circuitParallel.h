//
//  circuitParallel.h
//  assignment3
//
//  Created by xingwenpeng on 27/11/2019.
//  Copyright © 2019 xingwenpeng. All rights reserved.
//

#ifndef circuitParallel_h
#define circuitParallel_h
#include "circuit.h"
#include <iostream>


class circuitInParallel: public circuit{  //derived from the abbstract base class
    

public:
    circuitInParallel(std::string); //constructor
    
    virtual double getOveralRegistence(); //return the overal resistence of the circuit
    virtual double getOveralVoltage();//return the overal voltage of the circuit
    virtual double getOverallCurrent();//return the overal current of the circuit
    virtual void setOverallVoltage(double); //set the overall voltage
   
    void setComp1(circuit*); //call the base class function to set the pointer
   void setComp2(circuit*);  //call the base class function to set the pointer
};
#endif /* circuitParallel_h */
