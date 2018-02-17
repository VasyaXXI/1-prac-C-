#include <iosteam>

using namespace std;

int main()
{
    setlocale (0, "");
    string name;
    cout << "Как вас зовут?" << endl;
    cin >> name;
    cout << "Здравствуй, " << name << endl;
    return 0;
}
