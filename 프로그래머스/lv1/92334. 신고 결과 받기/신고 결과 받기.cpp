#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    vector<string> v;
    vector<string> over_report;
    vector<string> send_mail;
    vector<int> index;
    int report_count = 0;
    int idx= 0;
    sort(report.begin(),report.end());
    report.erase(unique(report.begin(),report.end()), report.end());
    for (int i = 0; i < report.size(); i++){
        idx = report[i].find(' ');
        v.push_back(report[i].substr(idx,report[i].size()));
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++){
        int count=1;
       for (int j = i+1; j < v.size(); j++){
           if (v[i] ==v[j]) {
               count ++;
               i++;
           }
       }
        if (count >= k) {
            index.push_back(i);
        }
    }
    for ( int i = 0 ; i < index.size(); i ++ ){
        over_report.push_back(v[index[i]]);
    }
    for (int i = 0; i < over_report.size(); i++){
        for ( int j = 0; j<report.size(); j++){
            idx = report[j].find(' ');
        if (over_report[i]  == report[j].substr(idx,report[j].size())){
            send_mail.push_back(report[j].substr(0,idx));
        }
        }
    }
    for (int i = 0; i < id_list.size(); i++){
        int mail_count =0;
        for (int k = 0; k < send_mail.size(); k++){
            if (id_list[i] == send_mail[k]){
                mail_count++;
            }
        }
        answer.push_back(mail_count);
    }
    return answer;
}