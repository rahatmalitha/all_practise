#include <iostream> 
using namespace std;

int main()
{
    int t;
    cin>> t;
    
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        
        int sum = 0;
        
        for(int i = 0; i<n ; i++)
        {
            int x;
            cin >> x;
            sum +=x;
           
            
        }
        
        if(sum % 2 == 1)
        {
          cout << "YES" << endl;
          
        }
        else 
        {
            int newsum = n*k;
            if ((newsum+1)%2 == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0; 
}