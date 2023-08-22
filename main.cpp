#include "commen.hpp"

#define SQUERE(x) x+123123


int main(int argc, char* argv[])
{  
    // Abc a;
    // a = Abc("aaaaa");
    // std::cout << CV_VERSION<< std::endl;
    int a,b;
    a = (3,4);
    b = 3,4;
    std::cout << a<< std::endl;
    std::cout << b<< std::endl;
    int* array = new int (3* sizeof(int));
    // int* array = (int*)malloc(3 * sizeof(int));
    array[0]=1;
    array[1]=12;
    array[2]=123;
    std::cout << array[0]<< std::endl;
    std::cout << array[1]<< std::endl;
    std::cout << array[2]<< std::endl;
    
    
    
    return 0;
} 