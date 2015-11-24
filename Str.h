class Str{
protected:
    char * str;
    int len;
public:
    Str ();
    Str (char * str);
    Str (char symbol);
    Str (const Str & obj);
    
    void show();
    virtual void operator += (const Str & str);
    void operator = (const Str & str);
    
    virtual bool operator == (const Str & str);
    virtual bool operator != (const Str & str);
    virtual bool operator > (const Str & str);
    virtual bool operator < (const Str & str);
    virtual bool operator >= (const Str & str);
    virtual bool operator <= (const Str & str);
    
    int length();
    
    ~Str();
};