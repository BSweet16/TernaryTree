//
//  Node.h
//  CS 315 - Project 2
//
//  Created by Blake Sweet on 2/12/19.
//  Copyright © 2019 Blake Sweet. All rights reserved.
//

#ifndef Node_h
#define Node_h
#include <iostream>
using namespace std;

class Node{
public:
    Node();          // Constructor
    Node(int value); // Create a new node with given value
    Node(int value, int value2);    // Predefine both values of the node
    
    // Set functions
    void setData(int newNumber);
    void setData2(int newNumber);
    
    // Get functions
    int getData();
    int getData2();
    
    // Utility functions
    int numData();             // Get the total number of data points for the node
    void reOrder();            // Switch the two data points in the node (ONLY IF NECESSARY)
    
    // Children
    Node *left;
    Node *center;
    Node *right;
private:
    int data;
    int data2;
};

#endif /* Node_h */
