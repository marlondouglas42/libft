#include "../minunit.h"

int		ft_isalnum(int c);

MU_TEST(test_receiving_A_returns_1)
{
	//ARRANGE
	char	input = 'A';
	int		expected_result = 1;
	int		actual_result;

	//ACT
	actual_result = ft_isalnum(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_receiving_a_returns_1)
{
	//ARRANGE
	char	input = 'a';
	int		expected_result = 1;
	int		actual_result;

	//ACT
	actual_result = ft_isalnum(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_receiving_9_returns_1)
{
	//ARRANGE
	char	input = '9';
	int		expected_result = 1;
	int		actual_result;

	//ACT
	actual_result = ft_isalnum(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(ft_test_suite) 
{
	MU_RUN_TEST(test_receiving_A_returns_1);
	MU_RUN_TEST(test_receiving_a_returns_1);
	MU_RUN_TEST(test_receiving_9_returns_1);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(ft_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}