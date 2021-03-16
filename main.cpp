#include "Editor.h"
// #include <stdio.h>

using namespace std;

int main(int argc, char *argv[]){
    if(argc == 2) {
        Editor e(argv[1]);
        e.loop();
    }
    else {
        Editor e;
        e.loop();
    }
}