#include <iostream>
#include <string>
int main(void)
{
    int n;
    std::cin >> n;
    int m,f;
    std::string line;
    while(std::getline(std::cin, line))
    {
        m=0;f=0;
        for(int i=0; i<line.length(); i=i+3)
        {
            if(line[i] == 'M') ++m;
            else ++f;
            if(line[i+1] == 'M') ++m;
            else ++f;
        }
        //std::cout << line << "\t" << m << "\t" <<f << std::endl;
        if(m || f) std::cout << (m==f && m>1 && f>1? "LOOP" : "NO LOOP") << std::endl;
    }
}