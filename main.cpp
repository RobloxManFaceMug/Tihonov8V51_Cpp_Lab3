#include <iostream>
#include <vector>
#include <string>
#include "acronym"
#include "IsPalindrome"
#include "Scrabble2"

int main(){
    std::string s = "laser";
    std::vector<std::string> words1 = {"laser", "amplification", "stimulated", "emission", "radiation"};
    if (IsAcronym(s, words1)) {
        std::cout << s << " is an acronym" << std::endl;
    }
    else {
        std::cout << s << " is NOT an acronym" << std::endl; 
    }

    std::string s2 = "never odd or even";
    if (IsPalindrome(s2)) {
        std::cout << "\"" << s2 << "\"" << " is a palindrome" << std::endl;
    }
    else {
        std::cout << s2 << " is NOT a palindrome" << std::endl; 
    }

    std::vector<std::string> words = {"i", "beloath", "microsoft", "excel"};
    std::vector<char> letters = {'i', 'e', 'l', 'o', 'b', 'x', 'x', 'd', 't', 'h', 'a', 'm', 'c', 's', 'f', 't'};
    std::vector<int> score = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    int result = EvilScrabbleScore(words, letters, score);
    std::cout << "The highest possible word would get you: " << result << " points in Scrabble";
}
