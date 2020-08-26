#include <bits/stdc++.h>

using namespace std; 
long long po(long long a,long long b,long long x) 
{ 
    long long ans=1; 
    a=a%x; 
    while(b>0) { if(b&1) ans=(ans*a)%x; b=b>>1; a=(a*a)%x; } return ans; }

int main() 
{ 
    bool prime[1000001];
    memset(prime,'1',sizeof(prime)); 
   
   for(int i=2;i*i<=1000001;i++) 
   { 
       if(prime[i]) 
       { 
           for(int j=(i*i);j<1000001;j+=i) prime[j]=0; 
        } 
    }

int q; 
cin>>q; while(q--) 

{ 
 long long a,b,x;

 cin>>a>>b>>x;

 int aa=x;
 vector<int>v;
  int i=2;
   long long ans=1;
   if(b<0)
   {
     if(!prime[a])
       {  
         while(aa>1)
            { 
              int ab=aa;
                  while(aa%i==0)
                    aa/=i;

               if(aa!=ab)
               v.push_back(i);

               i++;

              if(aa)
                {
                   while(prime[i]==0)
                          i++;
                
            }
        }

         ans=x;
         
         for(int i=0;i<v.size();i++)
              ans=(ans*(v[i]-1))/v[i];
     

}
    else if(a>2)
        ans=x-1;

    while(b<0)
     b+=ans;


    cout<<po(a,b,x)<<endl;
}
   else
     cout<<po(a,b,x)<<endl;
   
} 
}
