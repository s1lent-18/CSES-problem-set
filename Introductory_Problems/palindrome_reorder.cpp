#include <bits/stdc++.h>
#include<string>
using namespace std;
using ll=long long;

bool checkPalin(const string& name)
{
    int left=0;
    int right= name.length() -1;
    while(left<right)
    {
        if(name[left]!=name[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string name;
    cin>>name;
    ll odd_index;
    ll odd_count=-1;
    ll n=name.length();
    vector<int> freq(26,0);
    for(char c:name)
    {
        freq[c-'A']++;  
    }
    for(int i=0;i<26;i++)
    {
        if(freq[i]%2 !=0)
        {
            odd_index++;
            odd_count = i;
        }
    }
    if(odd_index>1)
    {
        cout<<"NO SOLUTION";
    }
    else
    {
        string left_half="";
        string middle="";
        for(int i =0;i<26;i++)
        {
            char current_char=(char)('A'+i);
            left_half.append(freq[i]/2 , current_char);
            if(i==odd_count)
            {
                middle.append(freq[i], current_char);
            }
        }
        string right_half=left_half;
        reverse(right_half.begin(),right_half.end());
        cout<<left_half<<middle<<right_half<<"\n";
    }
    return 0;
}