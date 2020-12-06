#include <iostream>
#include<string>
using namespace std;

class Document
{
private:
    string type;
    double size;
public:
    Document(string m_type, double m_size)
    {
        type = m_type;
        size = m_size;
    }
    void notification()
    {
        cout << "Choose document number: 1, 2, 3? " << "\n" << endl;
    }
    void get()
    {
        cout << "Document type: " << type << "\n" << "Size: " << size << "mb" << "\n";
    }
    void print()
    {
        cout << "You choosed:" << "\n";
    }
};
int main()
{
    Document choose{ "",0 };
    Document one{".docx", 1};
    Document two{".txt", 0.1};
    Document three{".pptx", 10};
    Document appeal(choose);
    appeal.notification();
    int x;
    cin >> x;
    if (x == 1)
    {
        one.print();
        one.get();
    }
    else if (x == 2)
    {
        two.print();
        two.get();
    }
    else if (x == 3)
    {
        three.print();
        three.get();
    }
}