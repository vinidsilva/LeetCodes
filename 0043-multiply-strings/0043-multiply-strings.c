char* multiply(char* num1, char* num2) {
    if (strcmp(num1, "0") == 0 || strcmp(num2, "0") == 0) {
        char* zero = (char*)malloc(2 * sizeof(char));
        if (zero == NULL) return NULL;
        zero[0] = '0';
        zero[1] = '\0';
        return zero;
    }

    int len1 = strlen(num1);
    int len2 = strlen(num2);
    
    int total_len = len1 + len2;
    
    int* res = (int*)calloc(total_len, sizeof(int));
    if (res == NULL) return NULL;

    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int d1 = num1[i] - '0';
            int d2 = num2[j] - '0';
            
            int p2 = i + j + 1; 
            
            int mul = d1 * d2;
            int sum = mul + res[p2]; 

            res[p2] = sum % 10;      
            res[i + j] += sum / 10;  
        }
    }

    char* result = (char*)malloc((total_len + 1) * sizeof(char));
    if (result == NULL) {
        free(res);
        return NULL;
    }

    int idx = 0;
    int k = 0;

    while (k < total_len && res[k] == 0) {
        k++;
    }

    while (k < total_len) {
        result[idx++] = res[k++] + '0';
    }
    
    result[idx] = '\0'; 

    free(res);

    return result;
}