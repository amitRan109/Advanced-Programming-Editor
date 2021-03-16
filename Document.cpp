#include "Document.h"
#include <fstream>
#include <iostream>
using namespace std;

void Document::init(vector<string> v){
    data = v; it = v.begin();
}

void Document::plus(int num) {
    it += num;
}
void Document::minus(int num){
    it -= num;
}
void Document::dollar(){
    it = --data.end();
}
void Document::num(int num){
    it = data.begin() + (num-1);
}

void Document::a(vector<string> text){
    insertText(text);
}
void Document::i(vector<string> text){
    it--;
    insertText(text);
}
void Document::c(vector<string> text){
    data.erase(it);
    insertText(text);
}
void Document::d(){data.erase(it);}
void Document::slash(string text){
    vector<string>::iterator cit = it++;
    while(it != data.end()){
        if(it->find(text)!= -1) break;
        it++;
        if(it == data.end()) it = data.begin();
        if(it == cit) break;
    }
}
void Document::j(){
    vector<string>::iterator cit = it++;
    *cit += *it;
    data.erase(it);
}
void Document::s(string old_text,string new_text){
    int idx = it->find_first_of(old_text);
    it->replace(idx, old_text.size(),new_text);
}
void Document::w(string fileName){
    ofstream file(fileName);
    ostream_iterator<string> file_it(file,"\n");
    copy(data.begin(), data.end(), file_it);
}
void Document::insertText(vector<string> text){
    for(int i=0; i<text.size();i++){
        data.insert(it++,text[i]);   
    }
}