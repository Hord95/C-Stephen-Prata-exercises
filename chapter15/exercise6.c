#include <stdio.h>
#include <string.h>
struct font
{
	unsigned int  idfont: 8;
	unsigned int  sizefont: 7;
	unsigned int  leveling: 2;
	unsigned int  boldfont: 1;
	unsigned int  italicfont: 1;
	unsigned int  underlined: 1;
};
int main(void)
{
	struct font font1;
	int button;
	int number;
	font1.boldfont=0;
	font1.italicfont=0;
	font1.underlined=0;
	printf("ИД\tРАЗМЕР\tВЫРАВНИВАНИЕ\tЖ\t\tК\t\tЧ\n");
	printf("%d\t%d\t%17s\t%s\t\t%s\t\t%s\n",font1.idfont,font1.sizefont,font1.leveling==0 ? "влево" :font1.leveling==1 ? "по центру" : font1.leveling==2 ? "вправо" :"",font1.boldfont==1 ? "вкл.":"откл.",font1.italicfont==1 ? "вкд.":"откл.",font1.underlined==1 ? "вкл.":"откл.");
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
			font1.idfont=number;
			printf("ИД\tРАЗМЕР\tВЫРАВНИВАНИЕ\tЖ\t\tК\t\tЧ\n");
			printf("%d\t%d\t%17s\t%s\t\t%s\t\t%s\n",font1.idfont,font1.sizefont,font1.leveling==0 ? "влево" :font1.leveling==1 ? "по центру" : font1.leveling==2 ? "вправо" :"",font1.boldfont==1 ? "вкл.":"откл.",font1.italicfont==1 ? "вкл.":"откл.",font1.underlined==1 ? "вкл.":"откл.");
			printf("1)изменить шрифт\t2)изменить размер\t3)изменить выравнивание\n");
			printf("4)полужирный\t5)курсив\t6)подчеркнутый\t");
			printf("7)завершить\n");

			scanf("%d",&button);
		}
		else if (button==2)
		{
			printf("Введите размер шрифта (от 0 до 127):");
			scanf("%d",&number);
			font1.sizefont=number;
			printf("ИД\tРАЗМЕР\tВЫРАВНИВАНИЕ\tЖ\t\tК\t\tЧ\n");
			printf("%d\t%d\t%17s\t%s\t\t%s\t\t%s\n",font1.idfont,font1.sizefont,font1.leveling==0 ? "влево" :font1.leveling==1 ? "по центру" : font1.leveling==2 ? "вправо" :"",font1.boldfont==1 ? "вкл.":"откл.",font1.italicfont==1 ? "вкл.":"откл.",font1.underlined==1 ? "вкл.":"откл.");
			printf("1)изменить шрифт\t2)изменить размер\t3)изменить выравнивание\n");
			printf("4)полужирный\t5)курсив\t6)подчеркнутый\t");
			printf("7)завершить\n");
			scanf("%d",&button);
		}
		else if (button==3)
		{
		printf("Введите номер выравнивания ( 0)влево 1)по центру 2)вправо ):");
		scanf("%d",&number);
		if (number==0)
			font1.leveling=0;
		else if (number==1)
			font1.leveling=1;
		else if (number==2)
			font1.leveling=2;
		printf("ИД\tРАЗМЕР\tВЫРАВНИВАНИЕ\tЖ\t\tК\t\tЧ\n");
		printf("%d\t%d\t%17s\t%s\t\t%s\t\t%s\n",font1.idfont,font1.sizefont,font1.leveling==0 ? "влево" :font1.leveling==1 ? "по центру" : font1.leveling==2 ? "вправо" :"",font1.boldfont==1 ? "вкл.":"откл.",font1.italicfont==1 ? "вкл.":"откл.",font1.underlined==1 ? "вкл.":"откл.");
		printf("1)изменить шрифт\t2)изменить размер\t3)изменить выравнивание\n");
		printf("4)полужирный\t5)курсив\t6)подчеркнутый\t");
		printf("7)завершить\n");
		scanf("%d",&button);
		}
		else if (button==4)
		{
			if (font1.boldfont==0)
			{
				font1.boldfont=1;
			}
			else if (font1.boldfont==1)
			{
				font1.boldfont=0;
			}
			printf("ИД\tРАЗМЕР\tВЫРАВНИВАНИЕ\tЖ\t\tК\t\tЧ\n");
			printf("%d\t%d\t%17s\t%s\t\t%s\t\t%s\n",font1.idfont,font1.sizefont,font1.leveling==0 ? "влево" :font1.leveling==1 ? "по центру" : font1.leveling==2 ? "вправо" :"",font1.boldfont==1 ? "вкл.":"откл.",font1.italicfont==1 ? "вкл.":"откл.",font1.underlined==1 ? "вкл.":"откл.");
			printf("1)изменить шрифт\t2)изменить размер\t3)изменить выравнивание\n");
			printf("4)полужирный\t5)курсив\t6)подчеркнутый\t");
			printf("7)завершить\n");
			scanf("%d",&button);
		}
		else if (button==5)
		{
			if (font1.italicfont==0)
			{
				font1.italicfont=1;
			}
			else if (font1.italicfont==1)
			{
				font1.italicfont=0;
			}
			printf("ИД\tРАЗМЕР\tВЫРАВНИВАНИЕ\tЖ\t\tК\t\tЧ\n");
			printf("%d\t%d\t%17s\t%s\t\t%s\t\t%s\n",font1.idfont,font1.sizefont,font1.leveling==0 ? "влево" :font1.leveling==1 ? "по центру" : font1.leveling==2 ? "вправо" :"",font1.boldfont==1 ? "вкл.":"откл.",font1.italicfont==1 ? "вкл.":"откл.",font1.underlined==1 ? "вкл.":"откл.");
			printf("1)изменить шрифт\t2)изменить размер\t3)изменить выравнивание\n");
			printf("4)полужирный\t5)курсив\t6)подчеркнутый\t");
			printf("7)завершить\n");
			scanf("%d",&button);
		}
		else if (button==6)
		{
			if (font1.underlined==0)
			{
				font1.underlined=1;
			}
			else if (font1.underlined==1)
			{
				font1.underlined=0;
			}
			printf("ИД\tРАЗМЕР\tВЫРАВНИВАНИЕ\tЖ\t\tК\t\tЧ\n");
			printf("%d\t%d\t%17s\t%s\t\t%s\t\t%s\n",font1.idfont,font1.sizefont,font1.leveling==0 ? "влево" :font1.leveling==1 ? "по центру" : font1.leveling==2 ? "вправо" :"",font1.boldfont==1 ? "вкл.":"откл.",font1.italicfont==1 ? "вкл.":"откл.",font1.underlined==1 ? "вкл.":"откл.");
			printf("1)изменить шрифт\t2)изменить размер\t3)изменить выравнивание\n");
			printf("4)полужирный\t5)курсив\t6)подчеркнутый\t");
			printf("7)завершить\n");
			scanf("%d",&button);
		}
		else if (button==7)
		{
			printf("ИД\tРАЗМЕР\tВЫРАВНИВАНИЕ\tЖ\t\tК\t\tЧ\n");
			printf("%d\t%d\t%17s\t%s\t\t%s\t\t%s\n",font1.idfont,font1.sizefont,font1.leveling==0 ? "влево" :font1.leveling==1 ? "по центру" : font1.leveling==2 ? "вправо" :"",font1.boldfont==1 ? "вкл.":"откл.",font1.italicfont==1 ? "вкл.":"откл.",font1.underlined==1 ? "вкл.":"откл.");
			break;
		}
	}
	return 0;
}





