#include <iostream>

std::string reverseword(std::string word)
{
    int i = 0, n = word.length(), j = n - 1;
    char temp;

    n = n / 2;
    for (; i < n; ++i)
    {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
        
        --j;
    }

    return word;
}

void reverseword2(std::string &word)
{
    int i = 0, n = word.length(), j = n - 1;
    char temp;

    n = n / 2;
    for (; i < n; ++i)
    {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;

        --j;
    }
}

std::string reversesentence(std::string sentence)
{
    int n = sentence.length(), mark = 0;
    char temp;

    for (int i = 0; ; ++i)
    {
        if (sentence[i] == ' ' || i == n - 1)
        {
            int k = (i == n - 1) ? i : i - 1;
            for (int j = mark; j < mark + (i - mark) / 2; ++j)
            {
                temp = sentence[j];
                sentence[j] = sentence[k];
                sentence[k] = temp;

                k--;
            }
            if (i == n - 1)
            {
                break;
            }
            mark = i + 1;
        }
    }
    return sentence;
}

int main()
{
    std::cout << reverseword("hello") << std::endl;
    std::cout << reversesentence("This is an example!") << std::endl;
}
