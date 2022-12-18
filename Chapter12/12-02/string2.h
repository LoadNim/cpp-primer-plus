#ifndef STRING2_H_
#define STRING2_H_
#include <iostream>

class String{
    private:
        char* str;
    public:
        String(const char* input);
        String(const String& s);
        String();
        ~String();
        void stringup();
        void stringlow();
        int has(const char target) const;
        void operator=(const char* input);
        void operator=(const String& s);
        friend bool operator==(const String& s1, const String& s2);
        friend String operator+(const String& s1, const String& s2);
        friend String operator+(const char* input, const String& s);
        friend std::ostream& operator<<(std::ostream& os, const String& s);
        friend std::istream& operator>>(std::istream& is, String& s);
};
#endif