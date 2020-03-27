#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    
    std::string opcja;
    std::cin>>opcja;
    
    std::string wiadomosc;
    std::vector<int> klucz;
    int kluczInt;
    std::cin >> wiadomosc;
    std::cin >> kluczInt;
        
        while (kluczInt > 0) {
    int digit = kluczInt % 10;
    kluczInt = kluczInt/10;
    klucz.push_back(digit);
    }
     std::reverse(klucz.begin(),klucz.end());
    
    if (opcja=="SZYFRUJ") {

    for(int i=0, j=0; i< wiadomosc.size(); i++, j++){
     
     if (j>klucz.size()-1){
        j=0;
     }
     wiadomosc[i]=char(int(wiadomosc[i])+klucz[j]-65)%26+65;
    }
    
    for (auto i: wiadomosc)
        std::cout << i;
    }
    
    if(opcja=="DESZYFRUJ"){
        
            for(int i=0, j=0; i< wiadomosc.size(); i++, j++){
     
     if (j>klucz.size()-1){
        j=0;
     }
     if(char(int(wiadomosc[i])-klucz[j]-65)>0)
     wiadomosc[i]=char(int(wiadomosc[i])-klucz[j]-65)%26+65;
     else
     wiadomosc[i]=char(int(wiadomosc[i])-klucz[j]-65+26)%26+65;
    }
    
    for (auto i: wiadomosc)
        std::cout << i;
    }
}

//accepted 0 pkt