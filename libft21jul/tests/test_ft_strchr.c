#include "../minunit.h"

char *ft_strchr(const char *s, int c);

MU_TEST(test_receiving_abc_b_returns_bc)
{
	//ARRANGE
	char	*input1 = "abc";
	int		input2 = 'b';

	char	*expected_result = 'bc';
	char	*actual_result;

	//ACT
	actual_result = ft_strchr(input1, input2);

	//ASSERT
	mu_assert_char_eq(expected_result, actual_result);
}

MU_TEST_SUITE(ft_test_suite) 
{
	MU_RUN_TEST(test_receiving_abc_b_returns_bc);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(ft_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}