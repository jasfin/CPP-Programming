// CPP program to demonstrate use of std::map
#include <bits/stdc++.h>
 
int main()
{
    // Ordered map
    std::map<int, int> order;
 
    // Mapping values to keys, here values are stored in sorted order of keys..
    order[5] = 2;
    order[3] = 5;
    order[20] = 100;
    order[1] = 1;
 
    // Iterating the map and printing ordered values
    for (auto i = order.begin(); i != order.end(); i++) {
        std::cout << i->first << " : " << i->second << '\n';
    }
}
