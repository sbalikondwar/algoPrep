#include <bits/stdc++.h>

using namespace std;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
  if(a.first > b.first) return true;
  if(a.first == b.first) return (a.second < b.second); 
  return false;
}

int main(){
  int arr1[51][51];
  int tm_size=0, pos=0;
  cin>>tm_size>>pos;
  vector<pair<int,int>> arr;
  for(int i=0;i<tm_size;i++){
    int a,b;
    cin>>a>>b;
    arr.push_back({a,b});
    arr1[a][b]++;
  }
  int posn=0;
  sort(arr.begin(), arr.end(), sortbysec);
  for(int i=0; i<arr.size() ;i++){
    if(arr1[arr[i].first][arr[i].second] > 1){
      i+= arr1[arr[i].first][arr[i].second];
      posn += arr1[arr[i].first][arr[i].second];
    }
    if(pos <= posn){
      cout<<arr1[arr[i].first][arr[i].second];
      break;
    }
    posn+=1;
  }
}
/*
7 2
4 10
4 10
4 10
3 20
2 1
2 1
1 10

*/
