int low=matrix[0][0], high=matrix[matrix.size()-1][matrix[0].size()-1]+1;
        while(low<high){
            int mid=low+(high-low)/2;
            int c=0, j=matrix[0].size()-1;
            for(int i=0; i<matrix.size(); i++){
                while(j>=0 && matrix[i][j]>mid) j--;
                c+=(j+1);
            }
            if(c<k) low=mid+1;
            else high=mid;
        }
        return low;