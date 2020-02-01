//longest common sequence in two string 
#include<bits/stdc++.h>
#include<algorithm>
using namespace std; 

void lcs(string str1 , string str ,int n , int m)
{
    vector<vector<int> > vec( n+1 , vector<int> (m+1));  
    int k = 0 ; 
    string com ;
    cout<<endl<<vec.size();
    cout<<" "<<vec[1].size()<<endl;
    
   for(auto i = 1 ; i < vec.size() ; i++)
    {
        for(auto j = 1 ; j < vec[i].size() ; j++)
        {
           // cout<<vec[i][j]<<" ";
            if(str1[i - 1] == str[j - 1])
            {
                vec[i][j] = vec[i - 1][j - 1] + 1;
            }
            
            else{
                vec[i][j] = std::max(vec[i- 1][j] ,vec[i][j - 1]);
            }
            
            if(vec[i][j] > k) 
            {
                k = vec[i][j];
            }
        }
    }
    for(int i = 0 ;i<vec.size() ; i++)
    {
        cout<<endl;
        for(int j = 0 ; j< vec[1].size() ; j++)
        cout<<vec[i][j]<<" ";
    }
    
    cout<<endl<<"length of longest common sequence is "<<k;
}

int main()
{
    string str ,str1;
    cout<<"enter two string"<<endl;
    getline(cin, str);
    cout<<str<<" "<<str.length()<<endl;
    getline(cin, str1);
    cout<<str1<<" "<<str1.length()<<endl;
    
    lcs(str1,str ,str1.length() ,str.length());
    
    
    return 0; 
    
}
