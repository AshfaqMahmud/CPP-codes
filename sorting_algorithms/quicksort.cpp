#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int partition(int l, int h, vector<int> &arr)
{
    int pivot = arr[l];
    int i=l;
    int j=h;
    while(i<j){
        do{
            i++;
        }while(arr[i]<=pivot);

        do{
            j--;
        }while(arr[j]>pivot);

        if(i<j){
            //swap using XOR
            // arr[i] = arr[i] ^ arr[j];
            // arr[j] = arr[i] ^ arr[j];
            // arr[i] = arr[i] ^ arr[j];
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[l],arr[j]);
    // arr[l] = arr[l] ^ arr[j];
    // arr[j] = arr[l] ^ arr[j];
    // arr[l] = arr[l] ^ arr[j];

    return j;
}

void Sort(vector<int> &arr,int l, int h){
    if(l<h){
        int j=partition(l,h,arr);
        Sort(arr,l,j);
        Sort(arr,j+1,h);
    }
}

int main(){
    vector<int> array = {5,10,2,4,9,15,17,3};
    //array.push_back(99999);
    Sort(array,0,array.size());

    for(int i:array){
        cout<<i<<" ";
    }
    
    return 0;
}