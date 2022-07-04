#include <iostream>

using namespace std;

bool isleap(int year){
  
  if (year % 4 != 0){
    return false;
  }
  else {
    if (year % 100 != 0){
      return true;
    }
    else {
      if (year % 400 != 0){
        return false;
      }
      else{
        return true;
      }
    }
  }
}

int monthLength(int yearNum, int monthNum){
  int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31 ,30,31};
  if((monthNum > 13) || (monthNum < 1))
    return 0;
  else{
    if((isleap(yearNum)) && (monthNum == 2))
      return month[2] + 1;
    else
     return month[monthNum];
  };

};

int main(int argc, char **argv) {
	for(int yr = 2000; yr < 2002; yr++) {
  for(int mo = 1; mo <= 12; mo++)
   cout << monthLength(yr,mo) << " ";
  cout << endl;
 }
 return 0;
}