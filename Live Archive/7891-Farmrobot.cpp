#include <iostream>
#include <string>
int main(void)
{
    int n,c,s,com;
    while(std::cin >> n >> c >> s)
    {
        int pos = 1, count = 0;
        if(pos == s) ++count;
        for(int i =0; i<c; ++i)
        {
            std::cin >> com;
            pos += com;
            //verifica extremos
            if(pos > n) pos = 1;
            else if(pos < 1) pos = n;
            if(pos == s) ++count;
        }
        std::cout << count << std::endl;
    }
}