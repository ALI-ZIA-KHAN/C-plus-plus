#include <iostream>
#include<string.h>
using namespace std;

class Links {
public:
    char name[100];

    Links() {
        cout << "Links default constructor" << endl;
    };
    Links(char y[]) {
        strcpy(name, y);
        cout << "Links parameterized constructor having name: " << name << endl;
    };



};

class WebPage {
public:
    double width, height;

    WebPage() {
        cout << "WebPage default constructor" << endl;
    };
    WebPage(double a, double b): width(a), height(b) {
        cout << "WebPage parameterized constructor having width and height as: " << width << ", " << height << endl;
    };

    Links l1;
    Links l2= {"www.gosomewhere.com"};

};




class WebSite {
private:
    char name[100];
public:
    WebSite() {
        cout << "WebSite default constructor" << endl;
    };
    WebSite(char x[]) {
        strcpy(name, x);
        cout << "WebSite parameterized constructor having name: " << name << endl;
    };

    WebPage wp1;
    WebPage wp2={640, 800};
    WebPage wp3={400, 600};
    WebPage wp4={1280, 720};

};


int main()
{
    WebSite web1;

    return 0;
}
