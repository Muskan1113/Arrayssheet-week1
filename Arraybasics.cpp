#include<bits/stdc++.h>
using namespace std;

//int main ()
//basic input and output
/*{
    int n;
    cin>>n;
    int array[n];

    for(int i=0;i<=n;i++)
    {
        cin>>array[i];
    }

    for(int i=0;i<=n;i++)
    {
        cout<<array[i]<<endl;
    }
}*/
//print max and min
/*{
    int n;
    cin>>n;

    int maxmin[n];
    for(int i=0;i<n;i++)
     {cin>>maxmin[i];}
    

    int maxno=INT_MIN;
    int minno=INT_MAX;

    for(int i=0;i<n;i++)
    {
        maxno=max(maxmin[i],maxno);
        minno=min(maxmin[i],minno);
       
        
    }
     cout<<maxno<<" "<<minno<<endl;
}*/
//trial for max-min
/*{
    
    int arr[6]={7,8,9,4,3,6};
     
     int mx=INT_MIN;
     int mn=INT_MAX;

     for(int i=0;i<=6;i++)
    {
     mx= max(arr[i],mx);
     mn= min(arr[i],mn);}

     cout<<mx<<" "<<mn<<endl;

}*/
// SEARCHING IN ARRAY
/*#include<bits/stdc++.h>
using namespace std;

int linearsearch(int srch[],int key,int n)
{
    for(int i=0;i<n;i++)
    {
        if(srch[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    
    int srch[n];
    for(int i=0;i<n;i++)
    {
        cin>>srch[i];
    }

    int key;
    cin>>key;

    cout<<linearsearch(srch,n,key)<<endl;
}*/
//BINARY SEARCH
/*#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;
    cout << binarysearch(arr, n, key) << endl;
}*/
//sorting
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (arr[j]<arr[i])
            {
                int temp= arr[j];
                arr[j]= arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
}