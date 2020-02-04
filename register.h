//
//  register.h
//  assignment3
//
//  Created by xingwenpeng on 27/11/2019.
//  Copyright © 2019 xingwenpeng. All rights reserved.
//

#ifndef register_h
#define register_h
#include <iostream>




class registor{
public:
    void settingVoltage(double);  //set the voltage
    void settingRegistence(double);//set the resistence
    double gettingVoatage();   //return the voltage
    double gettingCurrent(); //return the current
    std::string gettingLabel(); //return the label
    double gettingRegistence(); //return the resistence
    registor(std::string,double,double=0);//default parameter for the viltage
private:
    double registence;
    std::string label;
    double voltage;
    double current;
};

#endif /* register_h */
