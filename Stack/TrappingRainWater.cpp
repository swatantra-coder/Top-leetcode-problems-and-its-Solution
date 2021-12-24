// 42. Trapping Rain Water

 { 
        int n=height.size();
        int  mxl[n];
        int  mxr[n];
        mxl[0]=height[0];
        mxr[n-1]=height[n-1];
        int trap=0;
        int water[n];
        for(int i=1;i<n;i++)
        {
            mxl[i]=max(mxl[i-1],height[i]);
        }
        for(int i=n-2;i>=0;i--)
        {
            mxr[i]=max(mxr[i+1],height[i]);
        }
        for(int i=0;i<n;i++)
        {
            water[i]=min(mxr[i],mxl[i])-height[i];
        }
        for(int i=0;i<n;i++)
        {
            trap=trap+water[i];
        }
        return trap;
        
        
    }
