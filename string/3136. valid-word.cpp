class Solution {
public:
    bool isValid(string word) {
        int n = word.size();
        if (n < 3 || n > 20) {
            return false;
        }

        bool hasVowel = false;
        bool hasConsonant = false;

        for (int i = 0; i < n; i++) {
            char ch = word[i];

            if (!isalnum(ch)) {
                return false;
            }

            if (isalpha(ch)) {
                char lower = tolower(ch);
                if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                    hasVowel = true;
                } else {
                    hasConsonant = true;
                }
            }
        }

        return hasVowel && hasConsonant;
    }
};
