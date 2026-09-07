bool isValid(char* s) {
    int len = strlen(s);
    char pilha[len];
    int topo = 0;

    for(int i = 0; i < len; i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            pilha[topo] = s[i];
            topo++;
        } else {
            if(topo == 0) return false;

            char ultimo = pilha[topo - 1];
            if((s[i] == ')' && ultimo != '(') ||
               (s[i] == '}' && ultimo != '{') ||
               (s[i] == ']' && ultimo != '[')){
                return false;
            };
            topo--;
        }
    }
    return topo == 0;
}