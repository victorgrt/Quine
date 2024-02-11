#include <stdio.h>
/*comment #1*/

void useless()
{
	int i = 42;
	(void) i;
}

int main(void)
{
	/*Comment#2*/
	useless();
	char *s1="#include <stdio.h>%c/*comment #1*/%c%c";
	char *s2="void useless()%c{%c%cint i = 42;%c%c(void) i;%c}%c%c";
	char *s3="int main(void)%c{%c%c/*Comment#2*/%c%cuseless();%c";
	char *s4="	char *s%c=%c%s%c;%c	char *s%c=%c%s%c;%c";
	char *s5="	char n='%cn', b='%c%c', t='%c%c', q='%c';%c";
	char *sp="	printf(";
	char *s6="%ss1,n,n,n,n);%c";
	char *s7="%ss2,n,n,t,sp,q,n,n,n);%ss3,n,n,t,q,n);%c";
	char *s8="%ss3,n,n,t,q,n);%c";
	char *s9="%ss4,'1',q,s1,q,n,n,n);%ss4,'3',q,s3,q,n,'4',q,s4,q,n);%c";
	char *sa="%ss4,'5',q,s5,q,n,n,n);%ss4,'6',q,s6,q,n,'7',q,s7,q,n);%c";
	char *sb="%ssb,'8',q,s8,q,n,n,n);%ss4,'9',q,s9,q,n,'a',q,sa,q,n);%c";
	char *sc="%ss5,b,q,b,b,n);%c	return (0);%c}%c";
	char *s0="	char *s%c=%c%s%c;%c";
	char n='\n', b='\\', t='\t', q='"';
	printf(s1,n,n,n,n);
	printf(s2,n,n,t,n,t,n,n,n);	printf(s3,n,n,t,n,t,n);
	printf(s4,'1',q,s1,q,n,'2',q,s2,q,n);	printf(s4,'3',q,s3,q,n,'4',q,s4,q,n);
	printf(s4,'5',q,s5,q,n,'p',q,sp,q,n);	printf(s4,'6',q,s6,q,n,'7',q,s7,q,n);
	printf(s4,'8',q,s8,q,n,'9',q,s9,q,n);	printf(s4,'a',q,sa,q,n,'b',q,sb,q,n);
	printf(s0,'c',q,sc,q,n); printf(s0,'0',q,s0,q,n);
	printf(s5,b,b,b,b,'t',q,n);	printf(s6,sp,n,n,n);	printf(s7,sp,sp,n,n);
	printf(s8,sp,sp,n,n);	printf(s9,sp,sp,n,n);	printf(sa,sp,sp,sp,n,n);
	printf(sb,sp,sp,sp,n,n);	printf(sc,sp,n,n,n,n);
	return (0);
}