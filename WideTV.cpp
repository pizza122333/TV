#include "WideTV.h"

WideTV::WideTV() : TV() {
    cout << "WideTV 생성" << endl;
    videoIn = true;
}

WideTV::WideTV(int size, bool videoIn) : TV(size) {
    cout << "WideTV 생성" << endl;
    this->videoIn = videoIn;
}

void WideTV::setWideTV(int size, bool videoIn) {
    setTV(size);       // TV 멤버 설정
    this->videoIn = videoIn;
}

bool WideTV::getVideoIn() {
    return videoIn;
}
