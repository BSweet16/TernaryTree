//
//  Node.cpp
//  CS 315 - Project 2
//
//  Created by Blake Sweet on 2/12/19.
//  Copyright © 2019 Blake Sweet. All rights reserved.
//

#include <stdio.h>
#include "Node.h"

Node::Node(){
    data = -1;
    data2 = -1;
}

Node::Node(int value){
    data = value;
    data2 = -1;
}

Node::Node(int value, int value2){
    data = value;
    data2 = value2;
}

int Node::getData(){
    return data;
}

int Node::getData2(){
    return data2;
}

void Node::setData(int newNumber){
    data = newNumber;
}

void Node::setData2(int newNumber){
    data2 = newNumber;
}
    
// Check how many data points are filled inside the node
int Node::numData(){
    int Answer = 0;
    if (data != -1 && data){Answer++;}
    if (data2 != -1 && data){Answer++;}
    
    return Answer;
}

// Custom swap function
void Node::reOrder(){
    if (data > data2){ // Only performs swap if necessary
        int temp = data;
        data = data2;
        data2 = temp;
    }
}
