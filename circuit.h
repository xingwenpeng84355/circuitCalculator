//
//  circuit.h
//  assignment3
//
//  Created by xingwenpeng on 27/11/2019.
//  Copyright © 2019 xingwenpeng. All rights reserved.
//

#ifndef circuit_h
#define circuit_h
#include <iostream>
#include "register.h"
/**********************************************************************
 this is the abstract base class of circuit
 it has several private attributes
 the most important two is the circuit* comp1 and the circuit* comp2;
 Those two pointers point to the next circuit, the next circuit may be in any type of the derived class, like circuit In single or parallel
 some of the  functions are declared as virtual functions, as i will use polymorphism, the pointer of the base class refering to an object of the derived class will call the coresponding virtual fucntion defined in the coresponding derived class
 **********************************************************************/
class circuit{
public:
    circuit(std::string);
    virtual double getOveralRegistence()=0; //return the resistence of the circuit
    virtual double getOveralVoltage()=0;  //return the voltage of the circuit
    virtual void setOverallVoltage(double); //set the voltage of the circuit
    virtual double getOverallCurrent()=0; //return the current of the circuit
    double GetVoltageofComp1();  //get the voltage of the comp1
    double GetVoltageofComp2();//get the voltage of the comp2
    double GetCurrentofComp1();//get the current of the comp1
    double GetCurrentofComp2();//get the current of the comp2
    double GetResistenceofComp1();//get the resistence of the comp1
    double GetResistenceofComp2();//get the resistence of the comp2
    std::string getLabel();  //return the label
    virtual  circuit* getComp1(); //return the pointer of comp1
    virtual  circuit* getComp2();//return the pointer of comp2
      void setComp1(circuit *); //set the pointer of comp1
      void setComp2(circuit *);//set the pointer of comp2
private:
    std::string label; //to name the circuit
    double overalRegistence;
    double overalVoltage;
    double OveralCurrent;
    circuit* comp1;  //pointer to point the next circuit
    circuit* comp2;   //pointer to point the next circuit
};
#endif /* circuit_h */
