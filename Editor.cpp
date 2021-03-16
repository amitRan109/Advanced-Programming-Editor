#include "Editor.h"
#include <iostream>

void Editor::loop(){
    vector<string> v = {"amit", "mevi", "chen", "inbar"};
    Document d(v);
    d.plus(1); //mevi
    d.minus(1); //amit
    d.plus(2); //inbar
    d.minus(2); //mevi
    d.num(4); //amit
    d.dollar();//inbar

    // for(auto i = v.begin(); i < v.end(); i++){
    //     cout << *i << endl;
    // }
}