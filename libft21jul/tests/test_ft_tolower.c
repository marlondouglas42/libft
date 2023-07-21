#include "../minunit.h"

int	ft_tolower(int c);

MU_TEST(test_receiving_A_returns_a)
{
	//ARRANGE
	char	input = 'A';
	char	expected_result = 'a';
	char	actual_result;

	//ACT
	actual_result = ft_tolower(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_receiving_a_returns_a)
{
	//ARRANGE
	char	input = 'a';
	char	expected_result = 'a';
	char	actual_result;

	//ACT
	actual_result = ft_tolower(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_receiving_5_returns_5)
{
	//ARRANGE
	char	input = '5';
	char	expected_result = '5';
	char	actual_result;

	//ACT
	actual_result = ft_tolower(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(ft_test_suite) 
{
	MU_RUN_TEST(test_receiving_A_returns_a);
	MU_RUN_TEST(test_receiving_a_returns_a);
	MU_RUN_TEST(test_receiving_5_returns_5);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(ft_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}