# 🚀 Boyer–Moore Fast String Search (C Implementation)
## 高速字串搜尋（Boyer–Moore 演算法） 專案
Boyer–Moore（BM）演算法是一種經典且高效的字串搜尋演算法，被廣泛運用於文字編輯器、搜尋引擎與各種需要快速比對大量文字的系統。它與傳統的暴力搜尋相比，能大幅減少不必要的比對，實際速度通常比多數演算法更快，尤其適合搜尋大型文字資料。

## 📌Features（功能特色）
使用 Boyer–Moore 演算法 進行高速字串搜尋
支援 ASCII 字串
大幅優於暴力搜尋（Brute-force）
適合大量字串比對需求，例如文本分析、病毒碼比對、基因序列搜尋前處理等

## ⚙️ Build & Run（編譯與執行）
使用 GCC 編譯：
gcc main.c boyermoore.c -o bm
