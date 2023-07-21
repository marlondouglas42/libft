#include "../minunit.h"

int		ft_isascii(int c);

MU_TEST(test_receiving_A_returns_1)
{
	//ARRANGE
	char	input = 'A';
	int		expected_result = 1;
	int		actual_result;

	//ACT
	actual_result = ft_isascii(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_receiving_5_returns_1)
{
	//ARRANGE
	char	input = '5';
	int		expected_result = 1;
	int		actual_result;

	//ACT
	actual_result = ft_isascii(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_receiving_nonascii_returns_0)
{
	//ARRANGE
	char	input = '\x80'; // 0x80 = 128
	int		expected_result = 0;
	int		actual_result;

	//ACT
	actual_result = ft_isascii(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(ft_test_suite) 
{
	MU_RUN_TEST(test_receiving_A_returns_1);
	MU_RUN_TEST(test_receiving_5_returns_1);
	MU_RUN_TEST(test_receiving_nonascii_returns_0);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(ft_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}