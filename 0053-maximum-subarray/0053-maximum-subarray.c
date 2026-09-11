int maxSubArray( int *nums, int numsSize ) {
    int somaatual = nums[0];
    int maiorsoma = nums[0];

    for (int i = 1; i < numsSize; i++) {
        if (somaatual + nums[i] > nums[i]) {
            somaatual = somaatual + nums[i];
        } else {
            somaatual = nums[i];
        }

        if (somaatual > maiorsoma) {
            maiorsoma = somaatual;
        }
    }

    return maiorsoma;
}
