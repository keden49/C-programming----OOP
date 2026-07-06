void reverse(t)
char t[];

{ 
    
    int i;
    int j = 0;
    char temp;
    for (i = strlen(t) - 1; i > j; i--)
      
    { 
      temp = t[j];
      t[j] = t[i];
      t[i] = temp;
      // printf("%c", t[j]);
      j++;
    }
    return;
}