#include <iostream>
#include <string>
using namespace std;


int CountTriple(const string& s) 
{
    int count = 0;
    size_t pos = 0;
    while ((pos = s.find("OGO", pos)) != string::npos || (pos = s.find("AGA", pos)) != string::npos) 
    {
        count++;
        pos += 3; 
    }
    return count;
}


string ReplaceTriple(string& s) 
{
    size_t pos = 0;
    while ((pos = s.find("OGO", pos)) != string::npos || (pos = s.find("AGA", pos)) != string::npos) 
    {
        s.replace(pos, 3, "**");
        pos += 2; 
    }
    return s;
}

int main() 
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    cout << "String contains " << CountTriple(str) << " groups of 'OGO' or 'AGA'" << endl;
    string modifiedStr = ReplaceTriple(str);
    cout << "Modified string: " << modifiedStr << endl;

    return 0;
}
