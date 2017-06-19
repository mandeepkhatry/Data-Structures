#include<bits/stdc++.h>
using namespace std;


int main(){
    int n1;
    int n2;
    int n3;
    cin >> n1 >> n2 >> n3;

    vector<int> h1(n1);
    for(int h1_i = 0;h1_i < n1;h1_i++){
       cin >> h1[h1_i];

    }
    vector<int> h2(n2);
    for(int h2_i = 0;h2_i < n2;h2_i++){
       cin >> h2[h2_i];

    }

    vector<int> h3(n3);
    for(int h3_i = 0;h3_i < n3;h3_i++){
       cin >> h3[h3_i];

    }

    reverse(h1.begin(),h1.end());
    reverse(h2.begin(),h2.end());
    reverse(h3.begin(),h3.end());

   for(int i=1;i<n1;i++){
        h1[i]+=h1[i-1];
    }
    for(int i=1;i<n2;i++){
        h2[i]+=h2[i-1];
    }
    for(int i=1;i<n3;i++){
        h3[i]+=h3[i-1];
    }
    int l1=n1-1,l2=n2-1,l3=n3-1;
    while(h1[l1]!=h2[l2]||h1[l1]!=h3[l3]){

        if(h1[l1]>h2[l2]||h1[l1]>h3[l3])
            l1-=1;
        if(h2[l2]>h1[l1]||h2[l2]>h3[l3])
            l2-=1;
        if(h3[l3]>h2[l2]||h3[l3]>h1[l1])
            l3-=1;

    }
    cout<<h1[l1]<<endl;
    return 0;
}
