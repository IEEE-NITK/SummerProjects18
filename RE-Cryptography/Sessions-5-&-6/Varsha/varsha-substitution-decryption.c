#include<stdio.h>
#include<string.h>
#include<ctype.h>
char key[26];
int ind(char);
int main(){
	char ch,ct[8],m;
	int i,j=0;
	FILE *fp1,*fp2,*fp3;

	fp1=fopen("/home/varsha/SummerProjects18/RE-Cryptography/Sessions-5-&-6/Shreyaa/Shreyaa-substitution_ciphertext.txt", "r");
	fp2=fopen("shreyaa-key-substitution.txt","r");
	fp3=fopen("varsha-decrypt-substitution.txt", "w");
	fscanf(fp1,"%s",ct);
	fscanf(fp2,"%s",key);
	while(j<7){
		m=ct[j];
		i=ind(m);
		fputc(i+97,fp3);
		j++;}
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
}
int ind(char m){
	for(int i=0;i<26;i++){
		if(m==key[i]){
			return i;
		}
	}
}





