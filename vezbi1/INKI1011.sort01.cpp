#include<iostream>  
using namespace std;  
int findSmallest (int[],int);  
int main ()  
{  
    int myarray[34] = {208, 159, 208, 181, 209, 130, 208, 176, 209, 128, 32, 208, 145, 208, 176, 209, 135, 208, 181, 208, 178, 32, 208, 152, 208, 157, 208, 154, 208, 152, 49, 48, 49, 49};  
    int pos,temp,pass=0;  
    cout<<"\n Input list of elements to be Sorted\n";  
    for(int i=0;i<34;i++)  
    {  
        cout<<myarray[i]<<"\t";  
    } 
    for(int i=0;i<34;i++)  
    {  
        pos = findSmallest (myarray,i);  
        temp = myarray[i];  
        myarray[i]=myarray[pos];  
        myarray[pos] = temp; 
        pass++;
    }  
    cout<<"\n Sorted list of elements is\n";  
    for(int i=0;i<34;i++)  
    {  
        cout<<myarray[i]<<"\t";  
    } 
    cout<<"\nNumber of passes required to sort the array: "<<pass;
    return 0;  
}  
int findSmallest(int myarray[],int i)  
{  
    int ele_small,position,j;  
    ele_small = myarray[i];  
    position = i;  
    for(j=i+1;j<34;j++)  
    {  
        if(myarray[j]<ele_small)  
        {  
            ele_small = myarray[j];  
            position=j;  
        }  
    }  
    return position;  
}