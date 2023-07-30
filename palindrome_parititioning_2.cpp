/*
    Time complexity: O(n ^ 2)
    Space complexity: O(n ^ 2)

    Where 'n' is the length of the string.
*/

int palindromePartitioning(string str)
{
    // Get the length of the string
    int n = str.size();

    /* 
        isPalindrome[i][j] = true if substring str[i..j] is  palindrome, else false
        cuts[i][j] is 0 if isPalindrome[i][j] is true
    */

    int cuts[n];
    bool isPalindrome[n][n];

    int i, j, k, l;  // different looping variables

    // Every substring of length 1 is a palindrome
    for (i = 0; i < n; i++)
    {
        isPalindrome[i][i] = true;
    }

    /* 
        l is substring length. Build the solution in bottom up manner by
        considering all substrings of length starting from 2 to n.
    */
    for (l = 2; l <= n; l++)
    {
        // For substring of length l, set different possible starting indexes
        for (i = 0; i < n - l + 1; i++)
        {
            j = i + l - 1;  // Set ending index

            /*
                If l is 2, then we just need to compare two characters. Else need
                to check two corner characters and value of isPalindrome[i + 1][j - 1]
            */
            if (l == 2)
            {
                isPalindrome[i][j] = (str[i] == str[j]);
            }
            else
            {
                isPalindrome[i][j] = (str[i] == str[j]) && isPalindrome[i + 1][j - 1];
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        if (isPalindrome[0][i] == true)
        {
            cuts[i] = 0;
        }
        else
        {
            cuts[i] = INT_MAX;
            for (j = 0; j < i; j++)
            {
                if (isPalindrome[j + 1][i] == true && 1 + cuts[j] < cuts[i]) cuts[i] = 1 + cuts[j];
            }
        }
    }

    // Return the min cut value for complete string. i.e., str[0..n-1]
    return cuts[n - 1];
}