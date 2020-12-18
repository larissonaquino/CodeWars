#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> solution(const std::string& s)
{
    std::vector<std::string> vx;

    int len = s.size();

    for (int i = 0; i < len; i += 2) {
        std::string pair;
        
        pair.push_back(s[i]);

        if (len % 2 == 0 || (len % 2 != 0 && i != len - 1)) pair.push_back(s[i + 1]);
        else pair.push_back('_');

        vx.push_back(pair);
    }

    return vx;
}

int main()
{
    std::vector<std::string> result = solution("abcef");

    std::cout << "tamanho: " << result.size() << std::endl << std::endl;

    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << std::endl;
    }
    
    system("pause");
}