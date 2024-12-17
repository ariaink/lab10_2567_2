#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;

int main()

{

        int count = 0;
        float sum = 0;
        string textline ;
        float sum_of_square = 0;
        ifstream source( "score.txt" );
        while (getline(source,textline))
        {
            float num = stof(textline);
                sum += num ;
                sum_of_square += num*num ;
                count++;

        }
        float mean = sum/count;
        float deviation = sqrt(sum_of_square/count-pow(mean,2));

        cout << "Number of data = " << count << "\n";

        cout << setprecision(3);

        cout << "Mean = " << mean << "\n";

        cout << "Standard deviation = " << deviation ;

}