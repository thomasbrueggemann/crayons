# crayons
Coloured std::cout

## Example

```C++
#include <iostream>
#include "crayons.hpp"

using namespace std;

int main() {
    Crayon red(FG_RED);
    Crayon def(FG_DEFAULT);
    cout << "This " << red << "word" << def << " is red." << endl;
}
```
