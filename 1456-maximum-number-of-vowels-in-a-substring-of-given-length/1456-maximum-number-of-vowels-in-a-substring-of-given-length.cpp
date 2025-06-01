class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int maxVowels(string s, int k) {
        int maxVowelCount = 0;
        int currCount = 0;

        // Count vowels in the first window
        for (int i = 0; i < k; i++) {
            if (isVowel(s[i])) {
                currCount++;
            }
        }

        maxVowelCount = currCount;

        // Slide the window
        for (int i = k; i < s.length(); i++) {
            if (isVowel(s[i])) currCount++;
            if (isVowel(s[i - k])) currCount--; // remove the char going out of window
            maxVowelCount = max(maxVowelCount, currCount);
        }

        return maxVowelCount;
    }
};
