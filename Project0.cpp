#include <iostream>
#include <string>

int main() {
    std::string code[] = {

"#include <iostream>",
"#include <string>",
" ",
"int main() {",
"    std::string code[] = {",
"    ",
"    };",
"    for (int index = 0; index < 6; index++)",
"        std::cout << index[code] << std::endl;",
"    for (int line = 0; line < 17; line++) {",
"        std::cout << (char)34 << line[code]",
"        <<(char)34 << ',' << std::endl;",
"    }",
"    for (int next = 6; next < 17; next++)",
"        std::cout << next[code] << std::endl;",
"    return 0; ",
"}",
    };
    for (int index = 0; index < 6; index++)
        std::cout << index[code] << std::endl;
    for (int line = 0; line < 17; line++) {
        std::cout << (char)34 << line[code]
        << (char)34 << ',' << std::endl;
    }
    for (int next = 6; next < 17; next++)
        std::cout << next[code] << std::endl;
    return 0;
}
//Has  my chnages been updated?
