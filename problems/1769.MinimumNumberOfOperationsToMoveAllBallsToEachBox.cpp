#include <vector>
#include <string>
#include <iostream>

using namespace std;

/*

Can be done through traversal, I'm gonna look at that later.


*/

class Solution
{
public:
    vector<int> minOperations(string boxes)
    {
        vector<int> answer;
        for (int i = 0; i < boxes.length(); i++)
        {
            int x = 0;
            for (int j = 0; j < boxes.length(); j++)
            {
                if (i != j && boxes[j] == '1')
                {
                    x += abs(i - j);
                }
            }
            answer.push_back(x);
        }
        return answer;
    }
};

int main()
{
    Solution solution;

    vector<int> result = solution.minOperations("110");
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
        if (i < result.size() - 1)
            cout << " ";
    }
    cout << endl;
}