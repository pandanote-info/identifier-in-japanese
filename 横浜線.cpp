//
// See https://pandanote.info/?p=9177 for details.
//
using namespace std;

#include <iostream>
#include <string>
#include <vector>

typedef struct {
  int 乗降客数;
  string 駅名;
} 駅の情報;

class 路線の情報 {
public:
  string 路線名;
  string 起点;
  string 終点;
};

ostream &operator<<(ostream &out, const 路線の情報 &情報) {
  return out << 情報.路線名 << ":" << 情報.起点 << "-" << 情報.終点;
}

int main(int 引数の数, char **引数) {
  vector<駅の情報> 横浜線の駅;

  駅の情報 鴨居;
  鴨居.駅名 = "鴨居駅";
  鴨居.乗降客数 = 29426;

  駅の情報 小机;
  小机.駅名 = "小机駅";
  小机.乗降客数 = 7773;

  駅の情報 新横浜;
  新横浜.駅名 = "新横浜駅";
  新横浜.乗降客数 = 41089;

  横浜線の駅.push_back(鴨居);
  横浜線の駅.push_back(小机);
  横浜線の駅.push_back(新横浜);

  for (vector<駅の情報>::iterator 変数 = 横浜線の駅.begin();
       変数 != 横浜線の駅.end();
       ++変数) {
    cout << (*変数).駅名 << ":" << (*変数).乗降客数 << endl;
  }

  路線の情報 横浜線の情報;
  横浜線の情報.路線名 = "横浜線";
  横浜線の情報.起点 = "東神奈川";
  横浜線の情報.終点 = "八王子";
  cout << 横浜線の情報 << endl;
}
