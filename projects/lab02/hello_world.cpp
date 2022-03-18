#include <iostream>
#include <string>

int
main()
{
  std::string username; // храним имя пользователя
  std::cin >> username; // вводим имя
  std::cout << "Hello world from " << username << "!" << std::endl;
}
