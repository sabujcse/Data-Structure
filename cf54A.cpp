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
#define      Angle  360
#define      AN     180
#define      pb     push_back
#define      pp     pop_back
#define      t_r     true
#define      f_r     false
#define      PI    a(cos)
#define      MIN(a,b) ((a) < (b) ? (a) : (b))
#define      MAX(a,b) ((a) > (b) ? (a) : (b))
#define      FOR(i , x, y ) for(  i = (x); i<=(y); i++ )
#define      ROR(i , x, y ) for(  i = (x); i>=(y); i-- )
#define      priority_queue<int,vector<int>,compare>pq; /***priorty_queue function***/
struct compare
{
   bool operator()(const int& I , const int& r)
   {
       return I > r;
   }
};

int  main()
{
   //char ch [] = {'h','e','l','l','o','u'};
   string s;
   bool h = false;
   bool e = false;
   bool l = false;
   bool l2 = false;
   bool x = false;
   bool y = false;
   cin>>s;
   for( int i = 0; i<s.size(); i++ ){

      if(s[i] == 'h' && e==false && l==false && l2==false && x==false && y==false){
           h = true;
      }
      if(s[i] == 'e' && h==true && l==false && l2==false && x==false && y==false){
           e = true;
      }
      if(s[i] == 'l' && h==true && e==true && l2 == false && x==false && y == false){
           l = true;
      }
       if(s[i] == 'l' && h==true && e==true && l==true && x ==false && y==false){
           l2 = true;
      }
      if(s[i] == 'o' && h==true && e==true && l==true && l2==true && y == false){
           x = true;
      }
      if(s[i] == 'u' && h==true && e==true && l==true && l2==true && x==true ){
           y = true;
      }

   }
   if(h == true&&e==true&&l==true&&l2==true&&x==true&&y==true){
    pf("YES\n");
   }
   else{
    pf("NO\n");
   }
   return 0;
}




