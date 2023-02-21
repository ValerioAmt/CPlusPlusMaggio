#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    int y = 0;
    int i = 0;
    ifstream fileInput("maggio.txt");
    ofstream fileOutput("output.txt");

    string riga;
    while (getline(fileInput, riga))
    {

        if (riga == "")
        {                                          // getline(fileInput, riga)){
          
            cout <<endl << "";
        }
        else if(i<9){
            i++;
            cout << i << "  - " << riga << endl;
        }
        else {
          i++;
            cout << i << " - " << riga << endl;
        }
        
    }

    fileOutput << "Ei fu. Siccome Immobile" << endl;

    fileInput.close();
    fileOutput.close();
}