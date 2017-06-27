#include <iostream>
#include <cstring>
#include <sstream>

using namespace std;

#define T_SIZE 1001

char* string_merge(char* S1, char* S2)
{
    int items {0};
    char* result = new char[2*T_SIZE];

    while(true)
    {
        if(*S1 != '\0' && *S2 != '\0')
        {
            result[items] = *S1;
            items++;
            result[items] = *S2;
            items++;
        }
        else
            break;

        S1++;
        S2++;
    }

    result[items] = '\0';

    return result;
}

int main()
{
    int t,n;
    char S1[T_SIZE], S2[T_SIZE], *S;
    cin >> t;
    cin.getline(S1,T_SIZE);

    std::ostringstream oss;
    while(t)
    {
        cin.getline(S1,T_SIZE,' ');
        cin.getline(S2,T_SIZE);

        S = string_merge(S1,S2);

        oss << S << "\n";

        delete[] S;
        t--;
    }

    std::cout << oss.str();

    return 0;
}
