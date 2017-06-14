#include <iostream>
#include <string>
#include <sstream>

void UpdateStream(std::ostringstream& oss, const int count, const char letter)
{
    oss << letter;
    if(count == 2)
        oss << letter;
    else if(count != 1)
        oss << count;
}

void CheckText(const std::string& text, std::ostringstream& oss)
{
    if(text.size() == 1)
    {
        oss << text;
        return;
    }

    int count {1};
    for(int j = 1; j < text.size(); ++j)
    {
        const char currentLetter = text.at(j);
        const char previousLetter = text.at(j - 1);

        if(currentLetter == previousLetter)
            count ++;
        else
        {
            UpdateStream(oss, count, previousLetter);
            count = 1;
        }

        if(j == text.size() - 1)
            UpdateStream(oss, count, currentLetter);
    }

    oss << "\n";
}

int main(int argc, char *argv[])
{
    int textCounter {0};
    std::cin >> textCounter;

    std::string output;
    for(int i = 0; i < textCounter; ++i)
    {
        std::string text;
        std::cin >> text;

        std::ostringstream oss;
        CheckText(text, oss);

        output += oss.str();
    }

    std::cout << output;

    return 0;
}
