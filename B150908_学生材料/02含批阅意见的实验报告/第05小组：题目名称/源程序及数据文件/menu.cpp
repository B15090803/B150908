#include<stdio.h>
#include<stdlib.h>
#include"file.h"
#include"book.h
void printHead( )      /*��ӡͼ����Ϣ�ı�ͷ*/
{
printf("%20s%20s%10s%10s%10s\n","������","����"��"ѧ��","����","ͼ��״̬");
}

void menu( )         /*����˵�����*/
{
		printf("******** 1. ��ʾ������Ϣ ********\n");
		printf("******** 2. ������Ϣ���� ********\n");
		printf("******** 3. ��������Ϣ���� ********\n);
		printf("******** 3. ��������ͳ��********\n");
        printf("******** 4. ����������ѯ ********\n");
		printf("******** 0. �˳�         ********\n")
}

void menuBase( )     /*2��������Ϣ����˵�����*/
{
		printf("%%%%%%%% 1. ����ͼ���¼ %%%%%%%%\n");
		printf("%%%%%%%% 2. ɾ��ͼ���¼ %%%%%%%%\n");
		printf("%%%%%%%% 3. �޸�ͼ���¼ %%%%%%%%\n");
		printf("%%%%%%%% 0. �����ϲ�˵� %%%%%%%%\n");
}
void menuBase()      /*3����������Ϣ����˵�����*/
{      
	    printf("@@@@@@@@@ 1. �����������Ϣ��¼ @@@@@@@@\n");
		printf("@@@@@@@@@ 2. ɾ����������Ϣ��¼ @@@@@@@@\n");
		printf("@@@@@@@@@ 3. �޸Ľ�������Ϣ��¼ @@@@@@@@\n");
        printf("@@@@@@@@@ 0. ���ؽ�������Ϣ��¼ @@@@@@@@\n");
}

void menuCount( )    /*4��ͳ�Ʋ˵�����*/
{
		printf("&&&&&&&& 1. ����Ĵ������ &&&&&&&&\n");
		printf("&&&&&&&& 0. �����ϲ�˵� &&&&&&&&\n");
}

void menuSearch()    /*5������������ѯ�˵�����*/
{
		printf("######## 1. ��������ѯ   ########\n");
		printf("######## 2. �������Ų�ѯ   ########\n");
		printf("######## 0. �����ϲ�˵� ########\n");
}

int baseManage(Book stu[],int n)    	     /*�ú�����ɻ�����Ϣ����*/
/*�������Ž��в���ɾ���޸ģ������Ų����ظ�*/
{  
		int choice,t,find[NUM];
     Book s;
do
	    {   
menuBase( );                  /*��ʾ��Ӧ�Ķ����˵�*/
printf("choose one operation you want to do:\n");
		     scanf("%d",&choice);	          /*����ѡ��*/
		     switch(choice)
		     {
			   case 1:	 readStu(&s,1);       /*����һ���������ͼ���¼*/
					 n=insertStu(stu,n,s);   /*���ú�������ͼ���¼*/
					 break;
			   case 2:  printf("Input the number deleted\n");
					 scanf("%ld",&s.num);  /*����һ����ɾ����ͼ��������*/
					 n=deleteStu(stu,n,s);   /*���ú���ɾ��ָ�������ŵ�ͼ���¼*/
					 break;
			   case 3:  printf("Input the number modified\n");
					 scanf("%ld",&s.num);  /*����һ�����޸ĵ�ͼ��������*/
				      t=searchStu(stu,n,s,1,find) ; /*���ú�������ָ�������ŵ�ͼ���¼*/
				      if (t)                 /*����������ŵļ�¼����*/
					 {
						  readStu(&s,1);   /*����һ��������ͼ���¼��Ϣ*/
					      stu[find[0]]=s;    /*���ն���ļ�¼��ֵ����Ҫ�޸ĵ������¼*/ 					 
					  }					 
					 else                 /*����������ŵļ�¼������*/ 
 printf("this book is not in,can not be modified.\n"); /*�����ʾ��Ϣ*/
					 break;
			    case 0: break;
		    }
	}while(choice);
return n;                             /*���ص�ǰ�����������ʵ�ʼ�¼����*/
}
int baseManage(Student stu[],int n)    	     /*�ú�����ɻ�����Ϣ����*/
/*��ѧ�Ž��в���ɾ���޸ģ������Ų����ظ�*/
{  
		int choice,t,find[NUM];
     Book s;
do
	    {   
menuBase( );                  /*��ʾ��Ӧ�Ķ����˵�*/
printf("choose one operation you want to do:\n");
		     scanf("%d",&choice);	          /*����ѡ��*/
		     switch(choice)
		     {
			   case 1:	 readStu(&s,1);       /*����һ���������ѧ�ż�¼*/
					 n=insertStu(stu,n,s);   /*���ú�������ѧ�ż�¼*/
					 break;
			   case 2:  printf("Input the number deleted\n");
					 scanf("%ld",&s.num);  /*����һ����ɾ����ѧ��ѧ��*/
					 n=deleteStu(stu,n,s);   /*���ú���ɾ��ָ��ѧ�ŵ�ѧ����¼*/
					 break;
			   case 3:  printf("Input the number modified\n");
					 scanf("%ld",&s.num);  /*����һ�����޸ĵ�ѧ��ѧ��*/
				      t=searchStu(stu,n,s,1,find) ; /*���ú�������ָ��ѧ�ŵ�ѧ����¼*/
				      if (t)                 /*�����ѧ�ŵļ�¼����*/
					 {
						  readStu(&s,1);   /*����һ��������ѧ�ż�¼��Ϣ*/
					      stu[find[0]]=s;    /*���ն���ļ�¼��ֵ����Ҫ�޸ĵ������¼*/ 					 
					  }					 
					 else                 /*�����ѧ�ŵļ�¼������*/ 
 printf("this book is not in,can not be modified.\n"); /*�����ʾ��Ϣ*/
					 break;
			    case 0: break;
		    }
	}while(choice);
return n;                             /*���ص�ǰ�����������ʵ�ʼ�¼����*/
}

void printMarkBOOK(char *s,double m[10][3],int k)   /*��ӡ���Ĵ���ͨ�ú�������countManage ����
{                                                  /*��ʽ����k���������ͬ������
int i;
    printf(s);                                  /*�����s�������������Ĵ�������ʾ��Ϣ*/
    for (i=0;i<10;i++)                           /*i������һ����*/
		  printf("%10.2lf",m[i][k]);
	   printf("\n");
}

