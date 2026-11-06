struct Point {
    int x;
    int y;
};    

struct Rect1 {
    struct Point lt;
    struct Point rb;
};

int main(){
    struct Rect1 b = {{-7, 5}, {5, -3}};
}