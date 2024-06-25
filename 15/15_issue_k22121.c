#include <stdio.h>
#include <time.h>

struct time_data {    //時刻データを格納しておく構造体
  int hour;
  int min;
};

int main(int argc, const char* argv[]){
  int aikan[100][2] = {{12,9},{12,25},{12,41},{12,57},{13,13},{13,29},{13,45},{14,1},{14,17},{14,33},{14,49},{15,5}     //時刻表をリストにまとめたもの
                      ,{15,21},{15,37},{15,53},{16,9},{16,25},{16,41},{16,57},{17,13},{17,29},{17,45},{18,1},{18,17}
                      ,{18,33},{18,49},{19,5},{19,21},{19,37},{19,52},{20,9},{20,25},{20,41},{20,57},{21,13},{21,29}
                      ,{21,45}};

  int aikan_bus[100][2] = {{12,27},{12,57},{13,27},{13,57},{14,27},{14,57},{15,27},{15,57},{16,27},{16,57},{17,10}
                          ,{17,27},{17,57},{18,10},{18,30},{18,57},{19,27},{19,48},{20,10},{20,50},{21,16},{21,51}};

  int linimo[100][2] = {{12,5},{12,13},{12,21},{12,29},{12,37},{12,45},{12,53},{13,1},{13,9},{13,17},{13,25},{13,33}
                      ,{13,41},{13,49},{13,57},{14,5},{14,13},{14,21},{14,29},{14,37},{14,45},{14,53},{15,1},{15,9}
                      ,{15,17},{15,25},{15,33},{15,41},{15,49},{15,57},{16,5},{16,13},{16,21},{16,29},{16,37},{16,45}
                      ,{16,53},{17,1},{17,9},{17,17},{17,25},{17,33},{17,41},{17,49},{17,57},{18,5},{18,13},{18,21}
                      ,{18,29},{18,37},{18,45},{18,53},{19,1},{19,9},{19,17},{19,25},{19,33},{19,41},{19,49},{19,57}
                      ,{20,5},{20,13},{20,21},{20,29},{20,37},{20,45},{20,53},{21,1},{21,17},{21,25},{21,34},{21,43}
                      ,{21,53}};

  int linimo_bus[100][2] = {{12,47},{13,47},{14,47},{15,37},{16,19},{17,3},{17,55},{18,25},{18,56},{19,26},{20,21}
                          ,{21,11}};

  int i=0, time1=0, time2=0, hour=0, min=0;
  struct time_data aikan_time, aikan_bus_time, linimo_time, linimo_bus_time, now;
  struct tm *local;
  time_t timer = time(NULL);    //現在時刻の取得

  local = localtime(&timer);    //取得した時刻をローカル時刻へ変換

  now.hour = (*local).tm_hour;    //変換した時刻を時間と分に分けて構造体へ格納
  now.min = (*local).tm_min;

  printf ("現在時刻 %d:%d\n",now.hour,now.min);
  time1 = now.hour *60 + now.min;    //時刻を比較しやすいように分へ変換

  while (aikan[i] != 0){    //愛環の時刻を一つずつ取り出し、現在時刻と比較して一番近い発車時刻を選び出す
    time2 = aikan[i][0] *60 + aikan[i][1];    //時刻を比較しやすいように分へ変換

    if (time1 < time2) break;

    i += 1;
  }

  aikan_time.hour = aikan[i][0];    //上で選び出した時刻を構造体へ格納
  aikan_time.min = aikan[i][1];
  //printf ("aikan_time %d:%d       ",aikan_time.hour, aikan_time.min);

  i= 0;

  while (linimo[i] != 0){    //リニモの時刻を一つずつ取り出し、現在時刻と比較して一番近い発車時刻を選び出す
    time2 = linimo[i][0] *60 + linimo[i][1];    //時刻を比較しやすいように分へ変換

    if (time1 < time2) break;

    i += 1;
  }

  linimo_time.hour = linimo[i][0];    //上で選び出した時刻を構造体へ格納
  linimo_time.min = linimo[i][1];
  //printf ("linimo_time %d:%d\n",linimo_time.hour, linimo_time.min);

  i= 0;
  time1 = aikan_time.hour *60 + aikan_time.min + 19;    //時刻を比較しやすいように分へ変換 移動、乗り換え時間を加算

  while (aikan_bus[i] != 0){    //バスの時刻を一つずつ取り出し、選び出した愛環の時刻と比較して一番近い発車時刻を選び出す
    time2 = aikan_bus[i][0] *60 + aikan_bus[i][1];    //時刻を比較しやすいように分へ変換

    if (time1 < time2) break;

    i += 1;
  }

  aikan_bus_time.hour = aikan_bus[i][0];    //上で選び出した時刻を構造体へ格納
  aikan_bus_time.min = aikan_bus[i][1];
  //printf ("aikan_bus_time %d:%d  ",aikan_bus_time.hour, aikan_bus_time.min);

  i= 0;
  time1 = linimo_time.hour *60 + linimo_time.min + 19;    //時刻を比較しやすいように分へ変換 移動、乗り換え時間を加算

  while (linimo_bus[i] != 0){    //バスの時刻を一つずつ取り出し、選び出したリニモの時刻と比較して一番近い発車時刻を選び出す
    time2 = linimo_bus[i][0] *60 + linimo_bus[i][1];    //時刻を比較しやすいように分へ変換

    if (time1 < time2) break;

    i += 1;
  }

  linimo_bus_time.hour = linimo_bus[i][0];    //上で選び出した時刻を構造体へ格納
  linimo_bus_time.min = linimo_bus[i][1];
  //printf ("linimo_bus_time %d:%d\n\n",linimo_bus_time.hour, linimo_bus_time.min);

  time1 = aikan_bus_time.hour *60 + aikan_bus_time.min + 17;    //時刻を比較しやすいように分へ変換 移動時間を加算
  time2 = linimo_bus_time.hour *60 + linimo_bus_time.min + 30;

  if (time1 < time2){    //愛環とリニモの帰宅時間を比較
    printf ("愛知環状鉄道で帰宅した方が早いです。(%d:%d)\n",time1/60, time1%60);
    printf ("愛環発車時刻 %d:%d  バス発車時刻 %d:%d",aikan_time.hour, aikan_time.min, aikan_bus_time.hour, aikan_bus_time.min);
  }
  else if (time1 > time2){
    printf ("リニモで帰宅した方が早いです。(%d:%d)\n",time2/60, time2%60);
    printf ("リニモ発車時刻 %d:%d  バス発車時刻 %d:%d",linimo_time.hour, linimo_time.min, linimo_bus_time.hour, linimo_bus_time.min);
  }
  else {
    printf ("どちらで帰宅しても同じ時間です。");
  }

  return 0;
}