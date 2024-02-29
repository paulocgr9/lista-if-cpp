#include <iostream>

using std::cout;
using std::endl;

int main()
{
	/* O ano deve ser inserido na variável abaixo */
    int iAno = 2024;
    
    if (iAno % 4 == 0 && iAno % 100 != 0)
    {
        cout << "O ano " << iAno << " é bissexto" << endl;
    }
    else if (iAno % 400 == 0)
    {
        cout << "O ano " << iAno << " é bissexto" << endl;
    }
    else
    {
        cout << "O ano " << iAno << " não é bissexto" << endl;
    }
    
    return 0;
}