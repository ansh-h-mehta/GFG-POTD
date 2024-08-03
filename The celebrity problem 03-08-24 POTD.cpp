// www.geeksforgeeks.org/problems/the-celebrity-problem/1
class Solution
{
public:
    int celebrity(vector<vector<int>> &mat)
    {

        for (int i = 0; i < mat.size(); i++)
        {
            bool flg = true;
            for (int j = 0; j < mat.size(); j++)
                if ((i != j) && ((mat[i][j]) || (!mat[j][i])))
                    flg = false;
            if (flg)
                return i;
        }
        return -1;
    }
};