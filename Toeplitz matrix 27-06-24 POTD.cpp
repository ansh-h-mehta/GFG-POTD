bool solve(int i,int j,vector<vector<int>>&mat){
    bool flag=true;
    
    while(i<mat.size()-1 && j<mat[0].size()-1){
        if(mat[i][j]==mat[i+1][j+1])
        flag=true;
        else
        return false;
        
        i=i+1;
        j=j+1;
    }
    
    return flag;
}

bool isToepliz(vector<vector<int>>& mat) {
    bool flag=true;
    
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            flag=solve(i,j,mat);
            
            if(flag==false)
            return false;
            
        }
    }
    
    return flag;
}