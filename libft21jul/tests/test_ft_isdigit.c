#include "../minunit.h"

int		ft_isalpha(int c);

MU_TEST(test_isdigit_receiving_A_returns_false)
{
	//ARRANGE
	char	input = 'A';
	int		expected_result = 0;
	int		actual_result;

	//ACT
	actual_result = ft_isalpha(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isdigit_receiving_a_returns_false)
{
	//ARRANGE
	char	input = 'a';
	int		expected_result = 0;
	int		actual_result;

	//ACT
	actual_result = ft_isalpha(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isdigit_receiving_9_returns_true)
{
	//ARRANGE
	char	input = '9';
	int		expected_result = 1;
	int		actual_result;

	//ACT
	actual_result = ft_isalpha(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(ft_isalpha_test_suite) 
{
	MU_RUN_TEST(test_isdigit_receiving_A_returns_false);
	MU_RUN_TEST(test_isdigit_receiving_a_returns_false);
	MU_RUN_TEST(test_isdigit_receiving_9_returns_true);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(ft_isalpha_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}