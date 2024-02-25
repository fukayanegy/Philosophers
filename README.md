# Global Rules
必須パート用のプログラムとボーナスパート用のプログラムを書かなければならない。  
(ボーナス・パートを行うことにした場合）。どちらも以下のルールに従わなければならない：  
- グローバル変数の使用は禁止する！  
- プログラムは以下の引数を取ること：  
[number_of_philosophers][time_to_die][time_to_eat][time_to_sleep]。  
number_of_times_each_philosopher_must_eat] [number_of_times_each_philosopher_must_eat]。  
◦ [哲学者の数]：  
哲学者の数とフォークの数。  
time_to_die (ミリ秒)]：  
最後の食事が始まってから、あるいはシミュレーションが始まってからtime_to_dieミリ秒以内に食事を開始しなかった場合、その哲学者は死ぬ。  
◦ [time_to_eat（ミリ秒）]：  
哲学者が食事をするまでの時間。その間、2本のフォークを持つ必要がある。  
◦ [time_to_sleep (in milliseconds)]：  
哲学者が睡眠に費やす時間。  
◦ [number_of_times_each_philosopher_must_eat（オプション引数）]：  
すべての哲学者が[number_of_times_each_philosopher_must_eat]回以上食事をした場合：  
回以上食べた場合、シミュレーションは停止します。指定がない場合、哲学者が死亡した時点でシミュレーションは停止します。  
- 各哲学者は1からnumber_of_philosophersまでの番号を持ちます。  
- 哲学者番号1は哲学者番号[number_of_philosophers]の隣に座ります。  
その他の哲学者番号Nは、哲学者番号N - 1と哲学者番号N + 1の間に位置する。  

# Ecternal functions
1. memset
2. printf
3. malloc
4. free
5. write
6. usleep
7. gettimeofday
8. pthread_create
9. pthread_detach

















































































































