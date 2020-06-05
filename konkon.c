#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *kansaiben(char *c, int len, size_t *length);
/*
int main()
{
    char c[1024] = { 0 };
    scanf("%s", c);
    printf("%s", kansaiben(c));
}
*/

char *kansaiben(char *c, int len , size_t *length)
{
    char dict[2][271][128] = { 0 };
   //dict[0] == tokyo, dict[1] == kansai
    //printf("---------------------------\n");
    //for (int i = 0;i < len; i++){printf("%c", c[i]);}
    char *r = (char *)calloc(2048*16, sizeof(char));
    
    {
        strcpy(dict[0][0], "こんばんわ");
        strcpy(dict[1][0], "おこんばんわ");
        strcpy(dict[0][1], "ありがとうございました");
        strcpy(dict[1][1], "おおきに");
        strcpy(dict[0][2], "本当");
        strcpy(dict[1][2], "ほんま");
        strcpy(dict[0][3], "あなた");
        strcpy(dict[1][3], "あんさん");
        strcpy(dict[0][4], "あんな");
        strcpy(dict[1][4], "あないな");
        strcpy(dict[0][5], "りますので");
        strcpy(dict[1][5], "るさかいに");
        strcpy(dict[0][6], "りますから");
        strcpy(dict[1][6], "るさかいに");
        strcpy(dict[0][7], "あります");
        strcpy(dict[1][7], "あるんや");
        strcpy(dict[0][8], "あるいは");
        strcpy(dict[1][8], "せやなかったら");
        strcpy(dict[0][9], "或いは");
        strcpy(dict[1][9], "せやなかったら");
        strcpy(dict[0][10], "ありません");
        strcpy(dict[1][10], "おまへん");
        strcpy(dict[0][11], "ありました");
        strcpy(dict[1][11], "おました");
        strcpy(dict[0][12], "いない");
        strcpy(dict[1][12], "おらへん");
        strcpy(dict[0][13], "いままでの");
        strcpy(dict[1][13], "ムカシからの");
        strcpy(dict[0][14], "いままで");
        strcpy(dict[1][14], "本日この時まで");
        strcpy(dict[0][15], "今まで");
        strcpy(dict[1][15], "本日この時まで");
        strcpy(dict[0][16], "今までの");
        strcpy(dict[1][16], "ムカシからの");
        strcpy(dict[0][17], "いまどき");
        strcpy(dict[1][17], "きょうび");
        strcpy(dict[0][18], "いわゆる なんちうか，");
        strcpy(dict[1][18], "ようみなはんいわはるとこの");
        strcpy(dict[0][19], "思いますが");
        strcpy(dict[1][19], "思うんやが");
        strcpy(dict[0][20], "思います");
        strcpy(dict[1][20], "思うで");
        strcpy(dict[0][21], "いただいた");
        strcpy(dict[1][21], "もろた");
        strcpy(dict[0][22], "いただきます");
        strcpy(dict[1][22], "もらうで");
        strcpy(dict[0][23], "いただきました");
        strcpy(dict[1][23], "もろた");
        strcpy(dict[0][24], "いくら");
        strcpy(dict[1][24], "なんぼ");
        strcpy(dict[0][25], "いつも");
        strcpy(dict[1][25], "毎日毎晩壱年中");
        strcpy(dict[0][26], "いるか");
        strcpy(dict[1][26], "おるか");
        strcpy(dict[0][27], "いますので");
        strcpy(dict[1][27], "おるさかいに");
        strcpy(dict[0][28], "いますから");
        strcpy(dict[1][28], "おるさかいに");
        strcpy(dict[0][29], "いちど");
        strcpy(dict[1][29], "いっぺん");
        strcpy(dict[0][30], "一度");
        strcpy(dict[1][30], "いっぺん");
        strcpy(dict[0][31], "いますが");
        strcpy(dict[1][31], "おるけどダンさん");
        strcpy(dict[0][32], "いました");
        strcpy(dict[1][32], "おったんや");
        strcpy(dict[0][33], "います");
        strcpy(dict[1][33], "いますわ");
        strcpy(dict[0][34], "エラー");
        strcpy(dict[1][34], "アヤマチ");
        strcpy(dict[0][35], "えない");
        strcpy(dict[1][35], "えへん");
        strcpy(dict[0][36], "おかしな");
        strcpy(dict[1][36], "ケッタイな");
        strcpy(dict[0][37], "おきました");
        strcpy(dict[1][37], "おいたんや");
        strcpy(dict[0][38], "おっと");
        strcpy(dict[1][38],
               "おっとドッコイたこやきはうまいで...あかん,脱線や");
        strcpy(dict[0][39], "かなあ");
        strcpy(dict[1][39], "かいな");
        strcpy(dict[0][40], "かならず");
        strcpy(dict[1][40], "じぇったい");
        strcpy(dict[0][41], "かわいい");
        strcpy(dict[1][41], "メンコイ");
        strcpy(dict[0][42], "おそらく");
        strcpy(dict[1][42], "ワイが思うには");
        strcpy(dict[0][43], "恐らく");
        strcpy(dict[1][43], "ワイが思うには");
        strcpy(dict[0][44], "おもしろい");
        strcpy(dict[1][44], "オモロイ");
        strcpy(dict[0][45], "面白い");
        strcpy(dict[1][45], "おもろい");
        strcpy(dict[0][46], "ください");
        strcpy(dict[1][46], "おくんなはれ");
        strcpy(dict[0][47], "詳しく");
        strcpy(dict[1][47], "ねちっこく");
        strcpy(dict[0][48], "くわしく");
        strcpy(dict[1][48], "ねちっこく");
        strcpy(dict[0][49], "けない");
        strcpy(dict[1][49], "けへん");
        strcpy(dict[0][50], "ございます");
        strcpy(dict[1][50], "おます");
        strcpy(dict[0][51], "ございました");
        strcpy(dict[1][51], "おました");
        strcpy(dict[0][52], "こちら");
        strcpy(dict[1][52], "ウチ");
        strcpy(dict[0][53], "僕");
        strcpy(dict[1][53], "ワテ");
        strcpy(dict[0][53], "俺");
        strcpy(dict[1][53], "わて");
        strcpy(dict[0][54], "こんな");
        strcpy(dict[1][54], "こないな");
        strcpy(dict[0][55], "この頃");
        strcpy(dict[1][55], "きょうび");
        strcpy(dict[0][56], "こども");
        strcpy(dict[1][56], "ガキ");
        strcpy(dict[0][57], "このごろ");
        strcpy(dict[1][57], "きょうび");
        strcpy(dict[0][58], "コロン");
        strcpy(dict[1][58], "てんてん");
        strcpy(dict[0][59], "下さい");
        strcpy(dict[1][59], "くれへんかの");
        strcpy(dict[0][60], "さようなら");
        strcpy(dict[1][60], "ほなさいなら");
        strcpy(dict[0][61], "さん");
        strcpy(dict[1][61], "はん");
        strcpy(dict[0][62], "しかし");
        strcpy(dict[1][62], "せやけどダンさん");
        strcpy(dict[0][63], "おはよう");
        strcpy(dict[1][63], "おはようさん");
        strcpy(dict[0][64], "しかたない");
        strcpy(dict[1][64], "しゃあない");
        strcpy(dict[0][65], "仕方ない");
        strcpy(dict[1][65], "しゃあない");
        strcpy(dict[0][66], "しなければ");
        strcpy(dict[1][66], "せな");
        strcpy(dict[0][67], "しない");
        strcpy(dict[1][67], "せん");
        strcpy(dict[0][68], "しばらく");
        strcpy(dict[1][68], "ちーとの間");
        strcpy(dict[0][69], "している");
        strcpy(dict[1][69], "しとる");
        strcpy(dict[0][70], "しました");
        strcpy(dict[1][70], "したんや");
        strcpy(dict[0][71], "しまいました");
        strcpy(dict[1][71], "しもたんや");
        strcpy(dict[0][72], "しますか");
        strcpy(dict[1][72], "しまっか");
        strcpy(dict[0][73], "しますと");
        strcpy(dict[1][73], "すやろ、ほしたら");
        strcpy(dict[0][74], "しまった");
        strcpy(dict[1][74], "しもた");
        strcpy(dict[0][75], "しますので");
        strcpy(dict[1][75], "するさかいに");
        strcpy(dict[0][76], "じゃ");
        strcpy(dict[1][76], "や");
        strcpy(dict[0][77], "するとき");
        strcpy(dict[1][77], "するっちうとき");
        strcpy(dict[0][78], "すべて");
        strcpy(dict[1][78], "ずぅぇえええぇぇええんぶ");
        strcpy(dict[0][79], "すくなくとも");
        strcpy(dict[1][79], "なんぼなんでも");
        strcpy(dict[0][80], "少なくとも");
        strcpy(dict[1][80], "なんぼなんでも");
        strcpy(dict[0][81], "ずに");
        strcpy(dict[1][81], "んと");
        strcpy(dict[0][82], "すごい");
        strcpy(dict[1][82], "どエライ");
        strcpy(dict[0][83], "少し");
        strcpy(dict[1][83], "ちびっと");
        strcpy(dict[0][84], "スリッパ");
        strcpy(dict[1][84], "パッスリ");
        strcpy(dict[0][85], "せない");
        strcpy(dict[1][85], "せへん");
        strcpy(dict[0][86], "そこで");
        strcpy(dict[1][86], "ほんで");
        strcpy(dict[0][87], "そして");
        strcpy(dict[1][87], "ほんで");
        strcpy(dict[0][88], "そんな");
        strcpy(dict[1][88], "そないな");
        strcpy(dict[0][89], "そうだろ");
        strcpy(dict[1][89], "そうやろ");
        strcpy(dict[0][90], "それから");
        strcpy(dict[1][90], "ほんで");
        strcpy(dict[0][91], "それでは");
        strcpy(dict[1][91], "ほなら");
        strcpy(dict[0][92], "たとえば");
        strcpy(dict[1][92], "例あげたろか，たとえばやなあ");
        strcpy(dict[0][93], "例えば");
        strcpy(dict[1][93], "例あげたろか，たとえばやなあ");
        strcpy(dict[0][94], "たのです");
        strcpy(dict[1][94], "たちうワケや");
        strcpy(dict[0][95], "たので");
        strcpy(dict[1][95], "たさかい");
        strcpy(dict[0][96], "ただし");
        strcpy(dict[1][96], "せやけど");
        strcpy(dict[0][97], "たぶん");
        strcpy(dict[1][97],
               "タブン...たぶんやで，わいもよーしらんがタブン");
        strcpy(dict[0][98], "たくさん");
        strcpy(dict[1][98], "ようけ");
        strcpy(dict[0][99], "だった");
        strcpy(dict[1][99], "やった");
        strcpy(dict[0][100], "だけど");
        strcpy(dict[1][100], "やけど");
        strcpy(dict[0][101], "だから");
        strcpy(dict[1][101], "やから");
        strcpy(dict[0][102], "だが");
        strcpy(dict[1][102], "やけど");
        strcpy(dict[0][103], "だろ");
        strcpy(dict[1][103], "やろ");
        strcpy(dict[0][104], "だね。");
        strcpy(dict[1][104], "やね。");
        strcpy(dict[0][105], "ちなみに");
        strcpy(dict[1][105], "余計なお世話やけど");
        strcpy(dict[0][106], "ちょっと");
        strcpy(dict[1][106], "ちーとばかし");
        strcpy(dict[0][107], "ったし");
        strcpy(dict[1][107], "ったことやねんし");
        strcpy(dict[0][108], "つまり");
        strcpy(dict[1][108],
               " ゴチャゴチャゆうとる場合やあれへん，要は");
        strcpy(dict[0][109], "つまらない");
        strcpy(dict[1][109], "しょーもない");
        strcpy(dict[0][110], "であった");
        strcpy(dict[1][110], "やった");
        strcpy(dict[0][111], "ている");
        strcpy(dict[1][111], "とる");
        strcpy(dict[0][112], "ていただいた");
        strcpy(dict[1][112], "てもろた");
        strcpy(dict[0][113], "ていただきます");
        strcpy(dict[1][113], "てもらうで");
        strcpy(dict[0][114], "ていただく");
        strcpy(dict[1][114], "てもらうで");
        strcpy(dict[0][115], "ていただ");
        strcpy(dict[1][115], "ていただ");
        strcpy(dict[0][116], "ていた");
        strcpy(dict[1][116], "とった");
        strcpy(dict[0][117], "多く");
        strcpy(dict[1][117], "ようけ");
        strcpy(dict[0][118], "ですか");
        strcpy(dict[1][118], "やろか");
        strcpy(dict[0][119], "ですよ");
        strcpy(dict[1][119], "や");
        strcpy(dict[0][120], "ですが");
        strcpy(dict[1][120], "やけどアンタ");
        strcpy(dict[0][121], "ですね");
        strcpy(dict[1][121], "やね");
        strcpy(dict[0][122], "でした");
        strcpy(dict[1][122], "やった");
        strcpy(dict[0][123], "でしょう");
        strcpy(dict[1][123], "でっしゃろ");
        strcpy(dict[0][124], "できない");
        strcpy(dict[1][124], "でけへん");
        strcpy(dict[0][125], "ではない");
        strcpy(dict[1][125], "ではおまへん");
        strcpy(dict[0][126], "です");
        strcpy(dict[1][126], "や");
        strcpy(dict[0][127], "てない");
        strcpy(dict[1][127], "てへん");
        strcpy(dict[0][128], "どういうわけか");
        strcpy(dict[1][128], "なんでやろかわいもよーしらんが");
        strcpy(dict[0][129], "どうだ");
        strcpy(dict[1][129], "どや");
        strcpy(dict[0][130], "どこか");
        strcpy(dict[1][130], "どこぞ");
        strcpy(dict[0][131], "どんな");
        strcpy(dict[1][131], "どないな");
        strcpy(dict[0][132], "という");
        strcpy(dict[1][132], "ちう");
        strcpy(dict[0][133], "とすれば");
        strcpy(dict[1][133], "とするやろ、ほしたら");
        strcpy(dict[0][134], "ところが");
        strcpy(dict[1][134], "トコロが");
        strcpy(dict[0][135], "ところ");
        strcpy(dict[1][135], "トコ");
        strcpy(dict[0][136], "とても");
        strcpy(dict[1][136], "どエライ");
        strcpy(dict[0][137], "なぜか");
        strcpy(dict[1][137], "なんでやろかわいもよーしらんが");
        strcpy(dict[0][138], "なった");
        strcpy(dict[1][138], "なりよった");
        strcpy(dict[0][139], "なのですが");
        strcpy(dict[1][139], "なんやけど");
        strcpy(dict[0][140], "なのです");
        strcpy(dict[1][140], "なんやこれがホンマに");
        strcpy(dict[0][141], "なので");
        strcpy(dict[1][141], "やので");
        strcpy(dict[0][142], "なぜ");
        strcpy(dict[1][142], "なんでやねん");
        strcpy(dict[0][143], "など");
        strcpy(dict[1][143], "やらなんやら");
        strcpy(dict[0][144], "ならない");
        strcpy(dict[1][144], "ならへん");
        strcpy(dict[0][145], "なりました");
        strcpy(dict[1][145], "なったんや");
        strcpy(dict[0][146], "のちほど");
        strcpy(dict[1][146], "ノチカタ");
        strcpy(dict[0][147], "のです");
        strcpy(dict[1][147], "のや");
        strcpy(dict[0][148], "はじめまして");
        strcpy(dict[1][148], "はじめてお目にかかりまんなあ");
        strcpy(dict[0][149], "はじめて");
        strcpy(dict[1][149],
               "この世におぎゃあいうて生まれてはじめて");
        strcpy(dict[0][150], "びっくり仰天");
        strcpy(dict[1][150], "クリビツテンギョー");
        strcpy(dict[0][151], "ひとたち");
        strcpy(dict[1][151], "ヤカラ");
        strcpy(dict[0][152], "人たち");
        strcpy(dict[1][152], "ヤカラ");
        strcpy(dict[0][153], "人達");
        strcpy(dict[1][153], "ヤカラ");
        strcpy(dict[0][154], "ヘルプ");
        strcpy(dict[1][154], "助け船");
        strcpy(dict[0][155], "ほんとう");
        strcpy(dict[1][155], "ホンマ");
        strcpy(dict[0][156], "ほんと");
        strcpy(dict[1][156], "ホンマ");
        strcpy(dict[0][157], "まいますので");
        strcpy(dict[1][157], "まうさかいに");
        strcpy(dict[0][158], "まったく");
        strcpy(dict[1][158], "まるっきし");
        strcpy(dict[0][159], "全く");
        strcpy(dict[1][159], "まるっきし");
        strcpy(dict[0][160], "ません");
        strcpy(dict[1][160], "まへん");
        strcpy(dict[0][161], "ました");
        strcpy(dict[1][161], "たんや");
        strcpy(dict[0][162], "ますか");
        strcpy(dict[1][162], "まっしゃろか");
        strcpy(dict[0][163], "ますが");
        strcpy(dict[1][163], "まっけど");
        strcpy(dict[0][164], "ましょう");
        strcpy(dict[1][164], "まひょ");
        strcpy(dict[0][165], "ますので");
        strcpy(dict[1][165], "よるさかいに");
        strcpy(dict[0][166], "むずかしい");
        strcpy(dict[1][166], "ややこしい");
        strcpy(dict[0][167], "めない");
        strcpy(dict[1][167], "めへん");
        strcpy(dict[0][168], "メッセージ");
        strcpy(dict[1][168], "文句");
        strcpy(dict[0][169], "もらった");
        strcpy(dict[1][169], "もろた");
        strcpy(dict[0][170], "もらって");
        strcpy(dict[1][170], "もろて");
        strcpy(dict[0][171], "よろしく");
        strcpy(dict[1][171], "シブロクヨンキュー");
        strcpy(dict[0][172], "ります");
        strcpy(dict[1][172], "るんや");
        strcpy(dict[0][173], "らない");
        strcpy(dict[1][173], "りまへん");
        strcpy(dict[0][174], "りない");
        strcpy(dict[1][174], "りまへん");
        strcpy(dict[0][175], "れない");
        strcpy(dict[1][175], "れへん");
        strcpy(dict[0][176], "ます");
        strcpy(dict[1][176], "まんねん");
        strcpy(dict[0][177], "もっとも");
        strcpy(dict[1][177], "もっとも");
        strcpy(dict[0][178], "もっと");
        strcpy(dict[1][178],
               "もっともっともっともっともっともっともっともっともっと");
        strcpy(dict[0][179], "ようやく");
        strcpy(dict[1][179], "ようやっと");
        strcpy(dict[0][180], "よろしく");
        strcpy(dict[1][180], "よろしゅう");
        strcpy(dict[0][181], "るのです");
        strcpy(dict[1][181], "るちうワケや");
        strcpy(dict[0][182], "だ。");
        strcpy(dict[1][182], "や。");
        strcpy(dict[0][183], "りました");
        strcpy(dict[1][183], "ったんや");
        strcpy(dict[0][184], "る。");
        strcpy(dict[1][184], "るちうわけや。");
        strcpy(dict[0][185], "い。");
        strcpy(dict[1][185], "いちうわけや。");
        strcpy(dict[0][186], "た。");
        strcpy(dict[1][186], "たちうわけや。");
        strcpy(dict[0][187], "う。");
        strcpy(dict[1][187], "うわ。");
        strcpy(dict[0][188], "わがまま");
        strcpy(dict[1][188], "ワガママ");
        strcpy(dict[0][189], "まま");
        strcpy(dict[1][189], "まんま");
        strcpy(dict[0][190], "われわれ");
        strcpy(dict[1][190], "ウチら");
        strcpy(dict[0][191], "わたし");
        strcpy(dict[1][191], "わい");
        strcpy(dict[0][192], "私");
        strcpy(dict[1][192], "ウチ");
        strcpy(dict[0][193], "アタシ");
        strcpy(dict[1][193], "ウチ");
        strcpy(dict[0][194], "わない");
        strcpy(dict[1][194], "いまへん");
        strcpy(dict[0][195], "本当");
        strcpy(dict[1][195], "ホンマ");
        strcpy(dict[0][196], "全て");
        strcpy(dict[1][196], "みな");
        strcpy(dict[0][197], "全部");
        strcpy(dict[1][197], "ぜええんぶひとつのこらず");
        strcpy(dict[0][198], "全然");
        strcpy(dict[1][198], "さらさら");
        strcpy(dict[0][199], "ぜんぜん");
        strcpy(dict[1][199], "サラサラ");

        strcpy(dict[0][200], "日本語");
        strcpy(dict[1][200], "祖国語");
        strcpy(dict[0][201], "日本");
        strcpy(dict[1][201], "大日本帝国");
        strcpy(dict[0][202], "便利");
        strcpy(dict[1][202], "便器...おっとちゃうわ，便利");
        strcpy(dict[0][203], "当局");
        strcpy(dict[1][203], "わい");
        strcpy(dict[0][204], "大変な");
        strcpy(dict[1][204], "エライ");
        strcpy(dict[0][205], "大変");
        strcpy(dict[1][205], "エライ");
        strcpy(dict[0][206], "非常に");
        strcpy(dict[1][206], "どエライ");
        strcpy(dict[0][207], "違う");
        strcpy(dict[1][207], "ちゃう");
        strcpy(dict[0][208], "ANK");
        strcpy(dict[1][208],
               "アンコ.......ウソやウソ,ANKやわ,はっはっ,");
        strcpy(dict[0][209], "古い");
        strcpy(dict[1][209], "古くさい");
        strcpy(dict[0][210], "最近");
        strcpy(dict[1][210], "きょうび");
        strcpy(dict[0][211], "以前");
        strcpy(dict[1][211], "よりどエライ昔");
        strcpy(dict[0][212], "無効");
        strcpy(dict[1][212], "チャラ");
        strcpy(dict[0][213], "中止");
        strcpy(dict[1][213], "ヤメ");
        strcpy(dict[0][214], "外国");
        strcpy(dict[1][214], "異国");
        strcpy(dict[0][215], "海外");
        strcpy(dict[1][215], "アチラ");
        strcpy(dict[0][216], "難しい");
        strcpy(dict[1][216], "ややこしい");
        strcpy(dict[0][217], "面倒");
        strcpy(dict[1][217], "難儀");
        strcpy(dict[0][218], "遅い");
        strcpy(dict[1][218], "とろい");
        strcpy(dict[0][219], "良い");
        strcpy(dict[1][219], "ええ");
        strcpy(dict[0][220], "入れる");
        strcpy(dict[1][220], "ぶちこむ");
        strcpy(dict[0][221], "コギャル");
        strcpy(dict[1][221], "セーラー服のねえちゃん");
        strcpy(dict[0][222], "女子高生");
        strcpy(dict[1][222], "セーラー服のねえちゃん");
        strcpy(dict[0][223], "来た");
        strcpy(dict[1][223], "攻めて来よった");
        strcpy(dict[0][224], "同時");
        strcpy(dict[1][224], "いっぺん");
        strcpy(dict[0][225], "先頭");
        strcpy(dict[1][225], "アタマ");
        strcpy(dict[0][226], "破壊");
        strcpy(dict[1][226], "カンペキに破壊");
        strcpy(dict[0][227], "挿入");
        strcpy(dict[1][227],
               "ソーニュー(うひひひ...おっとカンニンや)");
        strcpy(dict[0][228], "置換");
        strcpy(dict[1][228], "とっかえ");
        strcpy(dict[0][229], "無視");
        strcpy(dict[1][229], "シカト");
        strcpy(dict[0][230], "注意");
        strcpy(dict[1][230], "用心");
        strcpy(dict[0][231], "最後");
        strcpy(dict[1][231], "ケツ");
        strcpy(dict[0][232], "我々");
        strcpy(dict[1][232], "うちら");
        strcpy(dict[0][233], "初心者");
        strcpy(dict[1][233], "どシロウト");
        strcpy(dict[0][234], "付属");
        strcpy(dict[1][234], "オマケ");
        strcpy(dict[0][235], "誤って");
        strcpy(dict[1][235], "あかーんいうて誤って");
        strcpy(dict[0][236], "商人");
        strcpy(dict[1][236], "あきんど");
        strcpy(dict[0][237], "商売");
        strcpy(dict[1][237], "ショーバイ");
        strcpy(dict[0][238], "商業");
        strcpy(dict[1][238], "ショーバイ");
        strcpy(dict[0][239], "誰");
        strcpy(dict[1][239], "どなたはん");
        strcpy(dict[0][240], "再度");
        strcpy(dict[1][240], "もっかい");
        strcpy(dict[0][241], "再び");
        strcpy(dict[1][241], "もっかい");
        strcpy(dict[0][242], "自動的に");
        strcpy(dict[1][242],
               "なあんもせんとホッタラかしといても");
        strcpy(dict[0][243], "無料");
        strcpy(dict[1][243], "タダ");
        strcpy(dict[0][244], "変化");
        strcpy(dict[1][244], "変身");
        strcpy(dict[0][245], "右");
        strcpy(dict[1][245], "右翼");
        strcpy(dict[0][246], "左");
        strcpy(dict[1][246], "左翼");
        strcpy(dict[0][247], "自分");
        strcpy(dict[1][247], "オノレ");
        strcpy(dict[0][248], "とても");
        strcpy(dict[1][248], "ごっつ");
        strcpy(dict[0][249], "成功");
        strcpy(dict[1][249], "性交...ひひひ,ウソや,成功");
        strcpy(dict[0][250], "失敗");
        strcpy(dict[1][250], "シッパイ");
        strcpy(dict[0][251], "優先");
        strcpy(dict[1][251], "ヒイキ");
        strcpy(dict[0][252], "タクシー");
        strcpy(dict[1][252], "タク");
        strcpy(dict[0][253], "カレンダー");
        strcpy(dict[1][253], "日メクリ");
        strcpy(dict[0][254], "たばこ");
        strcpy(dict[1][254], "モク");
        strcpy(dict[0][255], "特長");
        strcpy(dict[1][255], "ええトコ");
        strcpy(dict[0][256], "概要");
        strcpy(dict[1][256], "おーまかなトコ");
        strcpy(dict[0][257], "概念");
        strcpy(dict[1][257], "能書き");
        strcpy(dict[0][258], "アルゴリズム");
        strcpy(dict[1][258], "理屈");
        strcpy(dict[0][259], "実用的");
        strcpy(dict[1][259], "アホでも使えるよう");
        strcpy(dict[0][260], "何も");
        strcpy(dict[1][260], "なあんも");
        strcpy(dict[0][261], "何か");
        strcpy(dict[1][261], "何ぞ");
        strcpy(dict[0][262], "子供");
        strcpy(dict[1][262], "ボウズ");
        strcpy(dict[0][263], "いい");
        strcpy(dict[1][263], "ええ");
        strcpy(dict[0][264], "マクドナルド");
        strcpy(dict[1][264], "マクド");
        strcpy(dict[0][265], "なのかな");
        strcpy(dict[1][265], "やろか");
        strcpy(dict[0][266], "かな");
        strcpy(dict[1][266], "やろか");
        strcpy(dict[0][267], "こんにちは");
        strcpy(dict[1][267], "もうかってまっか？");
        strcpy(dict[0][268], "どうも");
        strcpy(dict[1][268], "もうかってまっか？");
        strcpy(dict[0][269], "クライアント");
        strcpy(dict[1][269], "客");
        strcpy(dict[0][270], "素人");
        strcpy(dict[1][270], "トーシロ");
    }
    char *cp = c;
    char *rp = r;
    size_t cnt = 0;
    size_t cnt2 = 0;
    printf("\n%d   -------------now len  at konkon.c\n",len);
    for (int k = 0; k < len; ) {
        int f = -1;
        for (int i = 0; i < 271; i++) {
            char *p = cp;
            for (int j = 0;; j++) {
                if (dict[0][i][j] == 0) {
                    f = i;
                    break;
                }
                if (*p != dict[0][i][j]) {
                    break;
                }
                p++;
            }
            if (f != -1) {
                for (int j = 0;; j++) {
                    if (dict[1][f][j] == 0)
                        break;
                    *rp = dict[1][f][j];
                    rp++;
		    cnt++;
                }
                for (int j = 0;; j++) {
                    if (dict[0][f][j] == 0)
                        break;
                    cp++;
		    cnt2++;
		    k++;
                }
                break;
            }
        }
        if (f != -1)
            continue;
        *rp = *cp;
        rp++;
        cp++;
	cnt++;
	cnt2++;
	k++;
    }
    *rp = 0;
    *length = cnt;
    printf("\ncnt2 -----------%d\n", cnt2);
    return r;
}
