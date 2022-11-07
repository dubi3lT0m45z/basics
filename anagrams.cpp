//Program that checks if 2 given words are anagrams
#include <iostream>
using namespace std;

string sort(string word)
{
    for(int i = 0; i < word.length(); i++)
        for(int j = 0; j < word.length()-1; j++)
            if(word[j] > word[j+1])
                swap(word[j], word[j+1]);

    return word;
}

int main()
{
    string word1, word2;
    
    cout << "Enter 2 words:";
    cin >> word1 >> word2;

    if(sort(word1) == sort(word2))
        cout << "Given words are anagrams";
    else
        cout << "Given words are not anagrams";

    return 0;
}