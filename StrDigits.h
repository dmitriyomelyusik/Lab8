#include "Str.h"

class StrDigits: public Str{
public:
    StrDigits();
    StrDigits(char * str);
    StrDigits(int number);
    int number();
    StrDigits operator + (StrDigits & number);
    void operator += (StrDigits & number);
    bool operator == (StrDigits & number);
    bool operator != (StrDigits & number);
    bool operator < (StrDigits & number);
    bool operator > (StrDigits & number);
    bool operator <= (StrDigits & number);
    bool operator >= (StrDigits & number);
};