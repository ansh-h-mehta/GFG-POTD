//  https://www.geeksforgeeks.org/problems/validate-an-ip-address-1587115621/1

class solution
{
    int isValid(string str)
    {
        int n = str.length();
        int count = 1;
        string temp = "";

        for (int i = 0; i < n; i++)
        {
            if (str[i] == '.')
            {
                count++;
                if (temp.empty())
                {
                    return 0;
                }
                int check = stoi(temp); // string into int
                if (check > 255 || temp.length() > 3 || (temp.length() > 1 && temp[0] == '0'))
                {
                    return 0;
                }
                else
                    temp = "";
            }
            else
            {
                temp.push_back(str[i]);
            }
        }
        if (!temp.empty())
        {
            int check = stoi(temp); // string into int
            if (check > 255 || temp.length() > 3 || (temp.length() > 1 && temp[0] == '0'))
            {
                return 0;
            }
        }
        if (count != 4)
            return 0;
        return 1;
    }
};