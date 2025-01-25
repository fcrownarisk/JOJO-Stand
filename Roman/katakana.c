int main(){
const char *katakana[] = {
    "ア", "イ", "ウ", "エ", "オ",
    "カ", "キ", "ク", "ケ", "コ",
    "サ", "シ", "ス", "セ", "ソ",
    "タ", "チ", "ツ", "テ", "ト",
    "ナ", "ニ", "ヌ", "ネ", "ノ",
    "ハ", "ヒ", "フ", "ヘ", "ホ",
    "マ", "ミ", "ム", "メ", "モ",
    "ヤ", "ユ", "ヨ", "ラ", "リ",
    "ル", "レ", "ロ", "ワ", "ヲ",
    "ン"
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
     for (int j = 0; j < 46; ++j) {
        printf("%s -> %s\n", katakana[j], romanNumbers[j]);
    }
    return 0;
}