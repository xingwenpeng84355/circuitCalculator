//
//  circuit.cpp
//  assignment3
//
//  Created by xingwenpeng on 23/11/2019.
//  Copyright © 2019 xingwenpeng. All rights reserved.
//

#include <stdio.h>
#include "circuit.h"


double circuit::getOveralRegistence(){
   
    return overalRegistence;
    
}
double circuit::GetVoltageofComp1(){
    
    return comp1->getOveralVoltage();
    
}
double circuit::GetResistenceofComp1()
{
    
    return comp1->getOveralRegistence();
    
}
double circuit::GetResistenceofComp2(){
    
    return comp2->getOveralRegistence();
    
}
   double circuit::GetVoltageofComp2()
{
     return comp2->getOveralVoltage();
    
}
double circuit::GetCurrentofComp1(){
    
    return comp1->getOverallCurrent();
}
   double circuit::GetCurrentofComp2()
{
    return comp2->getOverallCurrent();
}
circuit* circuit::getComp1()
{
    
    return comp1;
    
    
}
   circuit* circuit::getComp2(){
   
   return comp2;
   }
void circuit::setComp1(circuit * tem)
{
    
  comp1=tem;
    
    
}
   void circuit::setComp2(circuit * tem){
   
  comp2=tem;
   }
void circuit::setOverallVoltage(double _overalVoltage){
     
           overalVoltage=_overalVoltage;
           
        
       
    
}

   double circuit::getOverallCurrent(){
       
       return OveralCurrent;
       
   }

std::string circuit::getLabel(){
    return label;
}
circuit::circuit(std::string _label){
    
    label=_label;
    
}
double circuit::getOveralVoltage(){
    
    return overalVoltage;
}



