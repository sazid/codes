#include <stdio.h>
#include <math.h>

double x, y, c, BC, h1, h2, h;

double min(double a, double b) {
    if (a < b) return a;
    else return b;
}

void bisection() {
    double lo = 0.0;
    double hi = min(x, y);
    
    while (hi - lo > 1e-9) {
        BC = lo + (hi - lo) / 2;
        h1 = sqrt(y*y - BC*BC);
        h2 = sqrt(x*x - BC*BC);
        h = (h1*h2)/(h1+h2);
        
        if (h > c)
            lo = BC;
        else
            hi = BC;
    }
}

int main() {
    int T, cs=1;
    scanf("%d", &T);
    
    while (T--) {
        scanf("%lf %lf %lf", &x, &y, &c);
        bisection();
        printf("Case %d: %.8lf\n", cs++, BC);
    }
    
    return 0;
}
