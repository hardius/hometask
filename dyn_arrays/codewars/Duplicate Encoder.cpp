#include <string>
std::string duplicate_encoder(const std::string& word)
{
    std::map<char, int> freq;
    std::string converted_word = word;
    for (size_t i = 0; i < word.size(); ++i) {
        ++freq[tolower(word[i])];
    }

    for (size_t i = 0; i < word.size(); ++i) {
        if (freq[tolower(word[i])] > 1) {
            converted_word[i] = ')';
        } 
        else {
            converted_word[i] = '(';
        } 
    }
    return converted_word;

    // for (auto now : freq) std::cout << now.first << ' ' << now.second << std::endl;
}