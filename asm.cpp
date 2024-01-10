#include<bits/stdc++.h>
using namespace std;


class Yasm{
    char buf[20];

public:
    fstream machinCode("output.txt", ios::out);
  void read();  
  void evaluate(char arr[]);
  map<string, string>IC;
};
Yasm::Yasm(){
    IC.insert("start", "IS 01");
    IC.insert("end", "IS 02");

}
void Yasm :: evaluate(char arr[]){
    iterator ptr = IC.begin();

    

}

void Yasm :: read(){
    try
    {
        fstream file("source.txt", ios::in);
        file>>buf;
        cout<<buf;
        evaluate(buf);
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

int main(){
    Yasm ob;

    ob.read();


    return 0;

}

