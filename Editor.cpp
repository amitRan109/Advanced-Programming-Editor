#include "Editor.h"
#include <iostream>

void Editor::loop(){
    char c;
    string data;
    while(true){
        cin >> c;
        switch (c) {
            case '+': {
                cin >> data; 
                d.plus(stoi(data));
                break;
            }
            case '-':{
                cin >> data;
                d.minus(stoi(data));
                break;
            }
            case '$':{
                d.dollar();
                break;
            }
            case 'a':{
                cin >> data;    
                vector<string> v;
                while(data != ".") {
                    v.push_back(data);
                    cin >> data;
                    cout << data << "!!!";
                }
                d.a(v);
                break;
            }
            case 'c':{
                cin >> data;    
                vector<string> v;
                while(data != ".") {
                    v.push_back(data);
                    cin >> data;
                }
                d.c(v);
                break;
            }
            case 'i':{
                cin >> data;    
                vector<string> v;
                while(data != ".") {
                    v.push_back(data);
                    cin >> data;
                }
                d.i(v);
                break;
            }
            case 'd':{
                d.d();
                break;
            }
            case '/':{
                cin >> data;
                d.slash(data);
                break;
            }
            case 's':{
                int idx = data.find("/");
                d.s(data.substr(0,idx), data.substr(idx+1, data.size()));
                break;
            }
            case 'j':{
                d.j();
                break;
            }
            case 'w':{
                cin >> data;
                d.w(data);
                break;
            }
            case 'q':{
                exit(0);
                break;
            }
            default:{
                if(isdigit(c)) {
                    d.num(c-'0');
                }
                else cout << "?" << endl;
                break; 
            }
        }
    }

}