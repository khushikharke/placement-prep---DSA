// gfg
class Solution
{
public:
    // Function returns the second
    // largest elements
    int print2largest(int arr[], int n)
    {
        // code here
        int maxi = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            maxi = max(maxi, arr[i]);
        }
        int secondmaxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > secondmaxi && arr[i] < maxi)
            {
                secondmaxi = arr[i];
            }
        }
        if (secondmaxi == INT_MIN)
            return -1;
        return secondmaxi;
    }
};