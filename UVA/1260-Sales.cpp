#include <iostream>
int main(void)
{
    int n,N;
    std::cin >> n;
    while(n--)
    {
        std::cin >> N;
        int arr[N];
        int sum=0;
        for(int i=0; i<N; ++i) std::cin >> arr[i];
        for(int i=1; i<N; ++i)
            for(int j=i-1; j>=0; --j)
                if(arr[j] <= arr[i]) ++sum;
        std::cout << sum << std::endl;
    }

}