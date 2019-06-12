#include <iostream>

using namespace std;

int Find(int arr[],int length)
{
    int tmp = arr[0];
    for(int i=1; i < length; i++)
        tmp = tmp ^ arr[i];
    return tmp;
}

int main()
{
    int arr[] = {1,1,2,2,3,4,4,5,5,6,6,7,3};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout<<Find(arr,length)<<endl;
    return 0;
}
