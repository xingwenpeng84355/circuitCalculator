//
//  analyser.cpp
//  assignment3
//
//  Created by xingwenpeng on 23/11/2019.
//  Copyright © 2019 xingwenpeng. All rights reserved.
//

#include <stdio.h>

#include "analyser.h"
/**************************************************************************************************************
circuitInSeries analyser( int _choiceOfCircuit)
Return: It will return an object of the circuit in series.
Parameter: it needs a value passing the choice of the circuit
Function:
   It creates many different type of objects of the circuit, like circuit in series, circuit in parallel, and circuit in single.
   Becaus we need those objects outside this function , so all the objects are static.
   They would be accessed by a pointer in the type of circuit* in the function interface
***********************************************************************************************************/

circuitInSeries analyser( int _choiceOfCircuit){
    
    static  registor r1("R1",50),r2("R2",25), r3("R3",30), r4("R4",150), r5("R5",75), r6("R6",100), r7("R7",40),r8("R8",60),r9("R9",50),r10("R10",20),r11("R11",40), r12("R12",30), r13("R13",70), r14("R14",80);
    //create objects of the resisters
    static circuitInSeries C1("C1");  // (R3 - (R1 | R2)) - (((R4|R5)|R6) - R7)
    static  circuitInSeries C11("C11");// (R3 - (R1 | R2))
    static circuitInSeries C12("C12"); // (((R4|R5)|R6) - R7)
    static circuitSingle C111("C111");// will point to R3
    static  circuitInParallel C112("C112");// (R1 | R2)
    static  circuitSingle C1121("C1121");// will point to R1
    static  circuitSingle C1122("C1122");// will point to R2
    static  circuitInParallel C121("C121"); // ((R4|R5)|R6)
    static  circuitSingle C122("C122");// will point to R7
    static  circuitInParallel C1211("C1211"); //(R4|R5)
    static  circuitSingle C12111("C12111");// will point to R4
    static  circuitSingle C12112("C12112");// will point to R5
    static   circuitSingle C12123("C12123");// will point to R6
    C1.setComp1(&C11);//comp1 point to (R3 - (R1 | R2))
    C1.setComp2(&C12);//comp2 point to (((R4|R5)|R6) - R7)
    C11.setComp1(&C111); //comp1 point to C111 which will point to R3
    C111.setComp1(&r3);//comp1 point to R3
    C11.setComp2(&C112); // comp2 point to (R1 | R2)
    C112.setComp1(&C1121); //comp1 point to C1121 which will point to R1
    C112.setComp2(&C1122);//comp2 point to C1122 which will point to R2
    C1121.setComp1(&r1); //point to R1
    C1122.setComp1(&r2);//point to R2
    C12.setComp1(&C121);// comp1 point to ((R4|R5)|R6)
    C12.setComp2(&C122);//comp2 point to C122 which will point to R7
    C122.setComp1(&r7); // point to R7
    C121.setComp1(&C1211); // comp1 point to (R4|R5)
    C121.setComp2(&C12123); //comp2 point to C12123 which will point to R6
    C1211.setComp1(&C12111); //comp1 point to C12111 which will point to R4
    C1211.setComp2(&C12112); //comp2 point to C12112 which will point to R5
    C12111.setComp1(&r4); //Comp1 point to R4
    C12112.setComp1(&r5);//Comp1 point to R5
    C12123.setComp1(&r6);//Comp1 point to R6
    static   circuitInSeries C2("C2");// (R2 | (R1 - ((R3|R4) | R5))) - ((((R6 | R7) | R8) | R9) – ((R10 - R11) | (R12 - R13)) | R14)
    static   circuitInSeries C22("C22");
    static   circuitInParallel C21("C21");
    C2.setComp1(&C21);
    C2.setComp2(&C22);
    static   circuitSingle C211("C211");
    C211.setComp1(&r2);
    static  circuitInSeries C212("C212");
    C21.setComp1(&C211);
    C21.setComp2(&C212);
    static  circuitSingle C2121("C2121");
    static  circuitInParallel C2122("C2122");
    C212.setComp1(&C2121);
    C212.setComp2(&C2122);
    C2121.setComp1(&r1);
    static   circuitInParallel C21221("C21221");
    static   circuitSingle C21222("C21222");
    C2122.setComp1(&C21221);
    C2122.setComp2(&C21222);
    C21222.setComp1(&r5);
    static   circuitSingle C212211("C212211");
    C212211.setComp1(&r3);
    static   circuitSingle C212212("C212212");
    C212212.setComp1(&r4);
    C21221.setComp1(&C212211);
    C21221.setComp2(&C212212);
    static   circuitInParallel C221("C221");
    static   circuitInParallel C222("C222");
    static   circuitInParallel C2211("C2211");
    static   circuitInParallel C2212("C2212");
    C22.setComp1(&C221);
    C22.setComp2(&C222);
    C221.setComp1(&C2211);
    C221.setComp2(&C2212);
    static   circuitSingle C22111("C22111");
    C2211.setComp1(&C22111);
    static   circuitSingle C22112("C22112");
    C2211.setComp2(&C22112);
    C22111.setComp1(&r6);
    C22112.setComp1(&r7);
    static   circuitSingle C22121("C22121");
    static   circuitSingle C22122("C22122");
    C2212.setComp1(&C22121);
    C2212.setComp2(&C22122);
    C22121.setComp1(&r8);
    C22122.setComp1(&r9);
    static  circuitInParallel C2221("C2221");
    static  circuitSingle C2222("C2222");
    C222.setComp1(&C2221);
    C222.setComp2(&C2222);
    C2222.setComp1(&r14);
    static  circuitInSeries C22211("C22211");
    static  circuitInSeries C22212("C22212");
    C2221.setComp1(&C22211);
    C2221.setComp2(&C22212);
    static  circuitSingle C222111("C222111");
    static  circuitSingle C222112("C222112");
    static  circuitSingle C222121("C222121");
    static  circuitSingle C222122("C222122");
    C22211.setComp1(&C222111);
    C22211.setComp2(&C222112);
    C22212.setComp1(&C222121);
    C22212.setComp2(&C222122);
    C222111.setComp1(&r10);
    C222112.setComp1(&r11);
    C222121.setComp1(&r12);
    C222122.setComp1(&r13);
    if(_choiceOfCircuit==1) return C1;
    //if user choose to show circuit 1, we return the object C1
    else return C2;//if user choose to show circuit 2, we return the object C2
}

