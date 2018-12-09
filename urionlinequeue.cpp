/*****************************************************
*#*##################################################*                                                  *
*#****************************************************                                                  *
*#*       URI:          sabujbd,                   *#*
*#*       UVA:          sabuj_coder.               *#*
*#*       LIGHTOJ:      return_SS,                 *#*
*#*       DEVSKILL:     return_SS                  *#*
*#*       CODEFORCES:   return_SS                  *#*
*#*       TIMUS:        return_SS                  *#*
*#*       CODEMARSHAL:  return_SS                  *#*
*#*       HACKERRANK    return_SSP                 *#*
*#*                                                *#*
*#*                                                *#*
*#*          Sabuj sarker                          *#*
*#*          def: CSE;                             *#*
*#*    Daffodil International University           *#*
*#*                                                *#*
*#*                                                *#*
*****************************************************
*####################################################
*****************************************************/
#include<bits/stdc++.h>
using namespace std;
#include<stack>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<list>
typedef      string                  S;
typedef      long long               ll;
typedef      long long int           lli;
typedef      unsigned int            ui ;
typedef      unsigned long long int  ulli;
typedef      double                  D;
typedef      float                   f;
typedef      int                     I;
#define      Clear(a) memset( a, 0, sizeof(a))
#define      sc     scanf
#define      pf     printf
#define      cn     cin
#define      ct     cout
#define      en     endl
#define      pb     push_back
#define      pp     pop_back
#define      t_r     true
#define      f_r     false
#define      PI    a(cos)
#define      FOR(i , x, y ) for(  i = (x); i<=(y); i++ )
#define      ROR(i , x, y ) for(  i = (x); i>=(y); i-- )
#define      N 100000
int prime[N];

int fibonacci( int n )
{
    if(n<=1)return n;
    else return fibonacci(n-1)+fibonacci(n-2);
}
int GCD( int a, int b){
    if(b==0) return a;else return GCD(b,a%b);
}
int LCM( int a, int b)
{
    return b = (a*b)/GCD(a,b);
}
void  permutation(string ss)
{sort(ss.begin(),ss.end());
    do{cout<<ss<<endl;}while(next_permutation(ss.begin(),ss.end()));}

I Bigmod( I b , lli p, I m )
{if( p== 0 ){return 1;}
    if( p % 2 == 0 )
    {lli re = Bigmod( b, p/2, m );return ( re*re )%m;}
    else if( p%2 == 1 ){lli p1 = b%m;lli p2 = Bigmod( b, p-1, m );return ( p1 * p2 )%m;}}

void Sieve_of_Eratosthenes()
{   for( int i = 2; i<=N; i++){prime[i] = 1;}
    prime[0] = 0,prime[1] = 0;
    int root = sqrt(N);
    for( int i = 2; i<=root; i++ ){
    for( int j = i*i; j<=N; j+=i ){if(prime[j]){prime[j] = 0;}}}}

 bool  perfect_squre_check( long long  number)
 {
     if( number ==1 || number ==-1 ){return false;}
     else{bool flag = false;bool flag2 = false;
     if( number < 0 ){number = (-1)*number;flag = true;}
     for( long long  i = 1; i<= sqrt(number); i++ ){
          if( i*i == number ){flag2 = true;break;}if( i*i > number ){break;}}
     if( flag == true ){if( flag2 == true ){return true;}else{return false;}}
     else{if(flag2 == true){return true;}
        else{return false;}}}
 }
 int nCr_recurtion( int n , int r )
 {
     if( r==0||r==n)return 1;
     else return nCr_recurtion(n-1,r-1)+nCr_recurtion(n-1,r);
 }
 int nCr_n_complex( int n , int r)
{
    int nr = (n-r);
    int a_n[n],a_r[r],a_nr[nr];
    for( int i = 1; i<=n; i++ )  a_n[i] = i;
    for( int j = 1; j<=r; j++ )  a_r[j] = j;
    for( int k = 1; k<=nr;k++ )  a_nr[k] = k;
    for( int i = 2; i<=nr; i++ ){
        for( int j = 2; j<=n; j++ ){
            if( a_n[j]%a_nr[i]== 0 && (a_n[j]!=1 && a_nr[i]!=1) ){
                if(a_n[j] == a_nr[i]){a_n[j] = 1;a_nr[i] = 1;}
                else{a_n[j] = a_n[j]/a_nr[i];a_nr[i] = 1;}}}}
   for( int i = 2; i<=r; i++ ){
        for( int j = 2; j<=n; j++ ){
            if( a_n[j]%a_r[i]== 0 && (a_n[j]!=1 && a_r[i]!=1) ){
                    if(a_n[j] == a_r[i]){a_n[j] = 1;a_r[i] = 1;
                }
                else{a_n[j] = a_n[j]/a_r[i];a_r[i] = 1;}}}}
    int mul1 = 1;int mul2 = 1;int mul3 = 1;
    for( int i = 2; i<=n; i++ )mul1 = mul1*a_n[i];
    for( int j = 2; j<=nr; j++ )mul2 = mul2*a_nr[j];
    for( int k = 2; k<=r; k++ )mul3 = mul3*a_r[k];
    return mul1*mul2*mul3;

}
bool prime_check( int number ){
       if(number==0|| number==1) return false;
       else if(number==2) return true;
       else if(number%2==0) return false;
       for( int i = 3; i<=sqrt(number); i+=2 ){
         if(number%i == 0 ){
            return false;
         }
       }
        return true;
   }
