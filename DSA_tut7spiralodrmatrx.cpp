#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {   
        vector<int> *vect = new vector<int>();
        vector<int> vec;
        int m = matrix.size();
        int n = matrix[0].size();
        int sr = 0, er = 0, sc = 0, ec = 0;
        int count = 0;
        while (sr <= er && sc <= ec)
        {
            for (int i = sc; i < ec; i++)
            {
                vec.push_back(matrix[sr][i]);
            }
            sr++;
            if (count == m * n)
                return vec;
            for (int i = sr; i <= er; i++)
            {
                vec.push_back(matrix[sr][i]);
            }
            ec--;
            if (count == m * n)
                return vec;
            for (int i = ec; i >= sc; i--)
            {
                vec.push_back(matrix[sr][i]);
            }
            er--;
            if (count == m * n)
                return vec;
            for (int i = er; i >= sr; i--)
            {
                vec.push_back(matrix[sr][i]);
            }
            sc++;
            if (count == m * n)
                return vec;
        }
        return vec;
    }
};


