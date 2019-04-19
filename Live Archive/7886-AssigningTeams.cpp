#include <iostream>
#include <algorithm>
typedef long long ll;
int main(void)
{
    ll arr[4];
    while(std::cin >> arr[0] >> arr[1] >> arr[2] >> arr[3])
    {
        std::sort(arr, arr+4);
        std::cout << abs((arr[0] + arr[3]) - (arr[1]+ arr[2])) << std::endl;
    }
}