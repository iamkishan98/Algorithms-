#include <iostream>
#include <stack>
using namespace std;
 

bool bracescheck(string str)
{
    // create a stack of characters
    stack<char> Stack;
 
    
    for (char ch : str)
    {
        // if current character is close parenthesis ')'
        if (ch == ')')
        {
            // pop character from the stack
            char top = Stack.top();
            Stack.pop();
 
            int count = 0;
            while (top != '(')
            {
                count++;
                top = Stack.top();
                Stack.pop();
            }
            if(count <= 1) {
                return 1;
            }
        }
 
     
        else
            Stack.push(ch);
    }
 
    // No duplicates found
    return false;
}
 
 
int main()
{
    
    string str = "(((a+(b))+(c+d)))";
 
    if (bracescheck(str))
        return 1;
    else
        return 0;
 
    return 0;
}
