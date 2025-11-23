float calculateAverage(int arr[], int n) {
    int sum = 0;
    for(int i=0;i<n;i++) sum += arr[i];
    return (float)sum / n;
}
// Write a function named calculateAverage that takes an array of integers as input and returns the average of the numbers.
