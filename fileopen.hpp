#include <fstream>
using namespace std;
void read(string name){
    ifstream file;
    string line;
    file.open(name);
    if(file.is_open()){
        while(getline(file, line)){
            cout << line << endl;
        }
    }
}
void write(string a, string text){
    ofstream to;
    to.open(a, ios::app);
    to << text << endl;
}