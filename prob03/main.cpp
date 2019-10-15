// Sales prediction
#include <iostream>

int main()
{
  const double PERCENT_INCREASE = 0.18; // constant percent increase of sales
  const long int TOTAL_SALES = 2103419277; //total sales last year
  unsigned long int amount_increase; //how much more sales were there this year
  unsigned long int total_prediction; // this year's sales prediction total

  amount_increase = TOTAL_SALES * PERCENT_INCREASE; //finding how much sales are there this year
  total_prediction = amount_increase + TOTAL_SALES; //finding this year's sales prediction

  std::cout << "Last year's sales were $" << TOTAL_SALES << std::endl;
  std::cout << "This year's sales prediction: $"<< total_prediction;

  return 0;
}
