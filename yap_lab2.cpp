#include <iostream>
#include <cmath>

using namespace std;

int double_fact(int n)
{
    int res = 1;

    for (int i = n; i > 0; i-=2)
        res *= i;

    return res;
}
    
float t(float n)
{
    float s1 = 0;
    float s2 = 0;
    for (int k = 0; k < 11; k++){
        float num1 = pow(n, (2 * k + 1));
        float num2 = double_fact(2 * k + 1);
        s1 += (num1 / num2);
    }
        
    for (int k = 0; k < 11; k++){
        float num1 = pow(n, (2 * k));
        float num2 = double_fact(2 * k);
        s2 += (num1 / num2);
    }

    float res = s1 / s2;
    return res;
}
    
float final(float y){
    float n1 = 7 * t(0.25) + 2 * t(1 + y);
    float n2 = 6 - t(pow(y, 2) - 1);
    // cout << n1 << " " << n2 << endl;
    return (n1 / n2);
}
    

int main()
{
    float y;
    cin >> y;

    cout << final(y) << endl;

    return 0;
}