int lengthOfLastWord(char* s) {
    int len = strlen(s) - 1;
    int tamanho = 0;

    for(int i = len; i >= 0 && s[i] == ' '; i--){
        len--;
    }
    for(int i = len; i >= 0 && s[i] != ' '; i--){
        tamanho++;
    }

    return tamanho;
}