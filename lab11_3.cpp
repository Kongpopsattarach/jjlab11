#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    double i = 0;
    double s = 0;
    double e = 0;
    ifstream  source;
    string line;
    source.open("score.txt");
    
    while (getline(source,line))
    {
        i++;
        s += stod(line);
        e += pow(stod(line),2);
    }
    cout << "Number of data = " << i << "\n";
    cout << setprecision(3) ;
    cout << "Mean = " << s/i << "\n";
    cout << "Standard deviation = " << sqrt(e/i-pow(s/i,2));
}