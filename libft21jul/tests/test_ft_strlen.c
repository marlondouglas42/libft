#include "../minunit.h"

size_t	ft_strlen(const char *s);

MU_TEST(test_receiving_empty_str_returns_0)
{
	//ARRANGE
	char	*input = "";
	int		expected_result = 0;
	int		actual_result;

	//ACT
	actual_result = ft_strlen(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_receiving_alphabet_str_returns_26)
{
	//ARRANGE
	char	*input = "abcdefghijklmnopqrstuvwxyz";
	int		expected_result = 26;
	int		actual_result;

	//ACT
	actual_result = ft_strlen(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_receiving_digits_str_returns_10)
{
	//ARRANGE
	char	*input = "0123456789";
	int		expected_result = 10;
	int		actual_result;

	//ACT
	actual_result = ft_strlen(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(ft_test_suite) 
{
	MU_RUN_TEST(test_receiving_empty_str_returns_0);
	MU_RUN_TEST(test_receiving_alphabet_str_returns_26);
	MU_RUN_TEST(test_receiving_digits_str_returns_10);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(ft_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}