#include <bits/stdc++.h>
using namespace std;

int main()
{
 // your code goes here
 int t;
 cin >> t;
 while (t--)
 {
  int n;
  cin >> n;
  int arr[n];
  int s = INT_MIN, f = -1;
  for (int i = 0; i < n; i++)
  {
   cin >> arr[i];
   if (arr[i] > f)
   {
    s = f;
    f = arr[i];
   }
   else if (arr[i] > s && arr[i] < f)
   {
    s = arr[i];
   }
  }
  cout << f + s << endl;
 }
 return 0;
}
