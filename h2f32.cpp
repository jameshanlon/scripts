#include <cstring>
#include <cstdlib>
#include <cstdio>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("usage: %s <hex-digit>+\n", argv[0]);
    return 1;
  }
  unsigned u = std::strtoul(argv[1], NULL, 16);
  float f;
  std::memcpy(&f, &u, sizeof(unsigned));
  printf("%f\n", f);
  return 0;
}
