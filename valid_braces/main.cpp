#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool valid_braces(string braces)
{
    // valid or not valid?
//    vector<string> splitBraces;
    int openCurly, closedCurly, openSqwig, closedSqwig, openSquare, closedSquare;
    int size = braces.length();
    cout << size << endl;
    for (int x; x<size; x++){
        cout << braces.at(x) << endl;
        switch(braces.at(x)){
        case "{":
            openSqwig++;

        case "}":
            closedSqwig++;

        case "(":
            openCurly++;

        case ")":
            closedCurly++;

        case "[":
            openSquare++;

        case "]":
            closedSquare++;
        }
    }

}

int main()
{
    valid_braces("(){}[]");
    cout << "Hello World!" << endl;
    return 0;
}
