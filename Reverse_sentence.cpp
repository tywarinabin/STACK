#include<bits/stdc++.h>
using namespace std;
void Reverse_sentence(string S){
    stack<string> str;
    for(int i = 0;i<S.length();i++){
        string word = " ";
        while((S[i]!=' ' ) and (i<S.length()))
        {
            word = word + S[i];
            i++;
        }
        str.push(word);
    }
    while(!str.empty()){
        cout<<str.top()<<" ";
        str.pop();
    }
}
int main(){
  string s;
  cout<<"Sentence to Reverse : "<<endl<<" --> ";
  getline(cin,s);
  cout<<endl<<"This is the reversed SENTENCE of the following  : "<<endl<<" --> ";
  Reverse_sentence(s);
  return 0;
}