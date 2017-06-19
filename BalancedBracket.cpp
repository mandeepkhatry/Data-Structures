#include <stack>
#include<string>
#include <iostream>

using namespace std;


int main(){
    int t;

    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        stack <char> stack1;
        string s;
        cin>>s;

        bool check =true;

        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                stack1.push(s[i]);
            }
            if(stack1.empty()){
                check = false;
            }
            else {
                if(s[i] == ')' && stack1.top() == '(')
                    stack1.pop();
                else if(s[i] == ']' && stack1.top() == '[')
                    stack1.pop();
                else if(s[i] == '}' && stack1.top() == '{')
                    stack1.pop();
                }


        }

        if(stack1.empty()&&check){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
