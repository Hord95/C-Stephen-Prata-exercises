#include <stdio.h>
#include <string.h>
#define MASK 0
int main(void)
{
	int idfont=0;
	int sizefont=0;
	int leveling =0;
	int boldfont=0;
	int italicfont=0;
	int underlined=0;
	int button;
	int number;
	printf("ИД\tРАЗМЕР\tВЫРАВНИВАНИЕ\tЖ\t\tК\t\tЧ\n");
	printf("%d\t%d\t%17s\t%s\t\t%s\t\t%s\n",idfont,sizefont,leveling==0 ? "влево" :leveling==1 ? "по центру" :leveling==2 ? "вправо" :"",boldfont==1 ? "вкл.":"откл.",italicfont==1 ? "вкд.":"откл.",underlined==1 ? "вкл.":"откл.");
	printf("1)изменить шрифт\t2)изменить размер\t3)изменить выравнивание\n");
	printf("4)полужирный\t5)курсив\t6)подчеркнутый\t");
	printf("7)завершить\n");
	scanf("%d",&button);
	while (button>=1 && button<=7)
	{
		if (button==1)
		{
			printf("Введите ID шрифта ( от 0 до 255):");
			scanf("%d",&number);
			idfont&=MASK;
			idfont|=number;
			printf("ИД\tРАЗМЕР\tВЫРАВНИВАНИЕ\tЖ\t\tК\t\tЧ\n");
			printf("%d\t%d\t%17s\t%s\t\t%s\t\t%s\n",idfont,sizefont,leveling==0 ? "влево" :leveling==1 ? "по центру" : leveling==2 ? "вправо" :"",boldfont==1 ? "вкл.":"откл.",italicfont==1 ? "вкл.":"откл.",underlined==1 ? "вкл.":"откл.");
			printf("1)изменить шрифт\t2)изменить размер\t3)изменить выравнивание\n");
			printf("4)полужирный\t5)курсив\t6)подчеркнутый\t");
			printf("7)завершить\n");
			scanf("%d",&button);
		}
		else if (button==2)
		{
			printf("Введите размер шрифта (от 0 до 127):");
			scanf("%d",&number);
			sizefont&=MASK;
			sizefont|=number;
			printf("ИД\tРАЗМЕР\tВЫРАВНИВАНИЕ\tЖ\t\tК\t\tЧ\n");
			printf("%d\t%d\t%17s\t%s\t\t%s\t\t%s\n",idfont,sizefont,leveling==0 ? "влево" :leveling==1 ? "по центру" : leveling==2 ? "вправо" :"",boldfont==1 ? "вкл.":"откл.",italicfont==1 ? "вкл.":"откл.",underlined==1 ? "вкл.":"откл.");
			printf("1)изменить шрифт\t2)изменить размер\t3)изменить выравнивание\n");
			printf("4)полужирный\t5)курсив\t6)подчеркнутый\t");
			printf("7)завершить\n");
			scanf("%d",&button);
		}
		else if (button==3)
		{
		printf("Введите номер выравнивания ( 0)влево 1)по центру 2)вправо ):");
		scanf("%d",&number);
			leveling&=MASK;
			leveling|=number;
		printf("ИД\tРАЗМЕР\tВЫРАВНИВАНИЕ\tЖ\t\tК\t\tЧ\n");
		printf("%d\t%d\t%17s\t%s\t\t%s\t\t%s\n",idfont,sizefont,leveling==0 ? "влево" :leveling==1 ? "по центру" : leveling==2 ? "вправо" :"",boldfont==1 ? "вкл.":"откл.",italicfont==1 ? "вкл.":"откл.",underlined==1 ? "вкл.":"откл.");
		printf("1)изменить шрифт\t2)изменить размер\t3)изменить выравнивание\n");
		printf("4)полужирный\t5)курсив\t6)подчеркнутый\t");
		printf("7)завершить\n");
		scanf("%d",&button);
		}
		else if (button==4)
		{
			if (boldfont==0)
			{
				boldfont&=MASK;
				boldfont|=1;
			}
			else if (boldfont==1)
			{
				boldfont&=MASK;
				boldfont|=0;
			}
			printf("ИД\tРАЗМЕР\tВЫРАВНИВАНИЕ\tЖ\t\tК\t\tЧ\n");
			printf("%d\t%d\t%17s\t%s\t\t%s\t\t%s\n",idfont,sizefont,leveling==0 ? "влево" :leveling==1 ? "по центру" :leveling==2 ? "вправо" :"",boldfont==1 ? "вкл.":"откл.",italicfont==1 ? "вкл.":"откл.",underlined==1 ? "вкл.":"откл.");
			printf("1)изменить шрифт\t2)изменить размер\t3)изменить выравнивание\n");
			printf("4)полужирный\t5)курсив\t6)подчеркнутый\t");
			printf("7)завершить\n");
			scanf("%d",&button);
		}
		else if (button==5)
		{
			if (italicfont==0)
			{
				italicfont&=MASK;
				italicfont|=1;
			}
			else if (italicfont==1)
			{
				italicfont&=MASK;
				italicfont|=0;
			}
			printf("ИД\tРАЗМЕР\tВЫРАВНИВАНИЕ\tЖ\t\tК\t\tЧ\n");
			printf("%d\t%d\t%17s\t%s\t\t%s\t\t%s\n",idfont,sizefont,leveling==0 ? "влево" :leveling==1 ? "по центру" : leveling==2 ? "вправо" :"",boldfont==1 ? "вкл.":"откл.",italicfont==1 ? "вкл.":"откл.",underlined==1 ? "вкл.":"откл.");
			printf("1)изменить шрифт\t2)изменить размер\t3)изменить выравнивание\n");
			printf("4)полужирный\t5)курсив\t6)подчеркнутый\t");
			printf("7)завершить\n");
			scanf("%d",&button);
		}
		else if (button==6)
		{
			if (underlined==0)
			{
				underlined&=MASK;
				underlined|=1;
			}
			else if (underlined==1)
			{
				underlined&=MASK;
				underlined|=0;
			}
			printf("ИД\tРАЗМЕР\tВЫРАВНИВАНИЕ\tЖ\t\tК\t\tЧ\n");
			printf("%d\t%d\t%17s\t%s\t\t%s\t\t%s\n",idfont,sizefont,leveling==0 ? "влево" :leveling==1 ? "по центру" : leveling==2 ? "вправо" :"",boldfont==1 ? "вкл.":"откл.",italicfont==1 ? "вкл.":"откл.",underlined==1 ? "вкл.":"откл.");
			printf("1)изменить шрифт\t2)изменить размер\t3)изменить выравнивание\n");
			printf("4)полужирный\t5)курсив\t6)подчеркнутый\t");
			printf("7)завершить\n");
			scanf("%d",&button);
		}
		else if (button==7)
		{
			printf("ИД\tРАЗМЕР\tВЫРАВНИВАНИЕ\tЖ\t\tК\t\tЧ\n");
			printf("%d\t%d\t%17s\t%s\t\t%s\t\t%s\n",idfont,sizefont,leveling==0 ? "влево" :leveling==1 ? "по центру" : leveling==2 ? "вправо" :"",boldfont==1 ? "вкл.":"откл.",italicfont==1 ? "вкл.":"откл.",underlined==1 ? "вкл.":"откл.");
			break;
		}
	}
	return 0;
}





