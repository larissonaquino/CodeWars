#include <iostream>
#include <vector>
#include <cctype>

size_t duplicateCount(const std::string& in); // helper for tests

size_t duplicateCount(const char* in)
{
    int counter = 0;
    int duplicates = 0;
    std::vector<char> str = {};

    while (*in != '\0') {
        counter++;
        in++;
    }

    in -= counter;

    for (int i = 0; i < counter; i++) {
        char ci = toupper(*(in + i));
        for (int j = i+1; j < counter; j++) {
            if (std::count(str.begin(), str.end(), ci)) continue;
            char cj = toupper(*(in + j));
            if (ci == cj) {
                str.push_back(cj);
                duplicates++;
            } 
        }
    }
    
    return duplicates;
}

int main()
{
    int duplicates = duplicateCount("aAaAJordanaOCatarine");
    std::cout << duplicates << std::endl;
    system("pause");
}