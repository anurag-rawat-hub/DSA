class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> S;
        int count = 0;

        for (char x : jewels) {
            S.insert(x);
        }

        for (char x : stones) {
            if (S.count(x)) {
                count++;
            }
        }

        return count;
    }
};