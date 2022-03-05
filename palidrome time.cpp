// 
solution:
int Solution::solve(string str) {
     int hh, mm;
 
    // Storing hour and minute value
    // in integral form
    hh
        = (str[0] - 48) * 10
        + (str[1] - 48);
    mm
        = (str[3] - 48) * 10
        + (str[4] - 48);
 
    int requiredTime = 0;
 
    // Keep iterating till first digit
    // hour becomes equal to second
    // digit of minute and second digit
    // of hour becomes equal to first
    // digit of minute
    while (hh % 10 != mm / 10
        || hh / 10 != mm % 10) {
 
        ++mm;
 
        // If mins is 60, increase hour, and
        // reinitilialized to 0
        if (mm == 60) {
            mm = 0;
            ++hh;
        }
 
        // If hours is 60, reinitialized to 0
        if (hh == 24)
            hh = 0;
        ++requiredTime;
    }
 
    // Return the required time
    return requiredTime;
}
