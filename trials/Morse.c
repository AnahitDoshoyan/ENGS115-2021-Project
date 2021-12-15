#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node{
	char DataChar;
	struct Node *LeftTree, *RightTree;
}NODE;

char *DataTable[26], GetChar(char*);
NODE *Root, *Current, *Temp, *CreateNode();

void BinaryTree(), AddNode(char, char*);
void DeleteNode(NODE *);
int ReadString(char *);

void BinaryTree()
{
	int i;
	DataTable[0] = ".-"; DataTable[1] = "-...";
	DataTable[2] = "-.-."; DataTable[3] = "-..";
	DataTable[4] = "."; DataTable[5] = "..-.";
	DataTable[6] = "--."; DataTable[7] = "....";
	DataTable[8] = ".."; DataTable[9] = ".---";
	DataTable[10] = "-.-"; DataTable[11] = ".-..";
	DataTable[12] = "--"; DataTable[13] = "-.";
	DataTable[14] = "---"; DataTable[15] = ".--.";
	DataTable[16] = "--.-"; DataTable[17] = ".-.";
	DataTable[18] = "..."; DataTable[19] = "-";
	DataTable[20] = "..-"; DataTable[21] = "...-";
	DataTable[22] = ".--"; DataTable[23] = "-..-";
	DataTable[24] = "-.--"; DataTable[25] = "--..";
	

	
	Root = CreateNode();
	for(i=0; i<26; i++){
	AddNode('A'+i, DataTable[i]);
	}
}
void AddNode(char ch, char *str)
{

	Current = Root;
	char *ptr = str;
	while(*ptr){
		if(*ptr=='.'){
			if(Current->LeftTree == NULL)
				Current->LeftTree = CreateNode();
			Current = Current->LeftTree;
		}
		if(*ptr=='-'){
			if(Current->RightTree == NULL)
				Current->RightTree = CreateNode();
			Current = Current->RightTree;
		}
		ptr++;
	}
	Current->DataChar = ch;
}

NODE *CreateNode()
{
	NODE *ptr = (NODE *)malloc(sizeof(NODE));
	ptr->DataChar = ' ';
	ptr->LeftTree = ptr->RightTree = NULL;

	return ptr;
}

char GetChar(char *str) //tanslate function
{
	Current = Root;
	if(strlen(str)==0)
		return ' ';
	char *ptr = str;
	while(*ptr){
		if(*ptr =='.'){
			Current = Current->LeftTree;
			ptr++;
		}else if(*ptr == '-'){
			Current = Current->RightTree;
			ptr++;
		}else{
			return 0;
		}
	}
	return Current->DataChar;
}

void DeleteNode(NODE *ptr)
{
	if(ptr != NULL){
		if(ptr->LeftTree != NULL){
			DeleteNode(ptr->LeftTree);
			ptr->LeftTree = NULL;
		}		
		if(ptr->RightTree != NULL){
			DeleteNode(ptr->RightTree);
			ptr->RightTree = NULL;
		}
	free(ptr);
	ptr = NULL;
	}
}

int ReadString(char *p)
{
	int i = 0;
	char c = 0;
	while(1){
		c = getchar();
		if(c == '\n'){
			p[i] = '\0';
			break;
		}
		else{
			p[i] = c;
			i++;
		}
	}
	return i;
}

void Clear()
{
int c = 0;
while ((c = getchar()) != '\n' && c != EOF);

}

void ReadMorseMessage()
{
	
	char *token = NULL;
	char *Input = NULL;
	char ch = '\0';
	char Temp[2];
	char InputString[256], EnglishMessage[256];
	char MorseString[256];
	char error = 0;

	memset(InputString, 0, 256);
	memset(MorseString, 0, 256);
	memset(EnglishMessage, 0, 256);  
	printf("Insert the coded message: ");

	ReadString(InputString);
//	printf("User message is: '%s'\n ", InputString);
	strcpy(MorseString, InputString);
	Input = MorseString;
	token = strtok(InputString, " #");
	while(token !=NULL){
		ch = GetChar(token);
		sprintf(Temp, "%c" , ch);
//		printf("Translated '%c'\n", ch);
		if(ch == '\0') {
			error = 1;
			printf("The input is invalid\n");
			break;
		}
		strcat(EnglishMessage, Temp);
		Input = Input + strlen(token);
		if(*Input == ' ')
			Input ++;
		if(*Input == ' '){
			strcat(EnglishMessage, " ");
			Input ++;
		}
		token = strtok(NULL, " #");
	}

	if (error == 0){
		printf("Morse coded message is: %s\n", MorseString);
		printf("Message in English is: %s\n", EnglishMessage);
	}
	
}

int main()
{	
	char Option = 0;
	BinaryTree();
	while(1){
		ReadMorseMessage();
		printf("Continue(y/n)?:");
		scanf("%c", &Option);
		Clear();
		if((Option == 'Y')||(Option == 'y')){ 
			continue;
		}
		else if((Option == 'N')||(Option == 'n')){
			break;
		}
		else
		{
			printf("Sorry input not recognized\n");
			break;

		}
	}
	DeleteNode(Root);
}
