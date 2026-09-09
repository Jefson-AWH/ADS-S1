 #include<stdio.h>
  2 struct book
  3 {
  4     int bookid;
  5     char bookname[50];
  6     char authorname[50];
  7     int price;
  8 };
  9 void main()
 10 {
 11     struct book b;
 12     printf("enter the bookid: ");
 13     scanf("%d", &b.bookid);
 14     printf("enter bookname: ");
 15     scanf(" %s", b.bookname);
 16     printf("enter authorname: ");
 17     scanf(" %s", b.authorname);
 18     printf("enter the price: ");
 19     scanf("%d", &b.price);
 20     printf("bookid: %d\n",b.bookid);
 21     printf("bookname: %s\n",b.bookname);
 22     printf("authorname: %s\n",b.authorname);
 23     printf("price: %d\n",b.price);
 24 }