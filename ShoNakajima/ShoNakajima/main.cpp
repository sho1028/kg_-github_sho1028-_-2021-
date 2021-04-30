#include <iostream>
#include <string>
#include <stack>
using namespace std;


int main() {
    
    int array[]={12,345,6};
    int size=sizeof(array)/sizeof(array[0]);
    
    for(int i=0; i<size; ++i)
        {
         cout<<array[i]<<" ";
        }
    cout<<endl;
    
    
    for(int j=0;j<size;++j)
    {
        int number=array[j];
        stack<int> st;
       
        while(number>0)
        {
            int digit=number%10;
            number=number/10;
            st.push(digit);
        }
        
        while(!st.empty())
        {
            int digit=st.top();
            st.pop();
            
            switch(digit)
            {
                case 0:
                    cout<<"Zero";
                    break;
                
                case 1:
                    cout<<"One";
                    break;
                    
                case 2:
                    cout<<"Two";
                    break;
                    
                case 3:
                    cout<<"Three";
                    break;
                    
                case 4:
                    cout<<"Four";
                    break;
                    
                case 5:
                    cout<<"Five";
                    break;
                    
                case 6:
                    cout<<"Six";
                    break;
                    
                case 7:
                    cout<<"Seven";
                    break;
                    
                case 8:
                    cout<<"Eight";
                    break;
                    
                case 9:
                    cout<<"Nine";
                    break;
                    
                default:
                    break;
                
            }
           
        }
        cout<<" ";
        
        
        
    }
    cout<<endl;
    
    
    
    return 0;
}
