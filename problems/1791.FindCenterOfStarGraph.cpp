#include <vector>

using namespace std;

/*
I can guarantee the center node by checking only two edges.
For example: [1,2] and [2,3].

In a star graph, all non-center nodes connect only once (to the center), so they won’t appear in more than one edge.
The only node that appears in multiple edges is the center.
*/

class Solution
{
public:
    int findCenter(vector<vector<int>> &edges)
    {
        if (edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1])
        {
            return edges[0][0];
        }
        return edges[0][1];
    }
};