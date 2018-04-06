#include <iostream>
#include <math.h>
#include <ctime>

using namespace std;

class Balon {
    public:
        float y;
        float vy;
        float m;
        float g;
        float f;
        void fy(void);
        void moverse(float dt);
        Balon(float y, float vy, float m, float g);    
        
};

Balon::Balon(float y0, float vy0, float m0, float g0){

    y=y0;
    vy=vy0;
    m=m0;
    g=g0;

}

void Balon::fy(void){
    
    f=-m*g;
    
}

void Balon::moverse(float dt){
    
    y+=vy*dt;
    vy+=(f*dt)/m;
    
}

int main () {
    float dt = 0.005;
    Balon balon(1.0,2.0,1.2,9.8);
    balon.fy();
    int i = 0;
    while(balon.y>=0){
        balon.moverse(dt);
        float to=dt*i;
        cout << to;
        cout << " ";
        cout << balon.y; 
        cout << "\n";
        i+=1;
   }
   return 0;
}

