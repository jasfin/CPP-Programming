/*An efficient solution is to use Euclidean algorithm which is the main algorithm used for this purpose. 
The idea is, GCD of two numbers doesn’t change if smaller number is subtracted from a bigger number.
 */

#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    
    while(n1 != n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }

    cout << "HCF = " << n1;
    return 0;
}
