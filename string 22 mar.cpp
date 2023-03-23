#include<string.h>
int main()
{
char s[1000]
int i,j,vowels=0,consonants=0,len,v=1;
printf("Enter the string : ");
scanf("%s",s);
len=strlen(s) ;
for(i=0;s[i];i++)
{
	if((s[i]>=65 && s[i]>=97 && s[i]<=122))
{
if(s[i]=='a'||
s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'
||s[i]=='U')
vowels++;
else
consonants++;	
}	
}
printf("Vowels = %d\n",vowels);
printf("Consonants = %d\n",consonants);
printf("Repeated characters:");
for (i = 0;i < len; i++)
{
for (j = i + 1; j <len; j++)
{
if (s[i]== s[j])
{
if (s[i] ==s [j])
{
printf("%c", s[i]);
}
s[j] = '\0';
v++;
}
}
v = 1;
}
return 0;
}
