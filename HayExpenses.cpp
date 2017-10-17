//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>

using namespace std;

int main()
{
    int n, q, hay[1024];
    int querys, querye, sum[505];
    int i, j;
    
    cin >> n >> q;
    for(i=0;i<n;i++)
        cin >> hay[i];
    for(i=0;i<q;i++)
    {
        cin >> querys >> querye;
        sum[i]=0;
        for(j=querys-1;j<querye;j++)
            sum[i]+=hay[j];
    }
    
    for(j=0;j<i;j++)
        cout << sum[j] << endl;
    
    return 0;
}
