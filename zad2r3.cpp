#include <iostream>  
using namespace std;  
const double cale = 12;
const double metry = 0.0254;   
const double kg = 2.2;

int main()  
{  
      
	   
   	cout << "Podaj wzrost w stopach: ";  
    double stopy;  
    cin >> stopy;  
        
    cout << "Podaj wage w funtach: ";  
    double funty;  
    cin >> funty;  
        
    double cal = stopy * cale;  
    double metr = cal * metry;  
    double kilo = funty / kg;  
    double bmi = kilo / (metry * metry);  
        
    cout << "Dla podanych wzrostu oraz wagi BMI wynosi: " << bmi << endl;  
        
    return 0;  
}
 
