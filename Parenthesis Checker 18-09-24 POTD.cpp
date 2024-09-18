// https://www.geeksforgeeks.org/problems/parenthesis-checker2744/1

class Solution
{
public:
    bool ispar(string x)
    {
        stack<char> s;

        for (char c : x)
        {
            if (c == '{' || c == '(' || c == '[')
            {
                s.push(c);
            }
            else
            {
                if (s.empty())
                {
                    return false;
                }

                char t = s.top();

                if ((c == '}' && t == '{') || (c == ']' && t == '[') || (c == ')' && t == '('))
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        return s.empty();
    }
};