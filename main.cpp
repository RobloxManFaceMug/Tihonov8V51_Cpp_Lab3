#include <iostream>
#include <vector>
#include <string>
#include "acronym"
#include "IsPalindrome"
#include "Scrabble"

int main(){
    std::string s = "laser";
    std::vector<std::string> words = {"laser", "amplification", "stimulated", "emission", "radiation"};
    if (IsAcronym(s, words)) {
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

    std::vector<std::string> s3 = {"i", "beloath", "microsoft", "excel"};
    std::cout << "These words would normally get you " << ScrabbleScore(s3) << " point(s) in Scrabble" << std::endl;
}
