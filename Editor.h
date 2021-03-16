#include "Document.h"
#include <vector>
#include <string>
#include <fstream>
#include <stdio.h>
#include <iostream>
#pragma once

using namespace std;

class Editor{
    public:
    Document d;
    Editor(){
        vector<string> v = {};
        d.init(v);
    }
    Editor(string fileName){
        ifstream file(fileName);
        if(!file) cout << "there is a problem with the file" << endl;
        vector<string> v;
        for(string line; getline(file,line);){
            v.push_back(line);
        }
        d.init(v);
        file.close();
    }
    void loop();
};