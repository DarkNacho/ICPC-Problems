#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
bool canAdd(char c)
{
    return c >= 'a' && c <= 'z';
}

int main(void)
{
    std::vector<std::string> dic;
    //std::priority_queue <std::string, std::vector<std::string>, std::greater<std::string>> pq;
    std::string in;
    while(std::cin >> in)
    {
        std::string word = "";
        for(int i =0; i< in.length(); ++i)
        {
            char c = tolower(in[i]);
            if(canAdd(c)) word+= c;
            else if (word != "")
            {
                dic.push_back(word);
                word = "";
            }
        }
         if (word != "")
            dic.push_back(word);
        //std::cout << word << std::endl;
        //pq.push(word);
    }
    sort(dic.begin(), dic.end());
    dic.erase(unique(dic.begin(), dic.end()), dic.end());
    for(int i =0; i<dic.size(); ++i) std::cout << dic[i] << std::endl;
    
    

}