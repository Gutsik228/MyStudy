
#include <iostream>
#include <string>
using namespace std;

class Pixel2 {
public:
    Pixel2() {
        r = g = b = 0;
    }

    Pixel2(int r, int g, int b) {
        this->r = r;
        this->g = g;
        this->b = b;

    }

    string GetInfo()
    {
        return "Pixel: r = " + to_string(r) + " Pixel: g = " + to_string(g) + " Pixel: b = " + to_string(b);
    }



private:
    int r;
    int g;
    int b;

};

class Image
{
public:
    void GetImageInfo()
    {
        for(int i = 0; i < LENGHT; i++)
        {
            cout << pixels[i].GetInfo() << endl;
        }
    }
    
private:
    
    class Pixel
    {
    public:

        Pixel(int r, int g, int b) {
            this->r = r;
            this->g = g;
            this->b = b;

        }

        string GetInfo()
        {
            return "Pixel: r = " + to_string(r) + " Pixel: g = " + to_string(g) + " Pixel: b = " + to_string(b);
        }



    private:
        int r;
        int g;
        int b;

    };

    Pixel pixels[5]{
        Pixel(1,1,1),
        Pixel(1,1,1),
        Pixel(1,1,1),
        Pixel(1,1,1),
        Pixel(1,1,1)
    };
    static const int LENGHT = 5;
    
};

int main()
{
    const int LENGTH = 5;
    Pixel2 arr[LENGTH]{
        Pixel2(12,31,11),
        Pixel2(51,61,1),
        Pixel2(51,1,51),
        Pixel2(1,51,1),
        Pixel2(11,21,61)
    };
    for (int i = 0; i < LENGTH; i++) {
        cout << arr[i].GetInfo() << endl;
    }
}

