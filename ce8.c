#include <stdio.h>

int main() {
    double file_size_mb = 400.0; 
    double transmission_rate_chars_per_sec = 960.0; 
    double file_size_chars = file_size_mb * 1024 * 1024; 
    
    double time_sec = file_size_chars / transmission_rate_chars_per_sec; 
    double time_min = time_sec / 60.0; 
    double time_hr = time_min / 60.0; 
    double time_day = time_hr / 24.0; 
    
    printf("Time required to send the file:\n");
    printf("%.2f seconds\n", time_sec);
    printf("%.2f minutes\n", time_min);
    printf("%.2f hours\n", time_hr);
    printf("%.2f days\n", time_day);
    
    return 0;
}
