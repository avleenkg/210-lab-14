//Avleen Gill - 210 Lab 14

#include <iostream>
#include <iomanip>
using namespace std;

const int W = 15;

class Color {
    private:
    int rhues;
    int bhues;
    int ghues;

    public:
    int getred() const      { return rhues; }
    int getblue() const     { return bhues; }
    int getgreen() const    { return ghues; }
    void setred(int r)      { rhues = r; }   
    void setblue(int b)      { bhues = b; }
    void setgreen(int g)      { ghues = g; }

    void print() {
        cout << setw(15) << "Red hues: " << rhues << endl;
        cout << setw(15) << "Blue hues: " << bhues << endl;
        cout << setw(15) << "Green hues: " << ghues << endl;
    }
};

int main() {
    

}