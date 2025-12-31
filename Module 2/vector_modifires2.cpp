#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    // replace() aita vector er kono function noi. Tai v. dita hobena. replace(start index, end index, kon value ke replace korbo, replace value er poriborte ki set korbo).
    replace(v.begin(), v.end(), 2, 100); // Mane 1st er 2ta perameter er maddhome range ta bole dita hoi. Ai range er moddhe jei value gulo 2. sei value gulo ke replace kore 100 kore daw.

    // find() aitao vector er kono function noi. Tai v. dia likhte hobena. find(start index, end index, jei value ke find korbo sei value);
    auto iterat = find(v.begin(), v.end(), 100); // 1st 2ta perameter er maddhome range ta bole dita hobe. 3rd index a bolte hobe kon value ki search korte chai. Ai find() method ta akta iterator ba index ke return kore othoba oi value ke return kore. akta akta kore element ke khoje. jodi 100 k e kono index a pai, tahole oi index a thame jai and oi value 100 ke return kore. jeita iterat variable a set hobe. Ar jodi khuje na pai tahole last index v.end() er index a gia thame jai and tokhon value 100 return korena, tokhon last index ta v.end() er index return kore.
    if (iterat == v.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}