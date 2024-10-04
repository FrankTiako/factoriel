#include <iostream>

int main(int argc,char** argv){
    int a;
    int i;
    int f = 1;
    std::cout << "entrez le nombre a faire le factoriel" << std::endl ;
    do{
      std::cin >> a ;
      if(a < 0){
        std::cout << "Votre nombre doit etre positif";
        std::cin >> a ;
      }
    }while(a < 0);
    for(i = 1; i<=a; i++){
        f = f*i;
    }
    if( a == 0){
        std::cout << "le factoriel de 0 est 1" ;
    }else{
        std::cout <<"le factoriel de "<< a << " est " << f << std::endl;
    }
    return 0;
}

