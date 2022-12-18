#include <iostream>
#include <cstring>
#include <cctype>
#include "string2.h"

String::String(const char* input){
    str = new char[strlen(input)+1];
    strcpy(str, input);
}

String::String(const String& s){
    str = new char[strlen(s.str)+1];
    strcpy(str, s.str);
}

String::String(){
    str = new char[1];
    str = nullptr;
}

String::~String(){
    delete []str;
}

void String::stringup(){
    for(int i = 0; i < strlen(str); ++i){
        if(islower(str[i])) str[i] -= 32;
    }
}

void String::stringlow(){
    for(int i = 0; i < strlen(str); ++i){
        if(isupper(str[i])) str[i] += 32;
    }
}

int String::has(const char target) const{
    int count = 0;
    for(int i = 0; i < strlen(str); ++i){
        if(str[i] == target) ++count;
    }
    return count;
}

void String::operator=(const char* input){
    delete []str;
    str = new char[strlen(input)+1];
    strcpy(str, input);
}

void String::operator=(const String& s){
    delete []str;
    str = new char[strlen(s.str)+1];
    strcpy(str, s.str);
}

bool operator==(const String& s1, const String& s2){
    return !strcmp(s1.str, s2.str);
}

String operator+(const String& s1, const String& s2){
    String temp;
    temp.str = new char[strlen(s1.str) + strlen(s2.str) + 1];
    strcpy(temp.str, s1.str);
    strcat(temp.str, s2.str);
    return temp;
}

String operator+(const char* input, const String& s){
    String temp;
    temp.str = new char[strlen(input) + strlen(s.str) + 1];
    strcpy(temp.str, input);
    strcat(temp.str, s.str);
    return temp;
}

std::ostream& operator<<(std::ostream& os, const String& s){
    os<<s.str;
    return os;
}

std::istream& operator>>(std::istream& is, String& s){
    char temp[100];
    is>>temp;
    s.str = new char[strlen(temp) + 1];
    strcpy(s.str, temp);
    return is;
}