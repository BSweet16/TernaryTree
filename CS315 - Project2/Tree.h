//
//  Tree.h
//  CS 315 - Project 2
//
//  Created by Blake Sweet on 2/12/19.
//  Copyright © 2019 Blake Sweet. All rights reserved.
//

#define Tree_h
#include <iostream>
#include "Node.h"
using namespace std;

class Tree{
public:
    Tree();
    Node* getRoot();
    void setRoot(Node *newRoot);
    void insert(Node *node, int value);     // Insert data at a specific location
    void print(Node *node);
    
private:
    Node *root;
};
