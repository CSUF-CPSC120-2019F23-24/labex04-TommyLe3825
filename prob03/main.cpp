// Sales prediction
#include <iostream>

int main()
{
  const double percent_increase = 0.18; // constant percent increase of sales
  const long int total_sales = 2103419277; //total sales last year
  unsigned long int amount_increase; //how much more sales were there this year
  unsigned long int total_prediction; // this year's sales prediction total

  amount_increase = total_sales * percent_increase;
  total_prediction = amount_increase + total_sales;

  std::cout << "Last year's sales were $" << total_sales << std::endl;
  std::cout << "This year's sales prediction: $"<< total_prediction;

  return 0;
}
