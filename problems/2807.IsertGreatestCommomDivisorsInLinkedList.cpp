struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int GCD(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

class Solution
{
public:
    ListNode *insertGreatestCommonDivisors(ListNode *head)
    {
        ListNode *curr = head;

        while (curr && curr->next)
        {
            int gcdValue = GCD(curr->val, curr->next->val);
            ListNode *newNode = new ListNode(gcdValue);
            newNode->next = curr->next;
            curr->next = newNode;
            curr = newNode->next;
        }
        return head;
    }
};
