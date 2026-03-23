class Solution {
public:
    int kthGrammar(int n, int k) {

        if (n == 1) {
            return 0;
        }

        // midpoint:-
        int midpoint = 1 << (n - 2);
        // k in first half:-
        if (k <= midpoint) {
            return kthGrammar(n - 1, k);
        }
        // else:-
        return kthGrammar(n - 1, k - midpoint) ^ 1;
    }
};