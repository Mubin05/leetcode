class Solution {
public:
    vector<string> splitWords(const string& sentence) {
    vector<string> words;
    stringstream ss(sentence); // Create a stringstream object
    string word;
    while (ss >> word) { // Extract words separated by spaces
        words.push_back(word);
    }
    return words;
}
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string, int> wordCount; // Map to store the frequency of each word
    vector<string> result;

    // Split both sentences into words
    vector<string> words1 = splitWords(s1);
    vector<string> words2 = splitWords(s2);

    // Count frequencies of words in both sentences
    for (const string& word : words1) {
        wordCount[word]++;
    }
    for (const string& word : words2) {
        wordCount[word]++;
    }

    // Find words that occur exactly once in the combined sentences
    for (const auto& pair : wordCount) {
        if (pair.second == 1) { // Word appears exactly once
            result.push_back(pair.first);
        }
    }

    return result;
    }
};