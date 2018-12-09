
#include<bits/stdc++.h>
using namespace std;

int  main()
{
    string s;
    cin>>s;
    int c=0;
    int flag = true;
    int f_po;
    int fi_po;
    set<int>st;
    if(s.size() == 1 && (s[0]!='A' && s[0] != 'E' && s[0] != 'I' && s[0] != 'O' && s[0] !='U'&&s[0] !='Y')){
        printf("2\n");
    }
    else{
    for( int i = 0; i<s.size(); i++ ){
        if(s[i]=='A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] =='U'||s[i] =='Y')
        {
            if(flag){
              f_po = i;
              f_po++;
              st.insert(f_po);
              flag = false;
            }
            else{
            int c_p = i;
            int c_pp = c_p+1;
            int t_p = c_pp;
            fi_po = c_pp - f_po;
            st.insert(fi_po);
            f_po = t_p;

            }
        }
    }
    f_po-=1;
    int xx = s.size();
    int yy = s.size() - f_po;
    st.insert(yy);
    printf("%d\n",st.size());
    }
    return 0;
}

