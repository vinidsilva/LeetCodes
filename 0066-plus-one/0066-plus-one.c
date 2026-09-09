/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    for(int i = digitsSize - 1; i >= 0; i--){
        if(digits[i] < 9) {
            digits[i] += 1;
            *returnSize = digitsSize;
            return digits;
        }

        digits[i] = 0;
    }

    *returnSize = digitsSize + 1;
    int* resultado = (int *)malloc((*returnSize) * sizeof(int));

    resultado[0] = 1;
    for(int i = 1; i < *returnSize; i++){
        resultado[i] = 0;
    }

    return resultado;
}