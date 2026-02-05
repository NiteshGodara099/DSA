#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for (int i = 0; i<nums2.size(); i++)
        {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(), nums1.end());
        double median {0};
        if(nums1.size()%2==0)
        {
            median = (nums1[(nums1.size()/2)-1] + nums1[nums1.size()/2])/2.0;
        }
        else
        {
            median = static_cast<double>(nums1[nums1.size()/2]);
        }
        return median;

    }

int main (){
//  double d = 0;
//  while(cin>>d){
//     int i = d;
//     char c = i;
//     cout<<"d== "<<d<<endl;
//     cout<<"i== "<<i<<endl;
//     cout<<"char== "<<c<<endl;

    
//  }  
// int x = {7.8};
// cout<<"x = "<<x; 
   // int i = (10,20,500);
   // cout<<i;
   // vector<int> v {1, 5, 7, 8, 9, 10};
   // for (int x:v)
   // {
   //    cout<<x;
   // }
   // double a, b;
   // while (cin>>a>>b)
   // {
   //    if(a==b){
   //       cout<<"Both are equal"<<endl;
   //    }
   //    else if(a>b){
   //       cout<<b<<" is smaller"<<endl;
   //       cout<<a<<" is larger"<<endl;
   //    }
   //    else
   //    {
   //       cout<<a<<" is smaller"<<endl;
   //       cout<<b<<" is larger"<<endl;
   //    }
   // }
   
   // int n {0};
   // cout<<"Enter the Value of n: \n";
   // cin>>n;
   // for (int i = 0; i<n; i++){
   //    char A = 'a';
   //    for (int j = 0; j<i; j++)
   //    {
   //       cout<<A;
   //       A++;
   //    }
   //    cout<<endl;
   // for (int i = 1; i<=n; i+=1){
   //    for (int k = 0; k < n-i; k++)
   //    {
   //       cout<<" ";
   //    }
      
   //    for (int j = 0; j<2*i-1; j++)
   //    {
   //       cout<<"*";
   //    }
   //    cout<<endl;
   // }
   // for (int i = n-1; i>0; i--)
   // {
   //    for (int j = 0; j<n-i; j++)
   //    {
   //       cout<<" ";
   //    }
   //    for (int j = 0; j<2*i-1; j++)
   //    {
   //       cout<<"*";
   //    }
      
   //    cout<<endl;
   // }
   // return 0;
   // vector <int> nums {1, 2, 3, 3};
   // if(nums.size()==0)
   // {
   //    cout<<0;
   // }
   //    int candidate = nums[0];
   //    int vote {1};
   //    for (int i = 0; i<nums.size(); i++){
   //       if (i == candidate)
   //       {
   //          vote++;
   //       }
   //       else
   //       {
   //          vote--;
   //       }
        
   //    }
   
   // if (vote > nums.size()/2 ){
   //    cout<< true;
   // }
   // else{
   //    cout<< false;
   // }
   // string s = "racecar";
   // string t = "carrace";
   // sort(s.begin(), s.end());
   // sort(t.begin(), t.end());
   // cout<< (s == t);
   vector<int> nums1 = {2, 2, 4, 4};
   vector<int> nums2 = {2, 2, 2, 4, 4};
   double median = findMedianSortedArrays(nums1, nums2);
   cout<<median;
}