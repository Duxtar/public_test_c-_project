#include <iostream>
#include <list>
#include <string>
#include <cstdlib>
#include <ctime>
#include <set>
#include <cassert>
using namespace std;

void starter(int &path){
    int i=0;
    cout << "1.School" << endl
    << "2.Work" << endl
    << "3.Toilet" << endl;
    cin >> path;
    while (path==0) {
        i++;
        if (path==0 and i==1) {
            cout << "The number, input a number";
        }
        if (path==0 and i==2) {
            cout << "I don't understand, are you dumb or something?";
        }
    }
}

int main() {
    string mainname;
    int path=0;
    string asses[]={
        "ass","a$$","ASS","Ass","aSS","a55","assy","Assy","asshole","Asshole","a55hole","asses","butthole","Butthole","Asslover","asslover","assfan","Assfan","assesfor100","Assesfor100","assholeeater","Asseater","asseater","Assholeeater"

    };
    string dicks[]={
        "Dick","dick","shaft","d1ck","D1ck","lovedicks","dicklover","dickslover","BBC","Bigblackcocks","penis","Penis","dicksucker","cock","Cock","cocks"

    };
    cout << "Welcome to the game of edgelends, to start the the game you must choose a name for yourself" << endl;
    cout << "Enter your name(with no spaces pls): ";
    cin >> mainname;
    cout << endl;

    for (int i = 0; i <= size(asses); i++ ){
        if (asses[i]==mainname){
            cout << "Well, that's an ass name i guess" << endl;
            break;
        }
        if (dicks[i]==mainname){
            cout << (dicks[i]==mainname) << mainname;
            cout << "Well, you can just say that your name is Dick" << endl;
            break;
        }
    }
    cout << "Choose your starting point:" << endl;
    starter(path);
    cout << path;
}


