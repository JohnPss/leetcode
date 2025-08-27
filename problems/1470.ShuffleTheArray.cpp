#include <vector>

/*

So, if n is the given lenght of x and y, we can use the i=0 and i++ to loop though x, and n++ thoght y:


*/

using namespace std;
class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[n + i]);
        }
    }
};