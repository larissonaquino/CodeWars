#include <iostream>
#include <string>

using namespace std;

enum roman {
    I = 1,
    V = 5,
    X = 10,
    L = 50,
    C = 100,
    D = 500,
    M = 1000
};

int getValue(char v) {
    int value = 0;
    if (v == 'I') value = (int)roman::I;
    else if (v == 'V') value = (int)roman::V;
    else if (v == 'X') value = (int)roman::X;
    else if (v == 'L') value = (int)roman::L;
    else if (v == 'C') value = (int)roman::C;
    else if (v == 'D') value = (int)roman::D;
    else if (v == 'M') value = (int)roman::M;

    return value;
}

int solution(string roman) {
    int sum = 0;

    for (int i = 0; i < roman.length(); i++) {
        int currentValue = getValue(roman[i]);

        if (i != roman.length() && currentValue < getValue(roman[i + 1])) {
            sum += getValue(roman[i + 1]) - currentValue;
            i++;
            continue;
        }

        sum += currentValue;
    }

    return sum;
}

int main()
{
    cout << solution("MDCLXVI") << endl;
    system("pause");
}
