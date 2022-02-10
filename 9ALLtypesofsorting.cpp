//Merge sort = it basically works on divide and conque algorithm used for sort the array.
/* firstly we find mid of our array and then divide it into two parts after that we apply merge sort algorithm
which is nothing but again recursively do the same value or point.
*/
//program to use merge sort technique
#include<iostream>
using namespace std;
void merge(int arr[],int l,int r,int mid){
    int n1= mid-l+1;
    int n2=r-mid;

    int a[n1];//temp arrays maked
    int b[n2];

    for(int i=0; i<n1; i++){
        a[i]=arr[l+i];
    }
    for(int i=0; i<n1; i++){
        b[i]=arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=arr[i];
            k++;
            i++;

        }
        else{
            arr[k]=b[j];
            k++;
            j++;

        }
    }

    while(i<n1){
        arr[k]=a[i];
        k++;
        i++;
    }
    while(j<n2){
        arr[k]=b[j];
        k++;
        j++;

    }
}
void mergeSort(int arr[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
}
int main()
{
    int arr[] ={5,4,3,2,1};
    mergeSort(arr,0,4);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<"";
    }
    cout<<endl;
    return 0;

}
//Time complexity of merge sort T(n)=2T(n/2)+n;
/*t(n) = 2T(n/2)+n
T(n/2) = 2T(n/4)+n/2
T(n/4) = 2T(n/8) +n/4
.
.
.
.
.
T(1) =1
*/
/* NOTE = Time complexity of merge sort    nlogn .
*/


//QUICK SORT =WE WILL CHOOSE ANY ELEMENT AND SHIFT IT TO THE RIGHT POSITON OF THE ELEMENT.
//RIGHT POSITON MEANS BEFORE THE ELEMNTS OF THE ELEMENT IS SMALL AND AFTER THE ALL ELEMENT ARE BIG.

