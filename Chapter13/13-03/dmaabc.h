#ifndef DMAABC_H_
#define DMAABC_H_
#include <iostream>

class absDMA{
    private:
        char* label;
        int rating;

    public:
        absDMA(const char* l = "null", int r  = 0);
        absDMA(const absDMA& rs);
        virtual ~absDMA();
        virtual absDMA& operator=(const absDMA& rs);
        virtual void View() const;
        friend std::ostream& operator<<(std::ostream& os, const absDMA& rs);
};

class baseDMA : public absDMA{
    public:
        baseDMA(const char* l = "null", int r = 0);
        baseDMA(const baseDMA& rs);
        virtual ~baseDMA(){}
        virtual baseDMA& operator=(const baseDMA& rs);
        virtual void View() const;
        friend std::ostream& operator<<(std::ostream& os, const baseDMA& rs);
};

class lacksDMA : public absDMA{
    private:
        enum{COL_LEN = 40};
        char color[COL_LEN];
    
    public:
        lacksDMA(const char* c = "blank", const char* l = "null", int r = 0);
        lacksDMA(const char* c, const lacksDMA& rs);
        virtual ~lacksDMA(){}
        virtual lacksDMA& operator=(const lacksDMA& rs);
        virtual void View() const;
        friend std::ostream& operator<<(std::ostream& os, const lacksDMA& rs);
};

class hasDMA : public absDMA{
    private:
        char* style;

    public:
        hasDMA(const char* s = "none", const char* l = "null", int r = 0);
        hasDMA(const char* s, const hasDMA& rs);
        hasDMA(const hasDMA& rs);
        virtual ~hasDMA();
        hasDMA& operator=(const hasDMA& rs);
        virtual void View() const;
        friend std::ostream& operator<<(std::ostream& os, const hasDMA& rs);
};
#endif