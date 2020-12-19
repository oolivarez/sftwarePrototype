#include <iostream>
#include <vector>
using namespace std;
bool endP=true;
double hWage{};
 int months {};
 const double hoursW{37.50};
 double weeksM {4.33};
 string employeeN;
vector<string>namesOfEm;
  int i {};
  const char exitB {'x'};
  double h{};
  vector<double>estimateL{};
int main(){
   char exitBot{};
    cout<<"\t Wage calculator\n\n";
   while(endP==true)
        {     
            
            
         
      cout<<"Name of employee:";
       cin>>employeeN;
        
        namesOfEm.push_back((string)employeeN);
     cout<<"Enter the hourly wage and projected timeframe (12 months or less) that is wished to be calculated\n";
      cout<<"wage/hour:";
        cin>>hWage;
          cout<<endl;
           cout<<"Time frame:";
            cin>>months;
              
 if(months<=12&&months>=1){
       double estimateW=static_cast<double>(hWage*hoursW)*(months*weeksM);
      
 estimateL.push_back((double)estimateW);
 }
        else if(months>=13||months<=0){
            cout<<"out of bounderies\n";
             endP=false;
        }
    
      
       cout<<"\t\tpress n for next \t\t\tpress X to finish\n\n";
     cin>>exitBot;
if(exitBot==exitB){
    endP=false;
     cout<<"\t\t\tEMPLOYEE CALCULATIONS\n------------------------------------------------------------------------\n\n";
      cout<<"Employee name\n_____________________________________________________________________________________\n";
 for(int d =0;d< namesOfEm.size();d++)
{
    cout<<namesOfEm[d]<<"|\t\t|";
 }
  cout<<endl; 
    cout<<"------------------------------------------------------------------------------------------------------\n";
    cout<<"Employee salarie $\n__________________________________________________________________________________\n";
 for(int k = 0;k < estimateL.size();k++){
     cout<<estimateL[k]<<"|\t\t|";
 }


}
  else if (exitBot!=exitB){
       i=2;
}
 
 
  

 }
 return 0;
}