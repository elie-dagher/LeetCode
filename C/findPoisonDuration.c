/* basically if the inverval is is longer than the duration, then the duration is added else the poison counter resets */
int findPoisonedDuration(int* timeSeries, int timeSeriesSize, int duration) {
    if (timeSeriesSize == 1) return duration;

    int time = 0;

    for (int i = 0; i < timeSeriesSize - 1; i++){
        int curr = timeSeries[i], next = timeSeries[i+1];

        if (next - curr <= duration) time += next - curr;
        else time += duration;
    }

    time += duration;

    return time;
}