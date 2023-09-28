#include <iostream>
#include <vector>
#include <string>
using namespace std;


int square_digits(int num) {
    int numbers = num;
    vector<int> splitNums;
    for (int x = 0; x<numbers.length()); x++){
        cout << numbers[x] << endl;
    }
    for(int i:splitNums){
        cout << splitNums[i] << endl;
    }


    return 0;
}

int main() {
    square_digits(123);
    return 0;
}
