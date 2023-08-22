#ifndef COMMEN_HPP
#define COMMEN_HPP

#include <iostream>
#include <string>
#include <opencv4/opencv2/opencv.hpp>




class Abc
{
public:
    Abc(){};
    Abc(std::string n)
    {
        init(n);
    };
private:
    void init(std::string name ){
        std::cout << " my name is: "<<name<< std::endl;
    };

};



#endif 