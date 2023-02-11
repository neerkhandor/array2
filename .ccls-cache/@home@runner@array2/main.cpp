#include <iostream>

using namespace std;
int main() {
  //Array:collection of similar item
  // continuous memory block linear data structure
  //list of similar items
  //an entity in which i can store data is called as data structure
  //declaring an array
  int arr[10];
  //declaring and  initializing an array
  int arr1[10]={1,2,3,45,6,7,8,9};
  int arr2[]={32,53,54,64};
  int arr3[5]={12,32,43};//remaining elements will be initialized to 0
  //int arr4[5]={1,2,3,4,5,6}//this will throw an error

 //base address
  // cout<<arr<<endl;
  // cout<<&arr<<endl;

  // accessing in an array happens with indexing
  //   in n size array index will go from 0 to n-1

//  arr[0]=arr+0*4 base address+index*sizeof(data type)
  //arr[2]=arr+2*4
 // cout<<arr1[0]<<endl;
int n=sizeof(arr1)/sizeof(arr1[0]);
  //int size=sizeof(arr1)/sizeof(int);
  // cout<<n<<endl;
  // cout<<arr1[n-3]<<endl;
  for(int i=0;i<n;i++){
    cout<<arr1[i]<<" ";
  }
  cout<<endl;
  int arr4[5];
for(int j=0;j<5;j++){
  cin>>arr4[j];
}
    //printing doubles
  for(int k=0;k<5;k++){
    cout<<2*arr4[k]<<" ";
    
  }
  
  
}