void countManage(Student stu[],int n)               /*�ú�����ɽ��Ĵ�����ͳ�ƹ���*/
{
		int choice;
		double mark[19][3];
		do
		{
			menuCount( );                        /*��ʾ��Ӧ�Ķ����˵�*/
			calcuMark(mark,stu,n);                 /*���ô˺�������Ĵ�������ߡ����ֵ*/
			printf("choose one operation you want to do:\n");
			scanf("%d",&choice);
			switch(choice)
			{
				case 1:   printMarkCourse("10�������߽��Ĵ�����:\n",mark,0);  /*�����ߴ���*/
				      break;
				case 2:   printMarkCourse("10�������ͽ��Ĵ�����:\n",mark,1);  /*�����ʹ���*/
				      break;
				
				case 0:   break;
			}
		}while (choice);
}

void searchManage(Book stu[],int n)               /*�ú�����ɸ���������ѯ����*/
{
    int i,choice,findnum,f[NUM];
Student s;
	   do
{
			menuSearch( );                         /*��ʾ��Ӧ�Ķ����˵�*/
			printf("choose one operation you want to do:\n");
			scanf("%d",&choice);
			switch(choice)
			{
				case 1:   printf("Input a book\'s num will be searched:\n");
				      scanf("%ld",&s.num);         /*�������ѯͼ���������*/
					  break;
				case 2:   printf("Input a book\'s name will be searched:\n");
				      scanf("%s",s.name);	          /*�������ѯͼ�������*/		  
				      break;   
				case 0:   break;
			}
		 	if (choice>=1&&choice<=2)
			{ 
				findnum=searchStu(stu,n,s,choice,f);    /*���ҵķ�������Ԫ�ص��±����f������*/
				if (findnum)				     /*������ҳɹ�*/
				{
			   		 printHead( );                  /*��ӡ��ͷ*/
					 for (i=0;i<findnum;i++)         /*ѭ������f������±�*/
	      	 printStu(&stu[f[i]],1);      /*ÿ�����һ����¼*/
				}
		    		else
			    	    printf("this record does not exist!\n"); /*������Ҳ���Ԫ�أ��������ʾ��Ϣ*/
		     }		
	    }while (choice);
}

int runMain(Student stu[],int n,int choice)    /*����ģ�飬��Ӧ��һ���˵����¸�����ѡ��ִ��*/
{
		switch(choice)
		{
			case 1: printHead( );           /* 1. ��ʾ������Ϣ*/
				 sortStu(stu,n,1);         /*�����Ĵ�����С�����˳�������¼*/ 
          	 printStu(stu,n);          /*�����Ĵ�����С�����˳��������м�¼*/
					break;
			case 2: n=baseManage(stu,n);    /* 2. ͼ�������Ϣ����*/
			   	     break;
			case 3: n=baseManage(stu,n);     /* 3. ��������Ϣ����*/
					break;
			case 4: countManage(stu,n);     /* 4. ���Ĵ���ͳ��*/
					break;
			case 5: searchManage(stu,n);     /* 5. ����������ѯ*/
				     break;
          case 0: break;
		}
		return n;
}

int main( )
{
		Book stu[NUM];                /*����ʵ��һά����洢ͼ���¼*/
      int choice,n;
	 n=readFile(stu);                  /*���ȶ�ȡ�ļ�����¼�������ظ�ֵ��n*/
	 if (!n)                          /*���ԭ�����ļ�Ϊ��*/
	     {
		    n=createFile(stu);              /*������Ҫ�����ļ����Ӽ����϶���һϵ�м�¼�����ļ�*/
}	 	 
	do
	     {
	         menu();                      /*��ʾ���˵�*/
	         printf("Please input your choice: ");
	         scanf("%d",&choice);
	         if (choice>=0&&choice<=5)
	              n=runMain(stu,n,choice);    /*ͨ�����ô˺�������һ���������ѡ��ִ��*/
	         else 
		          printf("error input,please input your choice again!\n");
	} while (choice);
	sortStu(stu,n,1);                   /*�����ļ�ǰ���Ĵ�����С��������*/ 
	     saveFile(stu,n);                   /*����������ļ�*/
      return 0;
}

