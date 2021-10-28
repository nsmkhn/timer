# Timer
Scoped timer implemented in C++.

## Usage
```C++
#include "timer.h"

{
    Timer t(__func__);
    // ...
    // Some code
    // ...
} // When the object goes out of scope measurement is printed to stdout
```
