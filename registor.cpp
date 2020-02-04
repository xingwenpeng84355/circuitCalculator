//
//  registor.cpp
//  assignment3
//
//  Created by xingwenpeng on 23/11/2019.
//  Copyright © 2019 xingwenpeng. All rights reserved.
//

#include "register.h"

void registor::settingVoltage(double _voltage){
    
    if(_voltage>=0) {
        voltage=_voltage;
        
        current=(double)voltage/registence;
        
    }
    else  std::cout<<"please input the right voltage(>=0)"<<std::endl;
    
    
    
}
registor::registor(std::string _label,double _registence,double _voltage){
    settingRegistence(_registence);
    settingVoltage(_voltage);
    label=_label;
    
}

double registor::gettingVoatage(){
    
    
    return voltage;
    
}
double registor::gettingCurrent(){
    
    
    return current;
    
}
std::string registor::gettingLabel(){
    
    
    return label;
    
    
}
void registor::settingRegistence(double _registence){
    
    
    if(_registence>0) {
        registence=_registence;
    }
    else  std::cout<<"please input the right registence(>0)"<<std::endl;
    
}
double registor::gettingRegistence(){
    
    
    return registence;
    
}
