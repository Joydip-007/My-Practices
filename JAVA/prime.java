public class prime {
    public static boolean isPrime(int n) {
        boolean isPrime = true;
        if (n <= 1) {
            isPrime = false;
        }
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = false;
            }
        }
        return isPrime;
    }
    public static void primesInRange(int n){
        for(int i=2;i<=n; i++){
            if(isPrime(i)){
                System.out.print(i + " ");
            }
        }
        System.out.println();
    }
    public static void main(String[] args) {
        primesInRange(100);
    }
}
