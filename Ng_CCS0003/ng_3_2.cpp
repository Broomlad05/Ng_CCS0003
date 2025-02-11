#include <iostream> 
using namespace std;

int main()
{
    int Number = 10;       
    char Letter = 'a';     
    bool Result = true;    
    float Float = 3.14;    

    cout << "Variable Name: Number, Value: " << Number << endl;     
    cout << "Variable Name: Letter, Value: " << Letter << endl;     
    cout << "Variable Name: Result, Value: " << (Result ? "true" : "false") << endl; 
    cout << "Variable Name: Float, Value: " << Float << endl;        

    return 0; 
}
