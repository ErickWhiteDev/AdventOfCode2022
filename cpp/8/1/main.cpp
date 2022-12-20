//
// Created by erick on 12/17/2022.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {

    ifstream input("input.txt");

    int width = 0;
    int height = 0;

    string inputLine;

    vector<int> compare;

    while(getline(input, inputLine)) {
        if (!width) {
            width = inputLine.size();
        }
        height++;
    }

    input.close();
    inputLine.clear();

    input.open("input.txt");

    int treeArray[height + 2][width + 2];
    int visArray[height + 2][width + 2];
    int checkArray[height + 2][width + 2];

    memset(treeArray, 0, sizeof(treeArray));
    memset(visArray, 0, sizeof(visArray));
    memset(checkArray, 0, sizeof(checkArray));

    for (int i = 1; i <= height; i++) {
        getline(input, inputLine);
        for (int j = 1; j <= width; j++) {
            treeArray[i][j] = inputLine[j - 1] - '0';
        }
    }

    input.close();

    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= width; j++) {
            compare.clear();
            compare.push_back(treeArray[i][j]);
            compare.push_back(treeArray[i - 1][j]);
            compare.push_back(treeArray[i + 1][j]);
            compare.push_back(treeArray[i][j - 1]);
            compare.push_back(treeArray[i][j + 1]);
            sort(compare.begin(), compare.end());
            
        }
    }

    return 0;
}