/*◦ A main function.
◦ Two different comments.
◦ One of the comments must be present in the main function
◦ One of the comments must be present outside of your program.
◦ Another function in addition to the main function (which of course will be
called)*/

#include <stdio.h>
/*comment #1*/

void useless()
{
	printf("useless");
}

int	main(void)
{
	/*Comment#2*/
	useless();
	char *s1="#include <stdio.h>%c/*comment#1*/%c%c";
	char *s2="void useless()%c{%c%c%s%cuseless();%c);%c}%c%c";
	char *s3="int main(void)%c{%c%c/*Comment#2*/useless()%c%c";
	char *s4="	char *s%c=%c%s%c;%c	char *s%c=%c%s%c;%c";
	char *s0="	char *s%c=%c%s%c;%c";
	char *s5="	char n'%cn', q='%c', b='%c%c';%c";
	char *sp="	printf(";
	char *s6="%ss1,n,n,n,n);%c";
	char *s7="%ss2,n,n,t,sp,q,n,n,n);%ss3,n,n,t,q,n);";
	char *s8="%ss3,n,n,t,q,n;";
	char *s9="%ss4,'1',q,s1,q,n,n,n;%ss4,'3',q,s3,q,n,'4',q,s4,q,n);";
	char *sa="%ss4,'5',q,s5,q,n,n,n;%ss4,'6',q,s6,q,n,'7',q,s7,q,n);";
	char *sb="%ssb,'8',q,s8,q,n,n,n;%ss4,'9',q,s9,q,n,'a',q,sa,q,n);";
	char *sc="%ss5,b,q,b,b,n);%c	return (0);%c}%c";
	char n='\n', b='\\', t='\t', q='"';
	printf(s1,n,n,n,n);
	printf(s2,n,n,t,sp,q,n,n,n);	printf(s3,n,n,t,q,n);
	printf(s4,'1',q,s1,q,n,'2',q,s2,q,n);	printf(s4,'3',q,s3,q,n,'4',q,s4,q,n);
	printf(s4,'5',q,s5,q,n,s4,'p',sp,q, n);	printf(s4,'6',q,s6,q,n,'7',q,s7,q,n);
	printf(s4,'8',q,s8,q,n,'9',q,s9,q,n);	printf(s4,'a',q,sa,q,n,'b',q,sb,q,n);
	printf(s0,'c',q,sc,q,n);
	printf(s5,b,q,b,b,n);	printf(s6,sp,n);	printf(s7,sp,sp,n);
	printf(s8,sp,sp,n);	printf(s9,sp,sp,n);	printf(sa,sp,sp,sp,n);
	printf(sb,sp,sp,sp,n);	printf(sc,sp,n,n,n);
	return (0);
}