#include<bits/stdc++.h>
using namespace std;
int bsearch(int arr[],int start,int end,int val){
    if(start>end) {//base case
       return -1;
    }
    int mid=(start+end)/2;
    if(arr[mid]==val)
        return mid;
    if(val<arr[mid])
        return bsearch(arr,start,mid-1,val);//keval ek jagah change ayega woh bhi jab right side me solution lene gayega agar nahi mila to ho sakta hai leftka last hi uska solution ho
    else{
        int index=bsearch(arr,mid+1,end,val);
       if(index==-1)
        return mid;
       else
        return index;
    }
}
int main()
{
   int arr[]={10,20,30,40,50};
    int size=5;
    int i;
    for(int j=1;j<=6;j++) {
            cout<<"enter the number to be searched\n";
    int temp;
    cin>>temp;

        if ((i = bsearch(arr, 0, size - 1, temp)) != -1) {
            cout << "found " << arr[i] << endl;

        } else {
            cout << "not found, i: "<<i<< "\n";
        }
    }
    return 0;
}
