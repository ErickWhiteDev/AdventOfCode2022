//
// Created by erick on 12/6/2022.
//

#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ifstream input("input.txt");

    string line;

    string choices[2];

    int count = 0;

    while (getline(input, line)) {
        choices[0] = line[0]; // Player 1
        choices [1] = line[2]; // Player 2

        // Handle rock-paper-scissors cases
        switch(line[2]) {
            case 'X':
               switch(line[0]) {
                   case 'A':
                       count += 3;
                       break;
                   case 'B':
                       count += 1;
                       break;
                   case 'C':
                       count += 2;
                       break;
               }
               break;
            case 'Y':
                count += 3;
                switch(line[0]) {
                    case 'A':
                        count += 1;
                        break;
                    case 'B':
                        count += 2;
                        break;
                    case 'C':
                        count += 3;
                        break;
                }
                break;
            case 'Z':
                count += 6;
                switch(line[0]) {
                    case 'A':
                        count += 2;
                        break;
                    case 'B':
                        count += 3;
                        break;
                    case 'C':
                        count += 1;
                        break;
                }
                break;
        }
    }

    input.close();

    cout << count;

    return 0;
};