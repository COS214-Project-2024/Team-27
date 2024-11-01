#include "Government.h"


void Government::collectCitizenTax() {

   int i=1;
   int j=1;

 for (Citizen citizen : citizens) {
  
   if(citizen.getEmploymentStatus() && citizen.getincome()>=3000){
    double tax= citizen.getincome() * citizenTaxRate;
    CTotalTax+=tax;
          std::cout <<"( "<< i++<< ") Collected " << tax << " from citizen." << std::endl;
   }
   else{
    ///cout user does not qualiy to pay tax
   }
       
 }
 }
void Government::collectBuildingTax(){

}
 void Government::collectCityTax(){
    
 collectCitizenTax();
    collectBuildingTax();
    std::cout << "City tax collection complete." << std::endl;
 }
