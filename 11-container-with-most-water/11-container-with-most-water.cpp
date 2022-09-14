class Solution {
public:
    int maxArea(vector<int>& arr) {
      int n=arr.size();
        int area=0,h,b,j=arr.size()-1,i=0;
      while(i<j)
      {
        h=min(arr[i],arr[j]); 
        b=j-i;
        area=max(area,b*h);
        if(arr[i]<arr[j])i++;
        else j--;
        
      }
      return area;
    }
};
