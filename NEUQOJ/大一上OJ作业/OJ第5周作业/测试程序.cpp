#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 27 /*字符数:26小写字母+'/0'      */
    
    void MakePassWord(char*, int, int, char*, int, int, int*);/*用于构造密码的递归函数*/
    void SortCharacterSet(char *); /*对输入的字符集进行排序*/
    
    int main()
    {
    	char CharacterSet[MAX_LENGTH];		/*存放输入的小写字母集*/
    	char Password[MAX_LENGTH]="/0";		/*存放生成的password*/
    	int NumOfPassword=0;			/*存放生成的password数量*/
    	int PassLen;				/*存放指定的密码长度*/

   		scanf("%s",CharacterSet);
    
    	SortCharacterSet(CharacterSet); /*为了让密码按字母顺序打出，需要对字符集排序*/
    	//printf("After sort: %s",CharacterSet);
    
    	printf("/nInput the length of the password:");/*输入指定的密码长度*/
    	scanf("%d",&PassLen);
    
   	MakePassWord(CharacterSet,0,PassLen,Password,0,0,&NumOfPassword);/*调用递归函数*/
    	printf("/n");
    	printf("Number of Passwords: %d/n",NumOfPassword);
    }
    
    /*
    	构造密码的递归函数
    	参数说明：	char* character_set: 小写字符集
    		int i: 当前取舍第i个小写字符
    		int pass_len: 指定的密码长度
   		char* password: 当前已经生成的部分密码
   		int NumOfConsonant: 当前生成的部分密码中，辅音字母的个数
    		int NumOfVowel: 当前生成的部分密码中，元音字母的个数
   		int* NumOfPass: 当前已经生成的合法的密码个数
    */
    void MakePassWord(char* character_set, int i, int pass_len,char* password, 
    			  int NumOfConsonant, int NumOfVowel, int * NumOfPass)
    {
    	char TempPass[MAX_LENGTH];
    	strcpy(TempPass,password);  /*为当前已经生成的部分密码生成副本*/
    
    	/*如果所有小写字母都已经在生成密码中进行了取舍，则检验是否是符合要求的密码*/
    	if(i>=strlen(character_set))
    	{
    		/*如果当前生成的密码中元音和辅音个数以及密码长度都符合要求，则打印该密码*/
    		if((NumOfConsonant>=2 && NumOfVowel>=1) && strlen(TempPass)==pass_len)
    		{
    			printf("%s/n",TempPass);
    		}
    	}
    	else/*若还有小写字母没有经过取舍，则继续取舍的递归操作*/
    	{
    		
    		/*更新统计当前生成的部分密码中元音和辅音的个数*/
    		if((((character_set[i]=='a' || character_set[i]=='e') || character_set[i]=='i')
    			|| character_set[i]=='o') || character_set[i]=='u')
    		{
  			NumOfVowel++;
    		}
    		else
    		{
    			NumOfConsonant++;
    		}
    
   			/*将第i个字母进行取舍，分为取和舍两中情况*/
    		strncat(TempPass,(character_set+i),1); 
    		
    		/*取字母i为密码的一部分，进入递归调用*/
    		MakePassWord(character_set,i+1,pass_len,TempPass,
    				NumOfConsonant,NumOfVowel,NumOfPass);
    	
    		/*不取i为密码的一部分，进入递归调用*/
    		MakePassWord(character_set,i+1,pass_len,password,
    				NumOfConsonant,NumOfVowel,NumOfPass);
    	}
    }
    
    
    /*用冒泡法对给定字符集进行排序*/
    void SortCharacterSet(char * set)
    {
    	int i;
    	int j;
    	char temp;
    
    	for(i=strlen(set)-1;i>=1;i--)
    	{
    		for(j=0;j<=i-1;j++)
    		{
    			if(set[j]>set[j+1])
    			{
    				temp=set[j];
    				set[j]=set[j+1];
    				set[j+1]=temp;
    			}
    		}
    	}
    }

