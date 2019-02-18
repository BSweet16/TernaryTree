//
//  Tree.cpp
//  CS 315 - Project 2
//
//  Created by Blake Sweet on 2/12/19.
//  Copyright © 2019 Blake Sweet. All rights reserved.
//

#include <stdio.h>
#include "Tree.h"
#include "Node.h"

Tree::Tree(){
    root = new Node();
}


Node* Tree::getRoot(){
    return root;
}

void Tree::setRoot(Node *newRoot){
    root = newRoot;
}

void Tree::insert(Node *node, int value){
    if (node == NULL){ // If starting on a new node, initialize it
        node = new Node();
    }
    
    if (node->numData() == 2){ // Node is full, move to the next node
        if (node->getData2() < value) { // Value goes to right
            if (node->right){
                insert(node->right, value);
            }
            else{
                node->right = new Node(value);
            }
        }
        else if ((node->getData() < value) && (value <= node->getData2())) { // Value goes to middle
            if (node->center){
                insert(node->center, value);
            }
            else{
                node->center = new Node(value);
            }
        }
        else { // Value goes to left (Default)
            if (node->left){
                insert(node->left, value);
            }
            else{
                node->left = new Node(value);
            }
        }
    }
    else if (node->numData() == 1){ // Assign the second child of the node
        node->setData2(value);
        node->reOrder(); // Will only reorder if necessary
    }
    else{ // Insert at current node
        node->setData(value);
    }
}

/*  Print a node in the following format
    If a & b are the values of a node
    (left child) a (middle child) b (right child)
 Steps:
    1- Traverse Left
    2- Visit the root
    3- Traverse the Right
 */
void Tree::print(Node *node) {
	// Base case
	if (node == NULL) {
		return;
	}

	// Handle the cases where a 0 was displayed
	// The compiler displays an empty space in the place of the 0 without this section
	if (node->getData() == 0) {
		cout << '0';
	}
	else if (node->getData2() == 0) {
		cout << " 0";
	}

	// Traverse left
	if (node->left){ 
		cout << '(';
		print(node->left); 
		cout << ')';
	}
    
	// First data point in node
	if (node->getData() && node->getData() != -1) {
		if (node->left) { // cosmetic
			cout << " ";
		}
		cout << node->getData();
	}

	// Traverse center
	if (node->center) { 
		cout << " (";
		print(node->center);
		cout << ')';
	}

	// Second Data point in node
	if (node->getData2() && node->getData2() != -1) {
		cout << " " << node->getData2();
	}

	// Traverse right
	if (node->right) {
		cout << " (";
		print(node->right);
		cout << ')';
	} 
}
