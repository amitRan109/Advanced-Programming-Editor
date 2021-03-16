#include <iterator>
#include <vector>
#include <iostream>

#pragma once

using namespace std;

class Document{
    vector<string> data;
    vector<string>::iterator it;
    public:
    Document(vector<string> v):data(v), it(v.begin()){}
    void plus(int num);
    void minus(int num);
    void dollar();
    void num(int num);
    void a(vector<string> text);
    void i(vector<string> text);
    void c(vector<string> text);
    void d();
    void slash(string text);
    void j();
    void s(string old_text, string new_text);
    // void w(File file);
    void insertText(vector<string> text);
};