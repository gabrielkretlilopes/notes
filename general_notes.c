char *msg1 = "hello"; // string is stored in the ROM, therefore it cannot be changed since is stored in ROM.
char msg2[] = "hello"; // string is stored in RAM, so content can be modified.

//Scan set %[^s] it will read until come across the letter s


//Pre-processor Directives
/*
  begin with the "#" symbol.
  Macros #define<identifier> <value> used for textual replacement
  File inclusion #include <std lib file name> or #include "user defined file name" user for file inclusion
  Conditional compilation #ifdef, #endif, #if, #else, #ifndef, #undef used to direct the compiler about code compilation
  Others like #pragme ...
  
*/
