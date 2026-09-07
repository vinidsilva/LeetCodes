bool isPerfectSquare(int num) {
    if(num == 0) return false;
    int esquerda = 0;
    int direita = num;

    while(esquerda <= direita){
        long meio = esquerda + (direita - esquerda)/2;
        long quadrado = meio*meio;

        if(quadrado == num){
            return true;
        } else if(quadrado < num){
            esquerda = meio+1;
        } else {
            direita = meio-1;
        };
    };

    return false;
}