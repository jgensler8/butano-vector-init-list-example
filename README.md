optional: adjust cpp file generated in `gen.py`

example error:

```
C:\Users\jgens\Downloads\butano\initializer_test>make
intermediate.cpp
lib.cpp
main.cpp
Linking ROM...
C:/devkitPro/devkitARM/bin/../lib/gcc/arm-none-eabi/14.1.0/../../../../arm-none-eabi/bin/ld.exe: intermediate.o: in function `std::vector<bn::string_view, std::allocator<bn::string_view> >::_S_check_init_len(unsigned int, std::allocator<bn::string_view> const&)':
C:/devkitPro/devkitARM/arm-none-eabi/include/c++/14.1.0/bits/stl_vector.h:1920:(.text._ZNSt6vectorIN2bn11string_viewESaIS1_EEC2ESt16initializer_listIS1_ERKS2_.constprop.0.isra.0+0x46): undefined reference to `std::__throw_length_error(char const*)'
collect2.exe: error: ld returned 1 exit status
make[2]: *** [/home/jgens/Downloads/butano/butano/butano_dka.mak:46: /home/jgens/Downloads/butano/initializer_test/initializer_test.elf] Error 1
make[1]: *** [/home/jgens/Downloads/butano/butano/tools/common_setup.mak:80: build] Error 2
make: *** [/home/jgens/Downloads/butano/butano/tools/common_setup.mak:75: all] Error 2
```

doesn't have to do with size (duplicate various functions until main.o is larger than failure)

a.out sizes:

```
bad:  518060
bad2: 513868
good: 510148
good2:514396
good3:520832
```