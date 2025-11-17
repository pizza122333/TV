#ifndef WIDETV_H
#define WIDETV_H

#include "TV.h"

class WideTV : public TV {
    bool videoIn;
public:
    WideTV();
    WideTV(int size, bool videoIn);
    void setWideTV(int size, bool videoIn);
    bool getVideoIn();
};

#endif
