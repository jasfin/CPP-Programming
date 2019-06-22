#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string s = "Somewhere down the road";
    istringstream ss(s);

    do
    {
        string subs;
        ss >> subs;
        cout << "Substring: " << subs << endl;
    } while (ss);
}
