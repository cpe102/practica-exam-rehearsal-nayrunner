#include <iostream>
#include<string>
using namespace std;

string conpress(string q)
{
    int x = 0;
    int r = 0;
    int y = q.size();
    string result;
    int t[y];
    while (x <= y)
    {
        t[r]= x;
        result[t[r]] = q[x];
        r++;
        x=x+3;
        
    }
return result;
}

int main()
{
    string a = conpress("ABCDEFGHIJKLMN");
    string b = conpress("123456");
    string c = conpress("HelloWorld");
    string d = conpress("BNK48");
    string e = conpress("COMPROG261102");
    string f = conpress("A");
    string g = conpress("AB");
    string h = conpress("ABC");
    string i = conpress("ABCD");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";

}