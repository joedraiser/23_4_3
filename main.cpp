#include <iostream>

#define SUMMER

#ifdef SUMMER
int main()\
{\
    std::cout << "summer";\
}
#endif

#ifdef FALL
int main()\
{\
    std::cout << "fall";\
}
#endif

#ifdef WINTER
int main()\
{\
    std::cout << "winter";\
}
#endif

#ifdef SPRING
int main()\
{\
    std::cout << "spring";\
}
#endif