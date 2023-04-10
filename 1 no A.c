#include <iostream>
using namespace std;
int binarySearch(int[], int, int, int);
int main()
{   int num[4] = {2, 19, 97, 809};
   int search_num, loc=-1;
   cout<<"Enter the number that you want to search: ";
    12   cin>>search_num;
   loc = binarySearch(num, 0, 6, search_num);

