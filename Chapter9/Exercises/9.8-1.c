/*copy using redirection(console to file) and execute like this
  c>name<in>out */
  #include<stdio.h>
  
  int main()
  {
    char ch;
    while(!feof(stdin))
    {
      scanf("%c", &ch);
      if(!feof(stdin))
      {
        printf("%c", ch);
      }
    }
    return 0;
  }