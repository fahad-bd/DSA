public class binarySearch {
    public static void main(String[] args) {
        int[] arr = {1,2,3,4,5,6,7,8,9};
        int key = 2;
        int answer = BinarySearch(arr, key);

        System.out.println(answer);
    }

    private static int BinarySearch(int[] arr, int key) {
        int start =0;
        int end = arr.length- 1;

        while(start <= end){
            int mid = start + (end-start)/2;

            if(key < arr[mid]){
                end = mid-1;
            }
            else if(key > arr[mid]){
                start = mid+1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
}
