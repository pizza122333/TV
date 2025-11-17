#ifndef SMARTTV_H
#define SMARTTV_H

#include "WideTV.h"
#include <string>
using namespace std;

class SmartTV : public WideTV {
    string ipAddr;
public:
    SmartTV();
    SmartTV(string ipAddr, int size);
    void setSmartTV(int size, bool videoIn, string ipAddr);
    string getIpAddr();
};

#endif
