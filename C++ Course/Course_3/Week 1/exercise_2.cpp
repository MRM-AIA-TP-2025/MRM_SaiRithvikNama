#include <iostream>
#include <vector>
using namespace std;

//add code below this line
void GetOddsEvens(string s, vector<int>& list)
{   
  for(auto a:list)
  {
    if(s=="true")
    {
      if(a%2==0)
        cout<<a<<endl;
    }
    else if(s=="false")
    {
      if(a%2!=0)
        cout<<a<<endl;
    }
  }



}


//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  vector<int> y;
  for (int i = 2; i < argc; i++) {
    y.push_back(stoi(argv[i]));
  }
  GetOddsEvens(x, y);
}