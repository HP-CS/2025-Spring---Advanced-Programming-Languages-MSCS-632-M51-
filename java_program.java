public class Main {
    public static void main(String[] args) {
        int[] numbers = {1, 2, 3, 4, 5};
        int result = calculateSum(numbers);
        System.out.println("Sum in Java: " + result);

        int[] arr = new int[4];  // Dynamically allocated array
        arr[0] = 10;
        arr[1] = 20;
        arr[2] = 30;
        arr[3] = 40;
        
        System.out.print("Dynamically allocated array: ");
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();
    }

    public static int calculateSum(int[] arr) {
        int total = 0;  // Initialize total to 0
        for (int num : arr) {
            total += num;
        }
        return total;
    }
}
