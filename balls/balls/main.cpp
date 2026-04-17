#include <iostream>
#include <stdio.h>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {

    int n = 0;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
   
    int bts = 0;
    int bs = 0;
    int j = 0;
    for(int i = 0;i<a.size();i++)
    {   
       
        j = i;
        b = a;
        if ((bs > 0) && (bs < bts))
        {
            bts = bs;
        }
        
        while (!(b.size() == 0))
        {
            cout << "aqui";
            b.erase(b.begin() + j);
            if ((b[j] == b[j - 1]) && (j > 0))
            { 
                while (j < b.size() && b[j] == b[j - 1])
                {
                    b.erase(b.begin() + j);
                    b.erase(b.begin() + j - 1);
                }
            }
           
            j++;
            bs++;
        }
    }

    cout << bts;
    return 0;
}