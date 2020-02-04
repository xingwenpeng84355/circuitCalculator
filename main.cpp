//
//  main.cpp
//  assignment3
//
//  Created by xingwenpeng on 21/11/2019.
//  Copyright © 2019 xingwenpeng. All rights reserved.
//

#include "circuitParallel.h"
#include "circuitSingle.h"
#include "circuit.h"
#include "circuitSeries.h"
#include "analyser.h"
#include "interface.h"
#include <iostream>
using namespace std;
/**********************************************************************
this is the abstract base class of circuit
it has several private attributes
the most important two is the circuit* comp1 and the circuit* comp2;
Those two pointers point to the next circuit, the next circuit may be in the type of the derived class, like circuit In single or parallel
some of the  functions are declared as virtual functions, as i will use polymorphism, the pointer of the base class refering to an object of the derived class will call the coresponding fucntion defined in the coresponding derived class
**********************************************************************/

int main(int argc, const char * argv[]) {
    int count=0;
    int choiceOfCircuit=0;
    do{
        if(count==0) choiceOfCircuit=interface(); //is this is the first time to run, just to let the user input the circuit choice
        circuitInSeries m=analyser(choiceOfCircuit);// create objects of the circuit and return it back to main
        circuit* j=&m;//assign the object of the circuitInSeries to a pointer in the type of abstract base class to achieve polymorphism
        choiceOfCircuit=interface(j);  // run the interface again to let the user explore
        count++; // to memorize the count
        if(choiceOfCircuit==-1)  return EXIT_SUCCESS; // if the user choose to exit, the function interface will return -1 to the variable choiceOfCircuit
    }while(true); // always do this loop untill the user choose to exit by  return EXIT_SUCCESS

    return 0;
}

