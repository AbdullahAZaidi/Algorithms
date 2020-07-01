int birthday(vector<int> s, int d, int m) {
    int sum = 0;
    int count = 0;
    for (int i = 0; i < s.size()-1; i++){
        for (int j = i; j <i+m; j++){
            sum+= s[j];
        }
      if (sum==d){
          count+=1;
    }
    sum = 0;
    }
       return count;
}
