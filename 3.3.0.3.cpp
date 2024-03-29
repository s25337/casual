#include <cstdio>
#include <iostream>
using namespace std;

bool any(void* a[], size_t n, bool (*fp)(void*)) {

    for (int i = 0; i < n; i++)
        if ((*fp)(a[i]))
            return true;
    return false;
}

bool isCool(void* elem) {

    if (elem == nullptr)
        return true;
    return false;
}

int main(int argc, char const* argv[])
{
    int x = 10;
    int y = 12;
    char z = 'a';

    void* a[] = { &x, &y, &z };
    void* b[] = { nullptr, nullptr, nullptr };
    void* c[] = { nullptr, nullptr, &z };

    size_t size = 3;
    bool res1 = any(a, size, &isCool);
    bool res2 = any(b, size, &isCool);
    bool res3 = any(c, size, &isCool);

    cout << res1 << " " << res2 << " " << res3 << "\n";

    return 0;
}
