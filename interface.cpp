//
//  interface.cpp
//  assignment3
//
//  Created by xingwenpeng on 23/11/2019.
//  Copyright © 2019 xingwenpeng. All rights reserved.
//

#include <stdio.h>
#include "interface.h"
/**************************************************************************************************************
 int interface(circuit * p).
 Return: It will return a number to the main function, to inform the main function  if the user input 10 to exit or not.
 Parameter: it needs a points in the type of circuit.
 Function:
    It shows the menu that the user can look it to input.
    every time the user input the number, it will execute the coresponding  item. and reshows the menu again.
    But it is advised that  the user should input the circuit number first, otherwise, it will show  information to the user to prompt the user to input the circuit number first.
 ***********************************************************************************************************/

int interface(circuit * p){
    static int choiceOfCircuit=0;   //to store the value of choice of the user
    double voltage=0;  // to store the voltage applied to the circuit
    int choice;
    do{
        std::cout<<"***********************************************************\n"
        "1. Choose Circuit 1 or Circuit 2\n"<<
        "2. Get a string representing the circuit\n"<<
        "3. Apply an overall voltage to the circuit\n"<<
        "4. Get resistance of the circuit\n"<<
        "5. Get resistance of component 1 or component 2 of the circuit\n"<<
        "6. Get voltage across the overall circuit\n"<<
        "7. Get voltage across component 1 or component 2 of the circuit\n"<<
        "8. Get current through the overall circuit\n"<<
        "9. Get current through component 1 or component 2 of the circuit\n"<<
        "10. Exit the application\n"<<
        "***********************************************************"<<std::endl;
        std::cin>>choice;
        
        switch(choice){
                
            case 1:
                do{
                       std::cout<<"please Choose Circuit 1 or Circuit 2(just input the number 1 or 2)"<<std::endl;
                       std::cin>>choiceOfCircuit;
                       
                   }while(choiceOfCircuit!=1&choiceOfCircuit!=2); // if the user input the wrong circuit number, informthem to input again.
                return choiceOfCircuit; // return the choice to the main function
                break;
            case 2:
                if(choiceOfCircuit!=1&&choiceOfCircuit!=2){
                    std::cout<<"please Choose Circuit 1 or Circuit 2 first"<<std::endl;
                    break;// if the user input the wrong circuit number or haven't done that, informthem to input again.
                }
                if(choiceOfCircuit==1) std::cout<<"(R3 - (R1 | R2)) - (((R4|R5)|R6) - R7)"<<std::endl; //show the circuit in string
                
                if(choiceOfCircuit==2) std::cout<<
                    "(R2 | (R1 - ((R3|R4) | R5))) - ((((R6 | R7) | R8) | R9) – ((R10 - R11) | (R12 - R13)) | R14)"<<std::endl;//show the circuit in string
                
                break;
                
            case 3:
                if(choiceOfCircuit!=1&&choiceOfCircuit!=2){
                    std::cout<<"please Choose Circuit 1 or Circuit 2 first"<<std::endl;
                    break;// if the user input the wrong circuit number or haven't done that, informthem to input again.
                }
                do{
                    std::cout<<"please input an voltage(>=0)"<<std::endl;
                   std:: cin>>voltage;
                }while(voltage<0); //to check if the voltage is bigger than 0
                p->setOverallVoltage(voltage); //call the function to set viltage
                break;
                
            case 4:
                if(choiceOfCircuit!=1&&choiceOfCircuit!=2) std::cout<<"please input the right circuit number 1 or 2 first"<<std::endl;// if the user input the wrong circuit number or haven't done that, informthem to input again.
         
                else std::cout<<p->getOveralRegistence()<<std::endl; //output the resistence
                break;
            case 5:
                if(choiceOfCircuit!=1&&choiceOfCircuit!=2) std::cout<<"please input the right circuit number 1 or 2 first"<<std::endl;// if the user input the wrong circuit number or haven't done that, informthem to input again.
                else{
                    
                    std::cout<<"the resistance of component 1 is "<<p->GetResistenceofComp1()<<std::endl;
                    //output the resistence of component 1
                    std::cout<<"the resistance of component 2 is "<<p->GetResistenceofComp2()<<std::endl;;}
                //output the resistence of component 2
                break;
            case 6:
                if(choiceOfCircuit!=1&&choiceOfCircuit!=2) std::cout<<"please input the right circuit number 1 or 2 first"<<std::endl;// if the user input the wrong circuit number or haven't done that, informthem to input again.
                else{
                    std::cout<<" voltage across the overall circuit:"<<p->getOveralVoltage()<<std::endl;
                    //output the voltage
                }
                break;
            case 7:
                if(choiceOfCircuit!=1&&choiceOfCircuit!=2) std::cout<<"please input the right circuit number 1 or 2 first"<<std::endl;// if the user input the wrong circuit number or haven't done that, informthem to input again.
                else{
                    std::cout<<"the Voltage of component 1 is "<<p->GetVoltageofComp1()<<std::endl;
                     //output the voltage of component 1
                    std::cout<<"the Voltage of component 2 is "<<p->GetVoltageofComp2()<<std::endl;
                     //output the voltage of component 2
                }
                break;
            case 8:
                if(choiceOfCircuit!=1&&choiceOfCircuit!=2) std::cout<<"please input the right circuit number 1 or 2 first"<<std::endl;// if the user input the wrong circuit number or haven't done that, informthem to input again.
                else{
                    
                    std::cout<<"  curret across the overall circuit:"<<p->getOverallCurrent()<<std::endl;
                       //output the current
                }
                break;
            case 9:
                if(choiceOfCircuit!=1&&choiceOfCircuit!=2) std::cout<<"please input the right circuit number 1 or 2 first"<<std::endl;// if the user input the wrong circuit number or haven't done that, informthem to input again.
                else{
                    std::cout<<"the current of component 1 is "<<p->GetCurrentofComp1()<<std::endl;
                    //output the current of component 1
                    std::cout<<"the current of component 2 is "<<p->GetCurrentofComp2()<<std::endl;
                      //output the current of component 2
                }
                break;
            case 10: return -1; // this will be returned to the main function to terminate the program
            default: std::cout<<"please input the right number"<<std::endl;
                // request the user to input the right choice
        }
    }while(choice!=10);
    return -1;  // this will be returned to the main function to terminate the program
}
