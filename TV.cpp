#include "TV.h"

TV::TV() {
    cout << "TV 생성" << endl;
    size = 20;
}

TV::TV(int size) {
    cout << "TV 생성" << endl;
    this->size = size;
}

void TV::setTV(int size) {
    this->size = size;
}

int TV::getSize() {
    return size;
}
