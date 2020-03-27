#include <iostream>

int main() {
  int n, temp=0, tempN, f=1, g;
  std::cin>>n;
  
  if (n>0){
    g=n-1;
    for (int i=0; i<n; i++){

        for(int j=0; j<f;j++)
        {
            std::cout << "*";
        }
        for(int j=g; j>0;j--)
        {
            std::cout << ".";
        }
        for(int j=g+1; j>0;j--)
        {
            std::cout << "*";
        }
        for(int j=0; j<f-1;j++)
        {
            std::cout << ".";
        }
        std::cout << "\n";
    f=f+1;
    g=g-1;
    }
  f=1;
  g=n-1;
  for (int i=0; i<n; i++){
        for(int j=g; j>0;j--)
        {
            std::cout << ".";
        }
        for(int j=0; j<f;j++)
        {
            std::cout << "*";
        }
         for(int j=0; j<f-1;j++)
        {
            std::cout << ".";
        }
        for(int j=g; j>=0;j--)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    f=f+1;
    g=g-1;
    }
  }
  
  if (n<0) {
    f=1;
    n=-n;
    g=n-1;
    for (int i=0; i<n; i++){
        
        for(int j=0; j<f-1;j++)
        {
            std::cout << ".";
        }

        for(int j=g+1; j>0;j--)
        {
            std::cout << "*";
        }
        for(int j=g; j>0;j--)
        {
            std::cout << ".";
        }
        for(int j=0; j<f;j++)
        {
            std::cout << "*";
        }

        std::cout << "\n";
    f=f+1;
    g=g-1;
    }
    
    f=1;
    g=n-1;
    for (int i=0; i<n; i++){
        
        for(int j=g+1; j>0;j--)
        {
            std::cout << "*";
        }
        
        for(int j=0; j<f-1;j++)
        {
            std::cout << ".";
        }
        for(int j=0; j<f;j++)
        {
            std::cout << "*";
        }
        for(int j=g; j>0;j--)
        {
            std::cout << ".";
        }
        std::cout << "\n";
    f=f+1;
    g=g-1;
    }
  }
  return 0;
}
//not working