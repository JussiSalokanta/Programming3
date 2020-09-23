#include <iostream>
#include <string>
#include <stack>

using namespace std;



int main()
{
    char ch;
    string str;
    stack <char> givenText;

    // Get text from user
    cout << "Write something and i will print it out in reverse: ";
    getline(cin, str);

    // Calculating the length of string and push it into stack
    int l = str.length();
    for (int i = 0; i < l; i++) {
        ch = str.at(i);

        givenText.push(ch);

    }

    cout << endl;
    

    // Print from stack untill it is empty.
    while (!givenText.empty())
    {
        cout << givenText.top();
        givenText.pop();
    }
    

    cout << endl << endl;

   

    return 0;


}