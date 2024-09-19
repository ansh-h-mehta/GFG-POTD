// https://www.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1

class Solution
{
public:
    string reverseWords(string str)
    {
        // code here
        int n = str.length();
        stack<string> st;
        string temp = "";
        for (int i = 0; i < n; i++)
        {
            int j = i;
            while (str[j] != '.' && j < n)
            {
                temp += str[j];
                j++;
            }
            st.push(temp);
            temp = "";
            i = j;
        }
        string res = "";
        while (!st.empty())
        {
            res += st.top();
            st.pop();
            if (!st.empty())
                res += '.';
        }
        return res;
    }
};