#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <stdio.h>
#include "printf.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(conversion_d_i, multiple_digits, .init = redirect_all_std)
{
    my_printf("%d %d", 1, 2);
    cr_assert_stdout_eq_str("1 2");
}

Test(conversion_d_i, negative_number, .init = redirect_all_std)
{
    my_printf("%d", -42);
    cr_assert_stdout_eq_str("-42");
}

Test(conversion_s, normal, .init = redirect_all_std)
{
    my_printf("this is a test: %s", "test");
    cr_assert_stdout_eq_str("this is a test: test");
}

Test(conversion_s, beginning, .init = redirect_all_std)
{
    my_printf("%s this is a test", "test");
    cr_assert_stdout_eq_str("test this is a test");
}

Test(conversion_s, multiple, .init = redirect_all_std)
{
    my_printf("%s this %s is a test: %s", "test", "test", "test");
    cr_assert_stdout_eq_str("test this test is a test: test");
}

Test(conversion_s, with_ints, .init = redirect_all_std)
{
    my_printf("this is a test: %s", "test123-+");
    cr_assert_stdout_eq_str("this is a test: test123-+");
}
