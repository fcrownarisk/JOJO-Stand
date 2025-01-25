#include <stdio.h>
int main() {
    const char *hiragana[] = {
        "あ", "い", "う", "え", "お",
        "か", "き", "く", "け", "こ",
        "さ", "し", "す", "せ", "そ",
        "た", "ち", "つ", "て", "と",
        "な", "に", "ぬ", "ね", "の",
        "は", "ひ", "ふ", "へ", "ほ",
        "ま", "み", "む", "め", "も",
        "や", "ゆ", "よ", "ら", "り",
        "る", "れ", "ろ", "わ", "を",
        "ん"
    };
    const char *romanNumbers[] = {
        "a", "i", "u", "e", "o",
        "ka", "ki", "ku", "ke", "ko",
        "sa", "si", "su", "se", "so",
        "ta", "chi", "tsu", "te", "to",
        "na", "ni", "nu", "ne", "no",
        "ha", "hi", "fu", "he", "ho",
        "ma", "mi", "mu", "me", "mo",
        "ya", "yu", "yo", "ra", "ri",
        "ru", "re", "ro", "wa", "wo",
        "n"
    };
    for (int i = 0; i < 46; ++i) {
        printf("%s -> %s\n", hiragana[i], romanNumbers[i]);
    }
    return 0;
}