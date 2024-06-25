//
//  main.cpp
//  Algo
//
//  Created by 김연호 on 6/25/24.
//

#include <iostream>
#include <stack>

using namespace std;

int main(int argc, const char * argv[]) {
    
    while(true) {
        string input;
        getline(cin, input);

        stack<char> Stack;
        char c;
        bool status = true;

        if (input == ".") break;

        for (int i = 0; i<input.length(); i++) {
            c = input[i];

            if (c == '(' || c == '[') Stack.push(c);
            else if (c == ']') {
                if (!Stack.empty() && Stack.top() == '[') Stack.pop();

                else  {
                    status = false;
                    break;
                }
            }
            else if (c == ')') {
                if (!Stack.empty() && Stack.top() == '(') Stack.pop();

                else  {
                    status = false;
                    break;
                }
            }
        }
        if (status && Stack.empty()) cout << "yes\n";
        else cout << "no\n";
    }

    return 0;
}
