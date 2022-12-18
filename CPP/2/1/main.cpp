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
                count += 1;
               switch(line[0]) {
                   case 'A':
                       count += 3;
                       break;
                   case 'B':
                       break;
                   case 'C':
                       count += 6;
                       break;
               }
               break;
            case 'Y':
                count += 2;
                switch(line[0]) {
                    case 'A':
                        count += 6;
                        break;
                    case 'B':
                        count += 3;
                        break;
                    case 'C':
                        break;
                }
                break;
            case 'Z':
                count += 3;
                switch(line[0]) {
                    case 'A':
                        break;
                    case 'B':
                        count += 6;
                        break;
                    case 'C':
                        count += 3;
                        break;
                }
                break;
        }
    }

    input.close();

    cout << count;

    return 0;
};