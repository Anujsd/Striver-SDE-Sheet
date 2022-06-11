#include <bits/stdc++.h> 
long long merge(long long *arr,long long l,long long m,long long r){
    long long c=0;
    int r1=m-l+1,r2=r-m;
    int a1[r1],a2[r2];
    for(int i=0;i<r1;i++)
        a1[i]=arr[l+i];
    for(int i=0;i<r2;i++)
        a2[i]=arr[m+i+1];
    int i=0,j=0,k=l;
    
    while(i<r1 && j<r2){
        if(a1[i]>a2[j]){
            c+=(r1-i);
            j++;
        }
        else i++;
    }

    i=0,j=0;
    while(i<r1&& j<r2){
        if(a1[i]<=a2[j])
            arr[k++]=a1[i++];
        else
            arr[k++]=a2[j++];
    }
    while(i<r1){
        arr[k++]=a1[i++];
    }
    while(j<r2){
        arr[k++]=a2[j++];
    }
    return c;
}

void mergeSort(long long *arr,long long l,long long r,long long &c){
    if(l<r){
        int m=l+(r-l)/2;
        mergeSort(arr,l,m,c);
        mergeSort(arr,m+1,r,c);
        c+=merge(arr,l,m,r);
    }
}
long long getInversions(long long *arr, int n){
    long long c=0;
    mergeSort(arr,0,n-1,c);
    return c;
}

