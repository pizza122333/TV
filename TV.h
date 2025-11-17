#ifndef TV_H
#define TV_H

#include <iostream>
using namespace std;

class TV {
    int size;
public:
    TV();
    TV(int size);
    void setTV(int size);
    int getSize();
};

#endif
