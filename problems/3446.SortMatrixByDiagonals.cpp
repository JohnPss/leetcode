#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> sortMatrix(vector<vector<int>> &grid)
    {

        int n = grid.size();

        for (int diff = -(n - 1); diff <= n - 1; diff++)
        {
            vector<int> diagonal;

            for (int i = 0; i < n; i++)
            {
                int j = i - diff;
                if (j >= 0 && j < n)
                {
                    diagonal.push_back(grid[i][j]);
                }
            }

            if (diff >= 0)
            {
                sort(diagonal.begin(), diagonal.end(), greater<int>());
            }
            else
            {
                sort(diagonal.begin(), diagonal.end());
            }

            int k = 0;
            for (int i = 0; i < n; i++)
            {
                int j = i - diff;
                if (j >= 0 && j < n)
                {
                    grid[i][j] = diagonal[k++];
                }
            }
        }
        return grid;
    }
};