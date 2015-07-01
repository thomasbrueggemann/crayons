# crayons
Coloured std::cout

## Example

```C++
#include "colormod.h" // namespace Color
#include <iostream>
using namespace std;
int main() {
    Color::Modifier red(Color::FG_RED);
    Color::Modifier def(Color::FG_DEFAULT);
    cout << "This ->" << red << "word" << def << "<- is red." << endl;
}
```