bool digitSum( int number ){

   int sum = 0;
   int xxx;
   bool flag = true;
   while(number>=10){
         xxx = number%10;
         number /=10;
         if(!prime_check(xxx)){
            return false;
         }
   }
   if(  (number == 2 || number == 3 || number == 5 || number == 7 )){
            return true;
   }
        else{
       return false;
        }
   }
   int fac_result( int x ){

    int sum = 1;
    for( int i = 1; i<=x; i++ ){
        sum *= i;
    }
   return sum;
 }
   int digit_count( int nn )
   {
       int c = 0;
       int rr = 0;
       int ll = 0;
       while( nn > 0 ){
          int y = nn%10;
          nn /=10;
          c++;
          int r = fac_result(c);
           rr = y*r;
          ll +=  rr;
       }
       return ll;
   }
string gg;
void string_handow()
{
    cn>>gg;
    int count = 0;
            int count1 = 0;
    for( int i = 0; i<gg.size();i++ ){
            bool flag1 = false;
            bool flag2 = false;
        if(gg[i] == 'h' ){
                int xx = i;
            for( int k = xx+1; gg[k]; k++ ){
                if(gg[k]=='a'){
                    count++;
                }
                else{
                        flag1 = true;
                    break;
                }
            }
        }
        if(gg[i] == 'k'){
            int xxx = i;
            for( int l = xxx+1; gg[l]; l++ ){
                if(gg[l] == 'a'){
                    count1++;
                }
                else{
                        flag2 = true;
                    break;
                }
            }
        }
        if(flag1&&flag2){
            break;
        }
    }
    cout<<"k";
    int fx = count*count1;
    for( int i = 1; i<=fx; i++){
        cout<<"a";
    }
    cout<<endl;
}
int  main()
{
     int test_case;
    queue<int>q;
    int number;
    while(cin>>test_case&&test_case)
    {
        for( int i = 1; i<=test_case; i++ ){
            q.push(i);
        }

        pf("Discarded cards:");
        while(q.size()>1){
            pf(" %d",q.front());
            q.pop();
            int xx = q.front();
            q.pop();
            if(!q.empty())
             pf(",");
            q.push(xx);
        }
        pf("\nRemaining card: %d\n", q.front());
        q.pop();
    }
    /**
    queue<int>q;
    int number;
    int zz;
    while(cin>>number&&number)
       {

        for( int i = 1; i<= number; i++ ){q.push(i);}
        pf("Discarded cards:");
        while(q.size()>1)
        {
            pf(" %d",q.front());
            q.pop();
             zz = q.front();
            q.pop();
            if(!q.empty()){
               pf(",");
               q.push(zz);
            }
        }
         cout<<endl;
        pf("Remaining card: %d\n",q.front());
        q.pop();
}
**/
    return 0;
}
