#include<bits/stdc++.h>
using namespace std;
void DEFINATION(){
  cout<<"The rules for Tower of Hanoi are as follow: ",
  "1.  Only one disk can be move at a time",
  "2.  The uppermost disk on the tower can only move from  the rod.",
  "3.  No disk may be placed on top of the smaller disk. ",
  "4.  We have to use one extra Rod to transfer N disks from from one tower to another.";
}

 void  tower_of_Hanoi(int n, string from_rod, string to_rod, string aux_rod ){
    if(n == 0){
     
        return ;
    }
    tower_of_Hanoi(n-1, from_rod , aux_rod, to_rod);
    cout<<"Move disk  "<<n<<"  from rod  "<<from_rod <<"  to rod  "<<to_rod<<endl;
    tower_of_Hanoi(n-1,aux_rod , from_rod, to_rod);
 }
static int count;
int main(){
  int n;
  cout<<"Enter no. of disk: "<<endl;
  cin>>n;
  // string x,y,z;
  // cout<<"Enter rod name : "<<endl;
  // cin>>x;
  // cout<<"Enter second rod : "<<endl;
  // cin>>y;
  // cout<<"Enter last rode name: "<<endl;
  // cin>>z;
  tower_of_Hanoi(n, "A", "B", "C");
return 0;
}