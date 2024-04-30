#include<bits/stdc++.h>
using namespace std;


class Player{
    public:
        int run = 0;       // Instance Variable
        static int total_run;  // Class or Static Variable. It should be declared not assigned int the class

        void hit4(){
            run += 4;
            total_run += 4;
        }

        void hit6(){
            run += 6;
            total_run += 6;
        }
};


// Class or Static variable have to assigned outside the class unless it's a const
int Player :: total_run = 0; 




int main()
{
    Player p1;
    Player p2;

    p1.hit4();
    p1.hit6();

    p2.hit6();

    cout<<p1.run<<endl;
    cout<<p2.run<<endl;

    cout<<p1.total_run<<endl;

    return 0;
}
