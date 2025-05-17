public class bintodec {
    public static void main(String[] args) {
        String binaryString = "101"; 
        int decimalValue = Integer.parseInt(binaryString, 2);
        System.out.println("Decimal value: " + decimalValue);
    }
}