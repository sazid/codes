#include <bits/stdc++.h>

#define rep(i, a, b) for ((i)=(a); (i) < (b); (i)++)
#define reps(i, a, b, s) for ((i)=(a); (i) < (b); (i)+=(s))
#define repe(i, a, b) for ((i)=(a); (i) <= (b); (i)++)
#define mod(n, M) ((((n) % (M)) + (M)) % (M))
#define pb push_back
#define MP make_pair
#define ff first
#define ss second
#define PI acos(-1)
#define prnt(arr) for (auto i : (arr)) cout << i << " "; cout << endl;
#define eps 1e-11
#define len(x) x.size()
#define FIN freopen("input.txt", "r", stdin);
#define FOUT freopen("output.txt", "w", stdout);
#define nl "\n"
#define all(x) x.begin(), (x).end()
#define FASTIO ios::sync_with_stdio(0); cin.tie(0);
#define READINT(x) scanf("%d", &(x))

using namespace std;

typedef long long ll;
typedef unsigned long ul;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

//double max = numeric_limits<double>::max();
//double INF = numeric_limits<double>::infinity();


double area_of_circular_sector(double r, double theta) {
    return (theta * r * r) / 2;
}

double area_of_triangle_three_sides(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt( s * (s-a) * (s-b) * (s-c) );
}

double angle_given_three_sides(double a, double b, double c) {
    return acos( (b*b + c*c - a*a) / (2*b*c) );
}


int main() {
    FASTIO

    int T, cs;
    double R1, R2, R3, A, B, C, triangle_area, sector_A, sector_B, sector_C, a, b, c;

    READINT(T);

    repe(cs, 1, T) {

        double ans = 0;


        scanf("%lf %lf %lf", &R1, &R2, &R3);


        a = R2 + R3;
        b = R1 + R3;
        c = R2 + R1;

        triangle_area = area_of_triangle_three_sides(a, b, c);

        A = angle_given_three_sides(a, b, c);
        B = angle_given_three_sides(b, a, c);
        C = angle_given_three_sides(c, a, b);


        sector_A = area_of_circular_sector(R1, A);
        sector_B = area_of_circular_sector(R2, B);
        sector_C = area_of_circular_sector(R3, C);


        ans = triangle_area - (sector_A + sector_B + sector_C);


        printf("Case %d: %.9lf\n", cs, ans);

    }

    return 0;
}

/*
3
1.0 1.0 1.0
2 2 2
3 3 3
 */
