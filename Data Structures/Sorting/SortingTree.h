#pragma once
#include "../Tournament/NextmaxImproved.h"
class SortingTree :
    public NextmaxImproved
{
public:
    SortingTree();
    ~SortingTree();
protected:
    int getnext(int[], int, int);
    int minval(int[], int);

};

