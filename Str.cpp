#include "Str.h"
#include <iostream>
#include <cstring>

using namespace std;
    Str:: Str (){
        len = 0;
    }
    
    Str::Str (char * str){
        len = strlen(str);
        this->str = new char[len];
        for (int i = 0; i < len; i++)
            this->str[i] = str[i];
    }
    
    Str::Str (char symbol){
        str = new char[++len];
        str[len] = symbol;
    }
    
    void Str::show(){
        cout << str << endl;
    }
    
    Str::Str (const Str & obj){
        str = new char (*obj.str);
    }
    
    Str::~Str(){
        delete [] str;
    }
    
    void Str::operator += (const Str & str){
        Str temp;
        temp.len = len + str.len;
        temp.str = new char[temp.len];
        strcpy(temp.str, this->str);
        strcat(temp.str, str.str);
        len = temp.len;
        delete [] this->str;
        for (int i = 0; i < len; i++)
            this->str[i] = temp.str[i];
    }
    
    bool Str::operator == (const Str & str){
        if (this->len == str.len){
            for (int i = 0; i < this->len; i++)
                if (this->str[i] != str.len)
                    return false;
            return true;
        }
        return false;
    }
    
    bool Str::operator < (const Str & str){
        if (strcmp(this->str, str.str) < 0)
            return true;
        return false;
    }
    
    bool Str::operator > (const Str & str){
        if (strcmp(this->str, str.str) > 0)
            return true;
        return false;
    }
    
    bool Str::operator <= (const Str & str){
        if (strcmp(this->str, str.str) <= 0)
            return true;
        return false;
    }
    
    bool Str::operator != (const Str & str){
        if (this->len == str.len){
            for (int i = 0; i < this->len; i++)
                if (this->str[i] == str.len)
                    return false;
            return true;
        }
        return true;
    }
    
    bool Str::operator >= (const Str & str){
        if (strcmp(this->str, str.str) >= 0)
            return true;
        return false;
    }
    
    void Str::operator = (const Str & str){
        len = str.len;
        delete [] this->str;
        this->str = str.str;    
    }
    
    int Str::length(){
        return len;
    }