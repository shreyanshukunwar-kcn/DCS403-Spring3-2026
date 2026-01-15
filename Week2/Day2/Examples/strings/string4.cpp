#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
  string proverb_1 = "No gain without pain.";
  string proverb_2 = "No news is good news.";

  cout << "proverb_1: " << proverb_1 << endl;
  cout << "length of proverb_1: " << proverb_1.length() << endl;

  proverb_1.append(proverb_2);

  cout << "proverb_1 (after update): " << proverb_1 << endl;
  cout << "length of proverb_1 (after update): " << proverb_1.length() << endl;

  return 0;
}

// int main()
// {
//   string proverb;

//   cout << "empty string proverb: " << proverb << endl;
//   cout << "length of proverb: " << proverb.length() << endl;

//   proverb.append("Once ").append("bitten ").append("twice ").append("shy"); //chaining of method invocation

//   cout << "proverb (after update): " << proverb << endl;
//   cout << "length of proverb (after update): " << proverb.length() << endl;

//   return 0;
// }