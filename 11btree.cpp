#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> btree;
    int ch,x;

    do{
        cout<<"\n1.Insert\n2.Delete\n3.Search\n4.Display\n5.Exit\n";
        cin>>ch;

        switch(ch){
            case 1:
                cout<<"Enter element: ";
                cin>>x;
                btree.insert(x);
                break;

            case 2:
                cout<<"Enter element: ";
                cin>>x;
                btree.erase(x);
                break;

            case 3:
                cout<<"Enter element: ";
                cin>>x;
                if(btree.find(x)!=btree.end())
                    cout<<"Found";
                else
                    cout<<"Not Found";
                break;

            case 4:
                cout<<"B-Tree: ";
                for(int i:btree)
                    cout<<i<<" ";
                break;
        }
    }while(ch!=5);
}
