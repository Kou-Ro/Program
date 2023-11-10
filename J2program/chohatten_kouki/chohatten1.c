//同じディレクトリにあるsample_coronana.cと一緒にコンパイルすること
#include <stdio.h>

//int getGeneLength();
void getGene(char gene[]);

int main(){
	char gene[BUFSIZ]={0};
	getGene(gene);
	int geneCount=0;
	while(gene[geneCount]!=0){
		geneCount++;
	}

	char search[]="AGCTTA";
	int searchCount = 0;
	while(search[searchCount]!=0){
		searchCount++;
	}
    
	int count = 0;
	for(int i = 0;i < geneCount - (searchCount - 1);i++){
		int flag=1;
		for(int j = 0;i < searchCount;j++){
			if(gene[i+j]!=search[j]){
				flag=0;
			}
		}
		if(flag){
			count++;
			i+=searchCount;
		}
	}

	return 0;
}
