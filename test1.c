#include <criterion/criterion.h>

Test(sample, addition) {
    cr_assert_eq(2 + 2, 4, "Expected 2 + 2 to equal 4");
}

Test(sample, subtraction) {
    cr_assert_eq(2 - 1, 1, "Expected 2 - 1 to equal 1");
}
