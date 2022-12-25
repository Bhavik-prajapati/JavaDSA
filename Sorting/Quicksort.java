
public class QuickSort {



    static int partition(int[] arr,int low,int high){
        int pivot=arr[low];
        int i=low-1;
        int j=high+1;
        while (true){
            do{
                i++;
            }while (arr[i]<pivot);
            do{
                j--;
            }while (arr[j]>pivot);

            if(i>=j){
                return j;
            }
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }

    }
    static  void quicksort(int[] arr,int low,int high){
        if(low<high){
            int pi=partition(arr,low,high);
            System.out.println(pi);
            quicksort(arr,low,pi-1);
            quicksort(arr,pi+1,high);
        }
    }
    public static void main(String[] args) {

        int [] arr={10,9,8,7,6,5};
        int n=arr.length;
//        System.out.println(n);
        quicksort(arr,0,n-1);
        System.out.print("Sorted ans = ");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i]+", ");
        }
    }
}
