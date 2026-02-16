#include <bits/stdc++.h>
using namespace std;

static bool cmp(int&x,int&y){
  int diffx=abs(5-x);
  int diffy=abs(5-y);

  if(diffx==diffy){
    return x>y;
  }
  else{
    return diffx<diffy;
  }
}

int main() {
    vector<int> arr ={2,3,9,15,4,1,21,11};
    sort(arr.begin(),arr.begin()+5,cmp);

    for(auto&x:arr)cout<<x<<" ";
    return 0;
}
