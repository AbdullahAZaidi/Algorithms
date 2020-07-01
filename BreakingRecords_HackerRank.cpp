vector<int> breakingRecords(vector<int> scores) {

      vector<int> highest {scores[0]};
      vector<int> lowest {scores[0]};
      vector<int> record;
      int count_h =0;
      int count_l = 0;
      for (int i = 1; i < scores.size(); i++){
          if (scores[i]>highest[0]){
            highest.clear();
            highest.push_back(scores[i]);
            count_h+=1;
          }
          else if (scores[i]<lowest[0]){
            lowest.clear();
            lowest.push_back(scores[i]);
            count_l+=1;

          }

      }
    record.push_back(count_h);
    record.push_back(count_l);
    cout << count_h << " " << count_l << endl;
    return record ;
}
