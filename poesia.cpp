#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    int i =0;
    ifstream fileInput("maggio.txt");
    ofstream fileOutput("output.txt");


    string riga;
    while(getline(fileInput, riga))
    {   
        i++;
        cout << i << " - " << riga << endl;
    
    }
     
     fileOutput << "Ei fu. Siccome Immobile" << endl;


     fileInput.close();
     fileOutput.close();
}