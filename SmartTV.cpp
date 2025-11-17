#include "SmartTV.h"
#include <iostream>
using namespace std;

SmartTV::SmartTV() : WideTV() {
    cout << "SmartTV 생성" << endl;
    ipAddr = "0.0.0.0";
}

SmartTV::SmartTV(string ipAddr, int size) : WideTV(size, true) {
    cout << "SmartTV 생성" << endl;
    this->ipAddr = ipAddr;
}

void SmartTV::setSmartTV(int size, bool videoIn, string ipAddr) {
    setWideTV(size, videoIn);
    this->ipAddr = ipAddr;
}

string SmartTV::getIpAddr() {
    return ipAddr;
}
