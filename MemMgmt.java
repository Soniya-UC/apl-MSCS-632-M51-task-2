public class MemoryManagement {

    public static void main(String[] args) {
    
        // Allocating memory dynamically
        int[] arr = new int[3];  

        for (int i = 0; i < arr.length; i++) { //Assigning values
            arr[i] = i * 10;
        }

        System.out.println("Array items:");
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
          
        arr = null;  // Object is now eligible for garbage collection

        System.gc();  // Java's garbage collector may clean up unreferenced objects
        System.out.println("Garbage collection");
        
    }
}