#include <iostream>

int main()
{
    int t;
    std::cin>>t;
    
    for (int j=0; j<t; j++){
    float n;
    std::cin >> n;
    
    for (int i = sizeof n - 1; i >= 0; --i)
        printf("%02x ", ((const unsigned char*)&n)[i]);
    }
}

//not working