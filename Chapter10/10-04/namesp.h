#ifndef NAMESP_H_
#define NAMESP_H_

class Sales{
    private:
        static const int QUARTERS = 4;
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    
    public:
        Sales();
        Sales(const double ar[], int n);
        void showSales() const;
};
#endif