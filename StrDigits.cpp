#include "StrDigits.h"
#include <cstring>
#include <iostream>

using namespace std;

    StrDigits::StrDigits(){
        
    }
    
    StrDigits::StrDigits (char * str){
        len = strlen(str);
        this->str = new char[len];
        for (int i = 0; i < len; i++)
            this->str[i] = str[i];
    }
    
    StrDigits::StrDigits(int number){
        len = 0;
        int temp = number;
        while (temp){
            len++;
            temp /= 10;
        }
        str = new char[len];
        int i = len - 1;
        while (i >= 0){
            int num = number % 10;
            str[i--] = (char) num + 48;
            number /= 10;
        }
    }
    
    int StrDigits::number(){
    int num = 0;
    for (int i = 0; i < len; i++)
        num = num * 10 + (int) str[i] - 48;
    return num;
    }
    
    StrDigits StrDigits :: operator + (StrDigits & number){
        StrDigits temp(this->number()+number.number());
        return temp;
    }
    
    void StrDigits :: operator += (StrDigits & number){
        StrDigits temp(number.number() + this->number());
        delete [] this->str;
        this->str = new char[temp.len];
        this->str = temp.str;
    }
    
    bool StrDigits :: operator == (StrDigits & number){
        if (this->number() == number.number())
            return true;
        return false;
    }
    
    bool StrDigits :: operator != (StrDigits & number){
        if (this->number() != number.number())
            return true;
        return false;
    }
    
    bool StrDigits :: operator < (StrDigits & number){
        if (this->number() < number.number())
            return true;
        return false;
    }
    
    bool StrDigits :: operator > (StrDigits & number){
        if (this->number() > number.number())
            return true;
        return false;
    }
    
    bool StrDigits :: operator <= (StrDigits & number){
        if (this->number() <= number.number())
            return true;
        return false;
    }
    
    bool StrDigits :: operator >= (StrDigits & number){
        if (this->number() >= number.number())
            return true;
        return false;
    }