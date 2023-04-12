#include <bits/stdc++.h>

using namespace std;

void DivImpar(int a, int b)
{
    int r;
    while(b)
    {
        r = a%b;
        a = b;
        b = r;
    }
    while(a%2 == 0)
        a/=2;
    cout << a;
}

void Prob1(string s)
{
    char r[110];
    int k=-1;
    if (s[0] >= 'A' && s[0] <= 'Z')
            r[++k] = s[0]; 
    for (int i=1; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
            if (s[i+1] >= 'A' && s[i+1] <= 'Z')
                r[++k] = s[i+1]; 
    }
    s[++k] = '\0';
    cout << r;
}



int main()
{
    //Prob1("Universitatea de Arte Plastice BUCURESTI");
    //DivImpar(30, 60);
    return 0;
}
