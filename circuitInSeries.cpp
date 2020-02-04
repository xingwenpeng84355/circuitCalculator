//
//  circuitInSeries.cpp
//  assignment3
//
//  Created by xingwenpeng on 23/11/2019.
//  Copyright © 2019 xingwenpeng. All rights reserved.
//

#include <stdio.h>
#include "circuitSeries.h"
#include "circuit.h"
double circuitInSeries::getOveralRegistence()
{
    return getComp1()->getOveralRegistence()+getComp2()->getOveralRegistence();
}
double circuitInSeries::getOveralVoltage(){
    
    return getComp1()->getOveralVoltage()+getComp2()->getOveralVoltage();
}
double  circuitInSeries::getOverallCurrent(){
    
    return getComp1()->getOverallCurrent();
}

   
void circuitInSeries::setComp1(circuit* tem)
{
   circuit::setComp1(tem);
    
    
}
void circuitInSeries::setComp2(circuit* tem)
{
    circuit::setComp2(tem);
}
circuitInSeries::circuitInSeries(std::string _label):circuit(_label){

}
void circuitInSeries::setOverallVoltage(double _voltage)
{
    
    getComp1()->setOverallVoltage(_voltage*getComp1()->getOveralRegistence()/(getComp1()->getOveralRegistence()+getComp2()->getOveralRegistence()));
    getComp2()->setOverallVoltage(_voltage*getComp2()->getOveralRegistence()/(getComp1()->getOveralRegistence()+getComp2()->getOveralRegistence()));
    
    
}
