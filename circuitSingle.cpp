//
//  circuitSingle.cpp
//  assignment3
//
//  Created by xingwenpeng on 23/11/2019.
//  Copyright © 2019 xingwenpeng. All rights reserved.
//

#include <stdio.h>
#include "circuitSingle.h"
#include "circuit.h"
circuitSingle::circuitSingle(std::string _label):circuit(_label){
    
    
    
}
double circuitSingle::getOveralRegistence(){
    return comp1->gettingRegistence();
    
}
double circuitSingle::getOveralVoltage(){
    return comp1->gettingVoatage();
}
double circuitSingle::getOverallCurrent(){
    return comp1->gettingCurrent();
}


  void circuitSingle::setComp1(registor* tem)
{
    comp1=tem;
    
}
void circuitSingle::setOverallVoltage(double _voltage)
{
    
    comp1->settingVoltage(_voltage);

}
