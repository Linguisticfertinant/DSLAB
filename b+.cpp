#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> bplus;
    int ch,x;

    do{
        cout<<"\n1.Insert\n2.Delete\n3.Search\n4.Display\n5.Exit\n";
        cin>>ch;

        switch(ch){
            case 1:
                cout<<"Enter element: ";
                cin>>x;
                bplus.push_back(x);
                break;

            case 2:
                cout<<"Enter element: ";
                cin>>x;
                for(int i=0;i<bplus.size();i++)
                    if(bplus[i]==x)
                        bplus.erase(bplus.begin()+i);
                break;

            case 3:
                cout<<"Enter element: ";
                cin>>x;
                for(int i:bplus){
                    if(i==x){
                        cout<<"Found";
                        goto end;
                    }
                }
                cout<<"Not Found";
                end:;
                break;

            case 4:
                cout<<"B+ Tree: ";
                for(int i:bplus)
                    cout<<i<<" ";
                break;
        }
    }while(ch!=5);
}
