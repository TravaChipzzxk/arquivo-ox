#include <assert.h>


int test_valide(char c);

int main()
{
    assert(test_valide('X') == 1);
    assert(test_valide('O') == 1);

    assert(test_valide('A') == 0);
    assert(test_valide('x') == 0);

    return 0;
}
