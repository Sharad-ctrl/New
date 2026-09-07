class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int lo = 1;
         int high = n-2;
         while(lo<=high){
            int mid = (lo+high)/2;
            if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1] ) return mid;
            else if( arr[mid] > arr[mid+1]) high = mid-1;
            else lo = mid+1;

         }

    //     int indx;
    //     int min = 0;
    //    for(int i=0;i<n;i++){
    //     if(arr[i] >min) {
    //         min = arr[i];
    //         indx  = i;
    //     }
    //    }
    //    return indx;
    return 100;
        }
};