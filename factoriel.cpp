#include <iostream>

int factoriel(int a){
    int i,f=1;
    if(a == 0){
        return 1;
    }else{
        for(i = 1; i<=a; i++){
            f = f*i;
        }
        return f;
    }
}

int main(int argc,char** argv){
    unsigned int a, b;
    std::cout << "entrez le nombre a faire le factoriel" << std::endl ;
    std::cin >> a ;
    b = factoriel(a);
    std::cout << "Le factoriel de ce nombre est :" << b << std::endl ;
}

