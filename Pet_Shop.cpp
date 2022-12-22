#include <iostream>
#include <string.h>
using namespace std;
class pets
{
    string name;
     void charac(void);
public:
    
    void give_name(void);
};
void pets ::give_name(void)
{
    cout << "enter name of your pet " << endl;
    cin >> name;
    charac();
}

void pets ::charac(void)
{
    if (name == "cat") {
            cout << "she is a fur ball" << endl;
            cout<<"she is have cute little paw"<<endl;
            cout<<"she is have some attitude problems"<<endl;
            cout<<"she is the CUTEST"<<endl;
        }
    if(name == "dog"){
        cout << "he is bubbly guy" << endl;
            cout<<"he is got cute little nose"<<endl;
            cout<<"he got honesty"<<endl;
            cout<<"he is the CUTEST"<<endl;
        }

    }

int main(){
    pets shop;
    shop.give_name();
    // shop.charac();
}

