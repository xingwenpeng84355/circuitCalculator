//
//  circuitInParallel.cpp
//  assignment3
//
//  Created by xingwenpeng on 23/11/2019.
//  Copyright © 2019 xingwenpeng. All rights reserved.
//

#include <stdio.h>
#include "circuitParallel.h"

double circuitInParallel::getOveralRegistence(){
    
    return getComp1()->getOveralRegistence()*getComp2()->getOveralRegistence()/(getComp1()->getOveralRegistence()+getComp2()->getOveralRegistence());
    // this is the way for the circuit in parallel to calculate the resistence
}
double circuitInParallel::getOveralVoltage(){
    return getComp2()->getOveralVoltage();  
}
double circuitInParallel::getOverallCurrent(){
    return getComp1()->getOverallCurrent()+getComp2()->getOverallCurrent();
}

 
void circuitInParallel::setComp1(circuit* tem)
{
    circuit::setComp1(tem);
    
    
}
void circuitInParallel::setComp2(circuit* tem)
{
     
    circuit::setComp2(tem);
}
circuitInParallel::circuitInParallel(std::string _label):circuit(_label){

}
void circuitInParallel::setOverallVoltage(double _voltage)
{
    
    getComp1()->setOverallVoltage(_voltage);
     getComp2()->setOverallVoltage(_voltage);
}
