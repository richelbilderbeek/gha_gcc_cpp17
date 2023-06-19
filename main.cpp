#include <cassert>
#include <iostream>
#include <optional>
#include <string>

int main()
{
  static_assert("C++17");

  #ifndef __GNUC__
  #error GCC in this example please
  #endif

  #ifdef __clang__
  #error No clang in this example please
  #endif
  const std::optional<std::string> maybe_string("Hello world");
  assert(maybe_string.has_value());
  std::cout << maybe_string.value() << '\n';
}
