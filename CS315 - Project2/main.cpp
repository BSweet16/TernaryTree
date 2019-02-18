//
//  main.cpp
//  CS 315 - Project 2
//
//  Created by Blake Sweet on 2/3/19.
//  Copyright © 2019 Blake Sweet. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "Tree.h"
using namespace std;

const string DATA_FILE = "data.txt";
const int COLUMN_WIDTH = 8;

int main() {
    Tree *newTree = new Tree;
    int input;
	int counter = 0; // Used to format output only
	int choice = -1;
    
	while (choice != 1 && choice != 2) {
		cout << "Please choose an option from the list below." << '\n'
			<< "(1) - Automatically read numbers from 'data.txt' file" << '\n'
			<< "(2) - Manually enter numbers" << '\n'
			<< "=> ";
		cin >> choice;
		cout << '\n';

		if (choice == 1) { // Read in data.txt
			ifstream myfile;
			myfile.open(DATA_FILE);
			if (!myfile) { // If the file didnt open
				cout << "Unable to open file." << '\n';
				exit(1);
			}

			cout << "Reading from Data.txt" << '\n';
			while (!myfile.eof()) {
				myfile >> input;
				cout << "Inserting " << input << '\t';
				newTree->insert(newTree->getRoot(), input);

				// Column spacing
				counter++;
				if (counter % COLUMN_WIDTH == 0) {
					cout << '\n';
				}
			}
			myfile.close();

			cout << '\n';
			newTree->print(newTree->getRoot());
			cout << '\n';
		}
		else if (choice == 2) { // Manually enter numbers
			do {
				cout << "Enter a number: ";
				cin >> input;
				if (input != -1) {
					newTree->insert(newTree->getRoot(), input);
					cout << '\n';
				}
			} while (input != -1);

			newTree->print(newTree->getRoot());
			cout << "\n";
		}
		else {
			cout << "Error: " << choice << " is not a valid option. Please choose an option from the given list." << '\n';
		}
	}
    
    system("pause");
    return 0;
}
