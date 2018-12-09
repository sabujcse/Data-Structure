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
*#*      GeeksforGeeks sabuj_coder                 *#*
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
#define      priority_queue<int,vector<int>,compare>pq;/***priorty_queue function***/
struct compare
{
   bool operator()(const int& I , const int& r)
   {
       return I > r;
   }
};

/**

  insert Data at the Beginning
  Data Structure

**/

struct Node{

  int data;
  struct Node* link;

};

struct Node* head;

void print()
{
    struct Node* temp2;

    temp2 = head;

    while( temp2 != NULL ){

        pf("%d ",temp2->data);
        temp2 = temp2->link;

    }

}
void insertatBeginning( int value )
{
       struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
        temp -> data = value;
        temp -> link = head;
        head = temp;
}
int  main()
{
    head = NULL;

    int test_case;
    int number_of_query;
    int number_of_insert;
    sc("%d",&test_case);
    for( int i = 0; i<test_case; i++ ){
        sc("%d",&number_of_query);
        for( int j = 0; j<number_of_query; j++ ){
            sc("%d",&number_of_insert);

            insertatBeginning(number_of_insert);

        }
        print();
    }
    return 0;
}


