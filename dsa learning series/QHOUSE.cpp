#include<bits/stdc++.h>
using namespace std;
bool ask(int x, int y){
    //print the query
    printf("? %d %d\n", x, y);
    //flush the output
    fflush(stdout);
    string response;
    cin>>response;
    return response[0] == 'Y';
}

pair <int, int> binary_search(int x1, int y1, int x2, int y2){  // this will find out the last part
// as the imgae is symetric so it won't be aproblem if we get a side
    bool x_changes = x1 < x2;
    bool y_changes = y1 < y2;

    while(x1 < x2 || y1 < y2){
        int x_mid = (x1 + x2 + 1) / 2;
        int y_mid = (y1 + y2 + 1) / 2;
        if (ask(x_mid, y_mid)){
            x1 = x_mid;
            y1 = y_mid;
        }
        else{
            x2 = x_mid - x_changes; // or: x2 = x_mid; if(x_changes) x2--;
            y2 = y_mid - y_changes;
        }
    }

    return {x1, y1};

}

int main(){
    int m = 1000;
    int half_square = binary_search(0, 0, m, 0).first;
    int square_side = half_square * 2;
    int half_triangle_base = binary_search(0, square_side, m, square_side).first;
    int triangle_base = 2 * half_triangle_base;
    int top = binary_search(0, 0, 0, m).second;
    int triangle_height = top - square_side;
    printf("! %d\n", square_side * square_side + triangle_base * triangle_height / 2);

}