#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int maximizingXor(int l, int r)
{
    std::vector<int> myResult{};
    for (auto i = l; i <= r; i++)
    {        
        for (auto j = l; j <= r; j++)
        {
            myResult.push_back(i ^ j);
        }
    }

    std::sort(myResult.begin(), myResult.end(), std::greater<int>());
    return myResult.front();
}

int main()
{    
    std::cout << "getMxValue: " << maximizingXor(11, 12) << std::endl;
    std::cout << "getMxValue: " << maximizingXor(10, 15) << std::endl;
    return 0;
}

