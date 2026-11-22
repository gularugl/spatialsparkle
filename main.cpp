#include <string>
#include <vector>

void count_vowels() {
    std::string text = "prism bridge";
    int vowels = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        char ch = text[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowels += 1;
    }
    (void)vowels;
}

void shift_right() {
    unsigned int n = 256u;
    unsigned int shifted = n >> 3;
    (void)shifted;
}

void divisor_count() {
    int n = 36;
    int count = 0;
    for (int d = 1; d <= n; ++d) {
        if (n % d == 0) count += 1;
    }
    (void)count;
}

void pick_max() {
    int a = 17, b = 42, c = 8;
    int m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    (void)m;
}

extern "C" int calm_quartz();
extern "C" void frost_grove();
extern "C" void still_maple();
extern "C" void swift_spruce();

int main() {
    count_vowels();
    shift_right();
    divisor_count();
    pick_max();
    frost_grove();
    still_maple();
    swift_spruce();
    return calm_quartz();
}
