#include <iostream>
#include <string.h>
using namespace std;
class dogs 
{
public:
    void checkout(int x);
};
class cats
{
public:
    void checkout1(int a);
};
class pets : public dogs , public cats
{
    string name;

public:
    int p;
    int q;
    void choose(void);
    void bread(void);
    void cat(int x);
    void dog(int y);
};
void pets ::choose(void)
{
    cout << "Which pet you will love the most ? " << endl;
    cin >> name;
    bread();
}
void pets ::bread(void)
{
    if (name == "cat")
    {
        cout << "Oh Your a cat person!! " << endl;
        cout << "which bread you would prefer ?" << endl;
        cout << "1  Persian" << endl;
        cout << "2. Birman" << endl;
        cout << "3. RUssian Blue" << endl;
        cout << "4. Other" << endl;
        cin >> p;
        cat(p);
    }
    if (name == "dog")
    {
        cout << "Oh Your a dog person!! " << endl;
        cout << "which bread you would prefer ?" << endl;
        cout << "1 . Husky" << endl;
        cout << "2 . Doberman" << endl;
        cout << "3 . Bulldog" << endl;
        cout << "4 . Other" << endl;
        cin >> p;
        dog(p);
    }
}

void pets ::cat(int x)
{
    if (p == 1)
    {
        string cat1 = "Persian";
        cout << "Great !! You chose " << cat1 << endl;
        cout << " Lets get to know more about " << cat1 << endl;
        cout << "The Persian cat also known as the Persian longhair, is a long-haired breed of cat characterized by a round face and short muzzle." << endl;
        cout << "We currently have :" << endl;
        cout << "1. White Persian , Resuced from a fire . He is a year old " << endl;
        cout << "2. Brown Persian , we found him on streets of LA, His foster parents abandoned him . He is six months old " << endl;
        cout << "3. Blue Persian , His mother was one of our rescued huskies , He is six months old  " << endl;
        cin >> q;
        checkout1(q);
    }
    if (p == 2)
    {
        string cat2 = "Birman";
        cout << "Great !! You chose " << cat2 << endl;
        cout << " Lets get to know more about " << cat2 << endl;
        cout << "The Birman, also called the 'Sacred Cat' of Burma  is a domestic cat breed. " << endl;
        cout << " The Birman is a long-haired, colour-pointed cat distinguished by a silky coat, deep blue eyes, and contrasting white gloves on each paw." << endl;
        cout << "We currently have :" << endl;
        cout << "1. White Birman , Resuced from a fire . He is a year old " << endl;
        cout << "2. Brown Birman , we found him on streets of LA, His foster parents abandoned him . He is six months old " << endl;
        cout << "3. Blue Birman , His mother was one of our rescued huskies , He is six months old  " << endl;
        cin >> q;
        checkout1(q);
    }
    if (p == 3)
    {
        string cat2 = "Russian Blue";
        cout << "Great !! You chose " << cat2 << endl;
        cout << " Lets get to know more about " << cat2 << endl;
        cout << "The Russian Blue Cat commonly referred to as just Russian Blue, is a cat breed with colors that vary from a light shimmering silver to a darker, slate grey." << endl;
        cout << "The short, dense coat, which stands out from the body, has been the breed's hallmark for more than a century." << endl;
        cout << "We currently have :" << endl;
        cout << "1. White Russian Blue , Resuced from a fire . He is a year old " << endl;
        cout << "2. Brown Russian Blue , we found him on streets of LA, His foster parents abandoned him . He is six months old " << endl;
        cout << "3. Blue Russian Blue , His mother was one of our rescued huskies , He is six months old  " << endl;
        cin >> q;
        checkout1(q);
    }
    if (p == 4)
    {
        string cat2 = "Other";
        cout << "Sorry , All of other breads are adopted right now " << endl;
        cout << " Thanks for visiting " << endl;
    }
}
void pets ::dog(int x)
{
    if (p == 1)
    {
        string dog1 = "Husky";
        cout << "Great !! You chose " << dog1 << endl;
        cout << " Lets get to know more about " << dog1 << endl;
        cout << "Husky is a general term for a dog used in the polar regions, primarily and specifically for work as sled dogs." << endl;
        cout << "It refers to a traditional northern type, notable for its cold-weather tolerance and overall hardiness." << endl;
        cout << "We currently have :" << endl;
        cout << "1. White Husky , Resuced from a fire . He is a year old " << endl;
        cout << "2. Brown Husky , we found him on streets of LA, His foster parents abandoned him . He is six months old " << endl;
        cout << "3. Blue Husky , His mother was one of our rescued huskies , He is six months old  " << endl;
        cin >> q;
        checkout(q);
    }
    if (p == 2)
    {
        string dog1 = "Doberman";
        cout << "Great !! You chose " << dog1 << endl;
        cout << " Lets get to know more about " << dog1 << endl;
        cout << "The Dobermann or Doberman Pinscher is a medium-large breed of domestic dog." << endl;
        cout << "The Dobermann has a long muzzle. It stands on its pads and is not usually heavy-footed. Ideally, they have an even and graceful gait." << endl;
        cout << "1. Brwon Doberman , Resuced from a fire . He is a year old " << endl;
        cout << "2. Black Doberman , we found him on streets of LA, His foster parents abandoned him . He is six months old " << endl;
        cout << "3. Brown Doberman , His mother was one of our rescued huskies , He is six months old  " << endl;
        cin >> q;
        checkout(q);
    }
    if (p == 3)
    {
        string dog1 = "BUlldog";
        cout << "Great !! You chose " << dog1 << endl;
        cout << " Lets get to know more about " << dog1 << endl;
        cout << "The Bulldog is a British breed of dog of mastiff type. It may also be known as the English Bulldog or British Bulldog. It is of medium size, a muscular, hefty dog with a wrinkled face and a distinctive pushed-in nose." << endl;
        cout << "1. Brwon Bulldog , Resuced from a fire . He is a year old " << endl;
        cout << "2. Black Bulldog , we found him on streets of LA, His foster parents abandoned him . He is six months old " << endl;
        cout << "3. Brown-White Bulldog , His mother was one of our rescued huskies , He is six months old  " << endl;
        cin >> q;
        checkout(q);
    }
    if (p == 4)
    {
        string dog1 = "Other";
        cout << "Sorry , All of other breads are adopted right now " << endl;
        cout << " Thanks for visiting " << endl;
    }
}
void dogs ::checkout(int x)
{
    // int q = x;
    string dogc;
    string mail;
    int number;
    if (x == 1)
    {
        dogc = "Husky";
    }
    if (x == 2)
    {
        dogc = "Doberman";
    }
    if (x == 3)
    {
        dogc = "Bulldog";
    }
    cout << "Thanks for choosing "<<dogc<<endl;
    cout<<"Please provide us your contact detalis "<<endl;
    cout <<"Enter your mail : "<<endl;
    cin>>mail;
    cout <<"Enter your number : "<<endl;
    cin>>number;
    cout<<"Thanks for adopting"<<endl;
    cout<<"our team will contact you soon"<<endl;
}

void cats ::checkout1(int x)
{
    // int q = x;
    string catc;
    string mail;
    int number;
    if (x == 1)
    {
        catc = "Persian";
    }
    if (x == 2)
    {
        catc = "Birman";
    }
    if (x == 3)
    {
        catc = "Russian Blue";
    }
    cout << "Thanks for choosing "<<catc<<endl;
    cout<<"Please provide us your contact detalis "<<endl;
    cout <<"Enter your mail : "<<endl;
    cin>>mail;
    cout <<"Enter your number : "<<endl;
    cin>>number;
    cout<<"Thanks for adopting"<<endl;
    cout<<"our team will contact you soon"<<endl;
}
int main()
{
    pets shop;
    shop.choose();
}
