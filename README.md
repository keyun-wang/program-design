# 🚀 Boyer–Moore Fast String Search (C Implementation)
一個以 C 語言實作的 高速字串搜尋（Boyer–Moore 演算法） 專案。
Boyer–Moore 是經典且高效能的字串搜尋方法，透過 Bad Character Rule 與 Good Suffix Rule 大幅減少比對次數，尤其適合搜尋大型文字資料。

＃　📌 Features（功能特色）

使用 Boyer–Moore 演算法 進行高速字串搜尋
支援 ASCII 字串
大幅優於暴力搜尋（Brute-force）
適合大量字串比對需求，例如文本分析、病毒碼比對、基因序列搜尋前處理等

＃　⚙️ Build & Run（編譯與執行）
使用 GCC 編譯：
gcc main.c boyermoore.c -o bm
