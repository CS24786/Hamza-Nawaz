#include <iostream>
using namespace std;

 void printMenu();
 void calculateAgg(string ,double ,double ,double );
 void compareMarks(string ,double ,string ,double );

int main() {
printMenu();
    string std1,std2;
    double matricMarksStd1,matricMarksStd2,interMarksStd1,interMarksStd2,ecatMarksStd1,ecatMarksStd2;
      cout<<"Enter your name :";
      cin>>std1;
      cout<<"Enter your Matric marks (/1100) :";
      cin>>matricMarksStd1;
      cout<<"Enter your Inter marks (/570) :";
      cin>>interMarksStd1;
      cout<<"Enter your ECAT marks (/400) :";
      cin>>ecatMarksStd1;
 calculateAgg(std1,matricMarksStd1,interMarksStd1,ecatMarksStd1);
      cout<<"Enter your name :";
      cin>>std2;
      cout<<"Enter your Matric marks (/1100) :";
      cin>>matricMarksStd2;
      cout<<"Enter your Inter marks (/570) :";
      cin>>interMarksStd2;
      cout<<"Enter your ECAT marks (/400) :";
      cin>>ecatMarksStd2;
 calculateAgg(std2,matricMarksStd2,interMarksStd2,ecatMarksStd2);
 compareMarks(std1,ecatMarksStd1,std2,ecatMarksStd2);
 if (matricMarksStd1 + interMarksStd1 + ecatMarksStd1 > matricMarksStd2 + interMarksStd2 + ecatMarksStd2)
 {
    cout<<"Roll no.1 : "<<std1<<endl;
    cout<<"Roll no.2 : "<<std2<<endl;
 }
 else
 {
    cout<<"Roll no.1 :"<<std2<<endl;
    cout<<"Roll no.2 :"<<std1<<endl;
 }

 return 0;
}

 void printMenu(){
 cout<<"                 ##    ##      ## ## #     ## ## ##      "<<endl;                          
 cout<<"                 ##    ##      ##             ##         "<<endl;                  
 cout<<"                 ##    ##      ## ##          ##         "<<endl;                      
 cout<<"                 ##    ##      ##             ##         "<<endl;                          
 cout<<"                 ##    ##      ##             ##         "<<endl;                                  
 cout<<"                 ## ## ##  ##  ## ## #  ##    ##         "<<endl;                                              
 cout<<endl<<endl;                                                                                    
 cout<<"  ##    ##         ###          ##       ##      ## ## ##  "<<endl;                                                  
 cout<<"  ##    ##        ## ##         ## #   # ##      ##        "<<endl;                                      
 cout<<"  ##    ##       ##   ##        ##  ###  ##      ## ## ##  "<<endl;                                                       
 cout<<"  ##    ##      ## ### ##       ##   #   ##            ##  "<<endl;                                              
 cout<<"  ##    ##      ##     ##       ##       ##            ##  "<<endl;                        
 cout<<"  ## ## ##  ##  ##     ##  ##   ##       ##  ##  ## ## ##  "<<endl;                                                               
}              

 void calculateAgg(string name,double matricMarks,double interMarks,double ecatMarks){
      double agg;
      agg = matricMarks/1100*30 + interMarks/570*30 + ecatMarks/400*40;
      cout<<" "<<name<<" Your aggregate is :"<<agg<<endl;
}

 void compareMarks(string std1,double ecatMarksStd1,string std2,double ecatMarksStd2){
 if (ecatMarksStd1>ecatMarksStd2)
{
    cout<<" "<<std1<<" has higher marks in Ecat than  "<<std2<<endl;
}
 else
{ 
    cout<<" "<<std2<<" has higher marks in Ecat than  "<<std1<<endl;
}

}














