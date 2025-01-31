    #include <stdio.h>

    int findGCD(int a, int b) {
        if (b == 0)
            return a;
        return findGCD(b, a % b);
    }

    int findLCM(int a, int b) {
        int gcd = findGCD(a, b);
        int lcm = (a * b) / gcd;
        return lcm;
    }

    int main() {
        int num1, num2;

        printf("Enter two integers: ");
        scanf("%d %d", &num1, &num2);

        int lcm = findLCM(num1, num2);

        printf("LCM of %d and %d is %d\n", num1, num2, lcm);

        return 0;
    }
