
#include <iostream>
using namespace std;
int main() {
    int eng,fil,sci,prog;
    
    while (true){
        cout << "Hello!\n";
    cout <<"This program will calculate your grade\n";
cout <<"enter your grades in each subjet\n";

cout <<"\n English:";
cin >> eng;

cout <<"\n Filipino:";
cin >> fil;
cout <<"\n Science:";
cin >> sci;
cout <<"\n Programming:";
cin >> prog;

int sum = (eng + fil + sci + prog) / 4;

if(sum>=99 && sum <=100){
    
    cout << "Grade:" << sum <<" "<<"Equivalent grade: 1.00" ;
    break;
}



else if(sum>=96 && sum <=98){
    
    cout << "Grade:" << sum <<" "<<"Equivalent grade: 1.25" ;
    break;
}

else if(sum>=93 && sum <=95){
    
    cout << "Grade:" << sum <<" "<<"Equivalent grade: 1.50" ;
    break;
    
}

else if(sum>=90 && sum <=92){
    
    cout << "Grade:" << sum <<" "<<"Equivalent grade: 1.75" ;
    break;
    }

  else if (sum>=87 && sum <=89){
    
    cout << "Grade:" << sum <<" "<<"Equivalent grade: 2.00" ;
    break;
      
  }


else {
    cout << "Invalid input!";
    
}
}
    return 0;
}