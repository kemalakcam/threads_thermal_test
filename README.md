# threads_thermal_test

// 20210625 : Kemal Akcam : info@kemalakcam.com 
// simple threads in cpp. simple code for CPU thermal test.
// exclude at least one cpu core if you don't want to lose control. example:
// numactl --physcpubind=\!0 ./t
// compile as
// gcc -lstdc++ -std=c++11 -pthread t.cpp -o t

published first on twitter:
https://twitter.com/Kemal_Akcam/status/1408512334725779466
