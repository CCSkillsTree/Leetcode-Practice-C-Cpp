#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> left;
        for (char c : s)
        {
            if (c == '(' || c == '{' || c == '[')
                left.push(c);
            else
            {
                if (!left.empty() && leftOf(c) == left.top())
                    left.pop();
                else
                    return false;
            }
        }
        return left.empty();
    }

    char leftOf(char c)
    {
        if (c == '}')
            return '{';
        if (c == ')')
            return '(';
        return '[';
    }
};

int main()
{
    Solution solution;
    string s;
    bool result;
    cout << "Input String:" << endl;
    cin >> s;
    s = "()";
    result = solution.isValid(s);
    cout << boolalpha; //使用boolalpha後，以後的bool類型結果都將以true或false形式輸出
    cout << result << '\n';

    return 0;
}