#include <algorithm>
#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::cout << "Enter the amino acid string: ";
    std::cin >> s;
    std::cout << "\nThe permutations of the given string:\n";

    std::sort(s.begin(), s.end());
    do
    {
        std::cout << s << '\n';
    } while(std::next_permutation(s.begin(), s.end()));
}
