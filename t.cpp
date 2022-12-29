// 20210625 : Kemal Akcam : info@kemalakcam.com 
// simple threads in cpp. simple code for CPU thermal test.
// exclude at least one cpu core if you don't want to lose control. example:
// numactl --physcpubind=\!0 ./t
// compile as
// gcc -lstdc++ -std=c++11 -pthread t.cpp -o t

#include <thread>

class c
{
 public:
 c()
 {
  std::thread *a = new std::thread(&c::t, this);
  a->detach();
 };
 void t()
 {
  for(;;);
 };
};

int main()
{
 for(c *b;;b = new c());
}
