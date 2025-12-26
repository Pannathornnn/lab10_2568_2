#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdlib>

using namespace std;

int main(){
    ifstream source ;
    source.open("score.txt") ;

    float mean , sd ;
    int num_count = 0;

    string textline;
    float sum = 0.0 , sumxx2 = 0.0;
    while(getline(source , textline))
    {   
        num_count ++ ;
        sum += atof(textline.c_str()) ;
        sumxx2 += pow(atof(textline.c_str()), 2);
    }
    mean = sum / num_count ;
    sd = sqrt(((1.0/num_count) * sumxx2) - pow(mean , 2));
    cout << "Number of data = " << num_count << endl;
    cout << setprecision(3) ;
    cout << "Mean = " << mean << endl ;
    cout << "Standard deviation = " << sd ;
}