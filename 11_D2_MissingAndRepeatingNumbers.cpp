#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    int ans=0;
	for(int i=0;i<n;i++){
        ans^=arr[i]^(i+1);
    }
    //ans has num1^num2
    int right1bit=ans&~(ans-1);
    
    int first=0,second=0;
    for(int i=0;i<n;i++){
        if(right1bit&arr[i])
            first^=arr[i];
        else
            second^=arr[i];
    }
    for(int i=1;i<=n;i++){
        if(right1bit&i)
            first^=i;
        else
            second^=i;
    }
    for(int i=0;i<n;i++){
        if(arr[i]==first)
            return {second,first};
    }
    return {first,second};
}

