#include <iostream>
#include <string>
#include <cctype>

int main()
{
    using std::cin;
    using std::cout;
    using std::string;


    string que[] = {"who was the founder of apple", "who was the founder of google ",
                    "what year was c++ invented"};
    int size=sizeof(que)/sizeof(que[0]);
    string ans[][4]={{"A.steve jobs ","B.random guy 1","C.random guy 2","D.random guy 3"},
                      {"A.random guy 1","B.larry page","C.random guy 1","D.random guy 1"},
                    {"A.1823","B.1985","C.1723","D .1221"}};
    int cols=sizeof(ans[0])/sizeof(ans[0][0]);
    char guess;
    char correct[]={'A','B','B'};

    for (int i = 0; i < size ; i++)
    {
        cout<<que[i]<<'\n';
        for (int j = 0; j < cols; j++)
        {
          cout<< ans[i][j]<< '\n';  
        }
        cin >> guess;
        guess=(char)toupper(guess);
        if(guess==correct[i]){
            cout<< "you choose correctly\n";
          }
          else{
            cout<<"your choice was incorrect\n";
            cout<< "the correct option was "<< correct[i]<< '\n';
          }
          
    }
    

}

