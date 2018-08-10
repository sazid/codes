#include <stdio.h>
#include <math.h>

double L, W, a, b, r, theta, expected_s, calculated_s;

void binary_search() {
    double low = 0.0;
    double high = 400.0;
    
    while (high - low > 1e-9) {
        L = low + (high - low) / 2.0;
        W = L * b / a;
        
        expected_s = 200 - L;

        r = sqrt(L*L + W*W) / 2;
        
        theta = acos( (r*r + r*r - W*W) / (2*r*r) );
        
        calculated_s = r * theta;
        
        if (calculated_s < expected_s)
            low = L;
        else
            high = L;
    }
}

int main() {
    int cs = 1, T;
    scanf("%d", &T);
    
    while (T--) {
        scanf("%lf : %lf", &a, &b);
        binary_search();
        printf("Case %d: %.8lf %.8lf\n", cs++, L, W);
    }
    
    return 0;
}
