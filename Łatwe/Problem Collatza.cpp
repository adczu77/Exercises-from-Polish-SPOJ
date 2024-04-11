    #include <iostream>
     
    using namespace std;
     
    int main()
    {
        int t;
        int s;
        cin>>t;
        int *tab=new int[t];
        int wyrazCiagu;
        int n=0;
        int j=0;
        for(int i=0; i<t; i++)
        {
            n=0;
            cin>>s;
            wyrazCiagu=s;
            while(wyrazCiagu!=1)
            {
                n++;
                if(wyrazCiagu%2==0)
                {
                    wyrazCiagu=wyrazCiagu/2;
                }
                else
                {
                    wyrazCiagu=3*wyrazCiagu+1;
                }
            }
            tab[j]=n;
            j++;
     
        }
        for(int k=0; k<t; k++)
        {
            cout<<tab[k]<<endl;
        }
        delete [] tab;
        return 0;
    }