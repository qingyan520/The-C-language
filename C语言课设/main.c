#include"test.h"

//课程内容侧式

//1.对课程进行初始化
void Init_Class(Class* cl)
{
	cl->Class_capacity = 3;
	cl->Class_size = 0;
	cl->Data = (Class_Info*)malloc(sizeof(Class_Info) * (cl->Class_capacity));
	if (cl->Data == NULL)
	{
		printf("初始化失败\n");
		exit(-1);
	}
	Loading_Class(cl);
}


//判断空间是否足够，如果空间不足就扩容
void Add_Class_Capacity(Class*cl)
{
	if (cl->Class_capacity == cl->Class_size)
	{
		Class_Info* ptr = (Class_Info*)realloc(cl->Data, sizeof(Class_Info) * (cl->Class_capacity + 2));
		if (ptr == NULL)
		{
			printf("增容失败,无法继续添加内容\n");
			
		}
		else
		{
			cl->Data = ptr;
			cl->Class_capacity += 2;
		}
	}
}


//判断课程号是否有重复的
int _Search_ClassNumber(Class* cl, int x)
{
	for (int i = 0; i < cl->Class_size; i++)
	{
		if (x == cl->Data[i].Class_Number)
		{
			return i;
		}
	}
	return -1;
}


//2.输入内容
void Push_Class(Class* cl)
{
	//1.如果空间不够进行增容，增容成功后向里面添加内容
	Add_Class_Capacity(cl);
	while (1)
	{
		printf("请输入课程号(课程号必须大于1):\n");
		scanf("%d", &cl->Data[cl->Class_size].Class_Number);//课程号
		int ret = _Search_ClassNumber(cl, cl->Data[cl->Class_size].Class_Number);
		if (cl->Data[cl->Class_size].Class_Number <=1)
		{
			printf("课程号必须大于1，请重新输入\n");
		}
		else if(cl->Data[cl->Class_size].Class_Number>1&&ret==-1)
		{
			break;
		}
		else
		{
			printf("课程号重复，请重新输入课程号\n");
		}
	}
	printf("请输入课程名称:\n");
	scanf("%s", &cl->Data[cl->Class_size].Class_Name);//课程名字
	printf("请输入课程开始时间:\n");
	scanf("%s", &cl->Data[cl->Class_size].Class_StartDate);//开始时间
	printf("请输入课程结束时间:\n");
	scanf("%s", &cl->Data[cl->Class_size].Class_EndDate);//结束时间


	char str[5] = "待定";
	for (int i = 0; i < 5; i++)
	{
		cl->Data[cl->Class_size].Class_Teacher[i] = str[i];
	}
	cl->Data[cl->Class_size].Class_Teacher[99] = '\0';


	cl->Class_size++;

	


}


//3.打印课程信息
void Print_Class(Class* cl)
{
	printf("课程信息如下所示:\n");
	printf("--------------------------------------------------------------------------------------------------------\n");
	printf("                                          课程信息                                                      |\n");
	printf("--------------------------------------------------------------------------------------------------------\n");
	printf("%-15s\t|%-20s\t|%-20s\t|%-20s\t|%-15s|\n", "课程号", "课程名称", "课程开始日期", "课程结束日期", "科任老师");
	printf("--------------------------------------------------------------------------------------------------------\n");
	for (int i = 0; i < cl->Class_size; i++)
	{
		printf("%-15d\t|%-20s\t|%-20s\t|%-20s\t|%-15s|\n", cl->Data[i].Class_Number, cl->Data[i].Class_Name, cl->Data[i].Class_StartDate, cl->Data[i].Class_EndDate,cl->Data[i].Class_Teacher);
		printf("--------------------------------------------------------------------------------------------------------\n");
	}
}


//4.将课程信息保存到文件中去
void Save_Class(Class* cl)
{
	//打开文件
	FILE* pfOut = fopen("Class.txt", "wb");
	if (pfOut == NULL)
	{
		printf("Save_Class::%s\n", strerror(errno));
		return;
	}
	//写数据
	int i = 0;
	for (i = 0; i <cl->Class_size; i++)
	{
		fwrite(cl->Data + i, sizeof(Class_Info), 1, pfOut);
	}

	//关闭文件
	fclose(pfOut);
	pfOut = NULL;
}


//5.将文件进行加载
void Loading_Class(Class* cl)
{
	//打开文件
	FILE* pfIn = fopen("Class.txt", "rb");
	if (pfIn == NULL)
	{
		printf("Loading_Class::%s\n", strerror(errno));
		return;
	}
	//读文件内容，放进通讯录
	Class_Info tmp = { 0 };
	while (fread(&tmp, sizeof(Class_Info), 1, pfIn))
	{
		//检测是否要增容
		Add_Class_Capacity(cl);
		//存储元素
		cl->Data[cl->Class_size] = tmp;
		cl->Class_size++;
	}

	//关闭文件
	fclose(pfIn);
	pfIn = NULL;
}

//6.查找指定课程
void Find_Class(Class* cl)
{
	int Class_Number;
	char Class_Name[100];

	int select = 0;
	while (1)
	{
		printf("请按照下列选项选择对应的功能:\n");
		printf("1.按照课程号进行查询\n2.按照课程名进行查询\n");
		printf("请输入相应功能所对对应序号:\n");
		scanf("%d", &select);
		if (select == 1) //按照课程号进行查询
		{
			printf("请输入要查询的课程号:\n");
			scanf("%d", &Class_Number);
			int ret = Search_ClassNumber(cl, Class_Number);
			if (ret == -1)
			{
				printf("暂未找到该科目\n");
			}
			else
			{
				printf("课程信息如下所示:\n");
				printf("--------------------------------------------------------------------------------------------------------\n");
				printf("                                          课程信息                                                      |\n");
				printf("--------------------------------------------------------------------------------------------------------\n");
				printf("%-15s\t|%-20s\t|%-20s\t|%-20s\t|%-15s|\n", "课程号", "课程名称", "课程开始日期", "课程结束日期", "科任老师");
				printf("--------------------------------------------------------------------------------------------------------\n");
				printf("%-15d\t|%-20s\t|%-20s\t|%-20s\t|%-15s|\n", cl->Data[ret].Class_Number, cl->Data[ret].Class_Name, cl->Data[ret].Class_StartDate, cl->Data[ret].Class_EndDate, cl->Data[ret].Class_Teacher);
				printf("--------------------------------------------------------------------------------------------------------\n");
			}
			break;
		}
		else if (select == 2)
		{
			printf("请输入要查询的课程名:\n");
			scanf("%s", Class_Name);
			int ret = Search_ClassName(cl, Class_Name);
			if (ret == -1)
			{
				printf("暂未找到该科目\n");
			}
			else
			{
				printf("课程信息如下所示:\n");
				printf("--------------------------------------------------------------------------------------------------------\n");
				printf("                                          课程信息                                                      |\n");
				printf("--------------------------------------------------------------------------------------------------------\n");
				printf("%-15s\t|%-20s\t|%-20s\t|%-20s\t|%-15s|\n", "课程号", "课程名称", "课程开始日期", "课程结束日期", "科任老师");
				printf("--------------------------------------------------------------------------------------------------------\n");
				printf("%-15d\t|%-20s\t|%-20s\t|%-20s\t|%-15s|\n", cl->Data[ret].Class_Number, cl->Data[ret].Class_Name, cl->Data[ret].Class_StartDate, cl->Data[ret].Class_EndDate, cl->Data[ret].Class_Teacher);
				printf("--------------------------------------------------------------------------------------------------------\n");
			}
			break;
		}
		else
		{
			printf("输入错误,请重新输入\n");
		}
	}
}



































//搜索课程号是否存在，如果存在就返回该课程号所在位置的下标
int Search_ClassNumber(Class* cl, int ClassNumber)
{
	int i = 0;
	for (; i < cl->Class_size; i++)
	{
		if (cl->Data[i].Class_Number == ClassNumber)
		{
			return i;
		}
	}
	return -1;
}


//按照课程名称搜索对应的课程是否存在
int Search_ClassName(Class* cl, char ClassName[])
{
	for (int i = 0; i < cl->Class_size; i++)
	{
		if (strcmp(cl->Data[i].Class_Name, ClassName) == 0)
		{
			return i;
		}
	}
	return -1;
}



//拷贝课程信息
void Copy_Info(Teacher* T, Class* cl, int x)
{
	for (size_t i = 0; i <100; i++)
	{
		cl->Data[x].Class_Teacher[i] = '\0';
	}


	for (size_t i = 0; i < strlen(T->Data[T->Teacher_size].Teacher_Name); i++)
	{
		cl->Data[x].Class_Teacher[i] = T->Data[T->Teacher_size].Teacher_Name[i];
	}
	cl->Data[x].Class_Teacher[99] = '\0';

	//T->Data[T->Teacher_size].Teacher_ClassINfo[T->Data[T->Data]].Class_Number = cl->Data[x].Class_Number;//课程号

	T->Data[T->Teacher_size].Teacher_ClassINfo[T->Data[T->Teacher_size].Teacher_iClass].Class_Number = cl->Data[x].Class_Number;//课程号

	strcpy(T->Data[T->Teacher_size].Teacher_ClassINfo[T->Data[T->Teacher_size].Teacher_iClass].Class_Name, cl->Data[x].Class_Name);//课程名称

	strcpy(T->Data[T->Teacher_size].Teacher_ClassINfo[T->Data[T->Teacher_size].Teacher_iClass].Class_Teacher, cl->Data[x].Class_Teacher);//科任老师

	strcpy(T->Data[T->Teacher_size].Teacher_ClassINfo[T->Data[T->Teacher_size].Teacher_iClass].Class_StartDate, cl->Data[x].Class_StartDate);//开始时间

	strcpy(T->Data[T->Teacher_size].Teacher_ClassINfo[T->Data[T->Teacher_size].Teacher_iClass].Class_EndDate, cl->Data[x].Class_EndDate);//结束时间

	T->Data[T->Teacher_size].Teacher_iClass++;


}


//查找教师号是否存在
int Search_TeacherNumber(Teacher* T,int x)
{
	for (int i = 0; i < T->Teacher_size; i++)
	{
		if (x == T->Data[i].Teacher_Number)
		{
			return i;
		}
	}
	return -1;
}


//1.初始化教师类
void Init_Teacher(Teacher*T)
{
	T->Teacher_capacity = 3;
	T->Teacher_size = 0;
	//T->Teacher_iClass = 0;
//	T
	T->Data = (Teacher_Info*)malloc(sizeof(Teacher_Info) * (T->Teacher_capacity));
	if (T->Data == NULL)
	{
		printf("初始化失败\n");
		exit(-1);
	}
	for (int i = 0; i < T->Teacher_capacity; i++)
	{
		T->Data[i].Teacher_iClass = 0;
		T->Data[i].Teacher_Class_Person = 0;
	}
	Loading_Teacher(T);
}


//基础功能：增容
void Add_Teacher_Capacity(Teacher* T)
{
	if (T->Teacher_size == T->Teacher_capacity)
	{
		Teacher_Info* ptr = (Teacher_Info*)realloc(T->Data, sizeof(Teacher_Info) * (T->Teacher_capacity + 2));
		if (ptr == NULL)
		{
			printf("增容失败\n");
			exit(-1);
		}
		else
		{
			T->Data = ptr;
			for (int i = T->Teacher_capacity; i < T->Teacher_capacity + 2; i++)
			{
				T->Data[i].Teacher_iClass = 0;
				T->Data[i].Teacher_Class_Person = 0;
			}
			T->Teacher_capacity += 2;

		}
	}
}

//2.输入信息
//输入老师信息
void Push_Teacher(Teacher* T, Class* cl)
{
	Add_Teacher_Capacity(T);
	while (1)
	{
		printf("请输入教师号:\n");
		scanf("%d", &T->Data[T->Teacher_size].Teacher_Number);//输入教师号
		int ret = Search_TeacherNumber(T, T->Data[T->Teacher_size].Teacher_Number);
		if (T->Data[T->Teacher_size].Teacher_Number <= 1)
		{
			printf("教师号必须为大于1的整数，请重新输入\n");
		}
		else if (T->Data[T->Teacher_size].Teacher_Number > 1 && ret == -1)
		{
			break;
		}
		else
		{
			printf("教师号重复，请重新输入\n");
		}

	}

	printf("请输入教师姓名:\n");
	scanf("%s", T->Data[T->Teacher_size].Teacher_Name);//输入姓名
	printf("请输入教师性别:\n");
	scanf("%s", T->Data[T->Teacher_size].Teacher_Sex);//性别
	printf("请输入教师学历:\n");
	scanf("%s", T->Data[T->Teacher_size].Teacher_educational_background);//老师的学历
	printf("请输入教师年龄:\n");
	scanf("%d", &T->Data[T->Teacher_size].Teacher_Age);//老师的年龄
	printf("请输入老师的电话:\n");
	scanf("%s", T->Data[T->Teacher_size].Teacher_TelephoneNumber);//老师的电话
	printf("请根据下列课程信息为老师添加适合的课程:\n");
	Print_Class(cl);
	printf("请输入课程号或者课程名称录入老师所要教授科目的录入:\n");
	printf("1.按照课程号查询\n2.按照课程名查询:\n");
	int Teacher_ClassNumber;//老师的课程号
	char Teacher_ClassName[20];//老师所要教的课程名称
	int select;

	while (1)
	{
		scanf("%d", &select);
		if (select == 1)//按照课程号进行搜索
		{
			printf("请输入课程号进行查询:");
			scanf("%d", &Teacher_ClassNumber);
			int ret = Search_ClassNumber(cl, Teacher_ClassNumber);

			//ret==-1说明该该数据库中没有该课程的信息，这时候询问是否将该课程添加到课程信息中去
			if (ret == -1)
			{
				printf("该课程暂时没有在系统中，请录入系统:\n");
				Push_Class(cl);
			}
			ret = Search_ClassNumber(cl, Teacher_ClassNumber);
			
			//现在就要录入课程信息了
			//先改变科任老师
			//拷贝课程信息
			Copy_Info(T, cl, ret);


			break;
		}
		//Teacher_Age	1	int

		if (select == 2)//按照课程名进行查询
		{
			scanf("%s", Teacher_ClassName);

			//按照课程名称搜索对应课程的序号
			int ret = Search_ClassName(cl, Teacher_ClassName);
			if (ret == -1)
			{
				printf("系统中没有该课程，请录入系统:\n");
				Push_Class(cl);
			}
			Copy_Info(T, cl, ret);

			break;
		}
		printf("输入错误，请重新输入:\n");
	}
	T->Teacher_size++;
	printf("输入完成\n");
}





//3.打印老师信息
void Print_Teacher(Teacher* T)
{
	printf("教师及其所授课程信息如下所示:\n");
	printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("                                                             教师信息                                                                                      |\n");
	printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("%-10s|%-11s|%-5s|%-8s|%-5s|%-15s|%-10s|%-20s|%-20s|%-20s|%-10s|%-10s|\n", 
		"教师号", "教师姓名", "性别", "学历", "年龄","电话号码", "课程号", "所授课程名称", "课程开始日期", "课程结束日期","所选人数","课时");
	printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	for (int i = 0; i < T->Teacher_size; i++)
	{
		int class_time = 2;
		printf("%-10d|%-11s|%-5s|%-8s|%-5d|%-15s|", T->Data[i].Teacher_Number,//教师号
			T->Data[i].Teacher_Name,//姓名
			T->Data[i].Teacher_Sex,//性别
			T->Data[i].Teacher_educational_background,//学历
			T->Data[i].Teacher_Age,//年龄
			T->Data[i].Teacher_TelephoneNumber//电话
			//T->Data[i].Teacher_Class_Person//选这门科的人数
		);
		for (int j = 0; j < T->Data[i].Teacher_iClass; j++)
		{
			printf("%-10d|%-20s|%-20s|%-20s|", T->Data[i].Teacher_ClassINfo[j].Class_Number,//课程号
				T->Data[i].Teacher_ClassINfo[j].Class_Name,//课程名
				//T->Data[i].Teacher_ClassINfo[j].Class_Teacher,//科任老师
				T->Data[i].Teacher_ClassINfo[j].Class_StartDate,//课程开始时间
				T->Data[i].Teacher_ClassINfo[j].Class_EndDate//结束时间
			);
		}
		printf("%-10d|", T->Data[i].Teacher_Class_Person);
		if (T->Data[i].Teacher_Class_Person > 3&&T->Data[i].Teacher_Class_Person%3==0)
		{
			class_time= class_time + T->Data[i].Teacher_Class_Person / 3 - 1;
		}
		if (T->Data[i].Teacher_Class_Person > 3 && T->Data[i].Teacher_Class_Person % 3 != 0)
		{
			class_time = class_time + T->Data[i].Teacher_Class_Person / 3;
		}
		printf("%-10d|\n", class_time);
		printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	}
}


//4.将老师信息保存到文件中去
void Save_Teacher(Teacher* T)
{
	
		//打开文件
		FILE* pfOut = fopen("Teacher.txt", "wb");
		if (pfOut == NULL)
		{
			printf("Save_Teacher::%s\n", strerror(errno));
			return;
		}
		//写数据
		int i = 0;
		for (i = 0; i < T->Teacher_size; i++)
		{
			fwrite(T->Data+i, sizeof(Teacher_Info), 1, pfOut);
		}

		//关闭文件
		fclose(pfOut);
		pfOut = NULL;
}

//5.将教师信息进行加载
void Loading_Teacher(Teacher* T)
{
	//打开文件
	FILE* pfIn = fopen("Teacher.txt", "rb");
	if (pfIn == NULL)
	{
		printf("Loading_Teacher::%s\n", strerror(errno));
		return;
	}
	//读文件内容，教师信息表中
	Teacher_Info tmp = { 0 };
	while (fread(&tmp, sizeof(Teacher_Info), 1, pfIn))
	{
		//检测是否要增容
		Add_Teacher_Capacity(T);
		//存储元素
		T->Data[T->Teacher_size] = tmp;
		T->Teacher_size++;
	}

	//关闭文件
	fclose(pfIn);
	pfIn = NULL;
}


//6.查询指定老师
void Find_Teacher(Teacher* T)
{
	int Teacher_Number;
	char Teacher_Name[100];
	int select = 0;
	while (1)
	{
		printf("请按照下列选项选择对应的功能:\n");
		printf("1.按照教师号进行查询\n2.按照教师名进行查询\n");
		printf("请输入相应功能所对对应序号:\n");
		scanf("%d", &select);
		if (select == 1)
		{
			printf("请输入教师号进行查询:\n");
			scanf("%d", &Teacher_Number);
			int ret = Search_TeacherNumber(T, Teacher_Number);
			if (ret == -1)
			{
				printf("暂未找到该老师\n");
			}
			else
			{
				printf("教师及其所授课程信息如下所示:\n");
				printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
				printf("                                                             教师信息                                                                                      |\n");
				printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
				printf("%-10s|%-11s|%-5s|%-8s|%-5s|%-15s|%-10s|%-20s|%-20s|%-20s|%-10s|%-10s|\n",
					"教师号", "教师姓名", "性别", "学历", "年龄", "电话号码", "课程号", "所授课程名称", "课程开始日期", "课程结束日期", "所选人数", "课时");
				printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
				int class_time = 2;
				printf("%-10d|%-11s|%-5s|%-8s|%-5d|%-15s|", T->Data[ret].Teacher_Number,//教师号
					T->Data[ret].Teacher_Name,//姓名
					T->Data[ret].Teacher_Sex,//性别
					T->Data[ret].Teacher_educational_background,//学历
					T->Data[ret].Teacher_Age,//年龄
					T->Data[ret].Teacher_TelephoneNumber//电话
					//T->Data[i].Teacher_Class_Person//选这门科的人数
				);
				for (int j = 0; j < T->Data[ret].Teacher_iClass; j++)
				{
					printf("%-10d|%-20s|%-20s|%-20s|", T->Data[ret].Teacher_ClassINfo[j].Class_Number,//课程号
						T->Data[ret].Teacher_ClassINfo[j].Class_Name,//课程名
						//T->Data[i].Teacher_ClassINfo[j].Class_Teacher,//科任老师
						T->Data[ret].Teacher_ClassINfo[j].Class_StartDate,//课程开始时间
						T->Data[ret].Teacher_ClassINfo[j].Class_EndDate//结束时间
					);
				}
				printf("%-10d|", T->Data[ret].Teacher_Class_Person);
				if (T->Data[ret].Teacher_Class_Person > 3 && T->Data[ret].Teacher_Class_Person % 3 == 0)
				{
					class_time = class_time + T->Data[ret].Teacher_Class_Person / 3 - 1;
				}
				if (T->Data[ret].Teacher_Class_Person > 3 && T->Data[ret].Teacher_Class_Person % 3 != 0)
				{
					class_time = class_time + T->Data[ret].Teacher_Class_Person / 3;
				}
				printf("%-10d|\n", class_time);
				printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
			}
			break;
		}
		else if (select == 2)
		{
			printf("请输入教师姓名进行查询:\n");
			scanf("%s", &Teacher_Name);
			int ret = Search_TeacherName(T, Teacher_Name);
			if (ret == -1)
			{
				printf("暂未找到该老师\n");
			}
			else
			{
				printf("教师及其所授课程信息如下所示:\n");
				printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
				printf("                                                             教师信息                                                                                      |\n");
				printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
				printf("%-10s|%-11s|%-5s|%-8s|%-5s|%-15s|%-10s|%-20s|%-20s|%-20s|%-10s|%-10s|\n",
					"教师号", "教师姓名", "性别", "学历", "年龄", "电话号码", "课程号", "所授课程名称", "课程开始日期", "课程结束日期", "所选人数", "课时");
				printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
				int class_time = 2;
				printf("%-10d|%-11s|%-5s|%-8s|%-5d|%-15s|", T->Data[ret].Teacher_Number,//教师号
					T->Data[ret].Teacher_Name,//姓名
					T->Data[ret].Teacher_Sex,//性别
					T->Data[ret].Teacher_educational_background,//学历
					T->Data[ret].Teacher_Age,//年龄
					T->Data[ret].Teacher_TelephoneNumber//电话
					//T->Data[i].Teacher_Class_Person//选这门科的人数
				);
				for (int j = 0; j < T->Data[ret].Teacher_iClass; j++)
				{
					printf("%-10d|%-20s|%-20s|%-20s|", T->Data[ret].Teacher_ClassINfo[j].Class_Number,//课程号
						T->Data[ret].Teacher_ClassINfo[j].Class_Name,//课程名
						//T->Data[i].Teacher_ClassINfo[j].Class_Teacher,//科任老师
						T->Data[ret].Teacher_ClassINfo[j].Class_StartDate,//课程开始时间
						T->Data[ret].Teacher_ClassINfo[j].Class_EndDate//结束时间
					);
				}
				printf("%-10d|", T->Data[ret].Teacher_Class_Person);
				if (T->Data[ret].Teacher_Class_Person > 3 && T->Data[ret].Teacher_Class_Person % 3 == 0)
				{
					class_time = class_time + T->Data[ret].Teacher_Class_Person / 3 - 1;
				}
				if (T->Data[ret].Teacher_Class_Person > 3 && T->Data[ret].Teacher_Class_Person % 3 != 0)
				{
					class_time = class_time + T->Data[ret].Teacher_Class_Person / 3;
				}
				printf("%-10d|\n", class_time);
				printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
			}
			break;
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	}
}








//1.初始化学生信息
void Init_Student(Student* S)
{
	S->Student_capacity = 3;
	S->Student_size = 0;
	S->Data = (Student_Info*)malloc(sizeof(Student_Info) * (S->Student_capacity));
	if (S->Data == NULL)
	{
		printf("初始化失败\n");
		exit(-1);
	}

	for (int i = 0; i < S->Student_capacity; i++)
	{
		S->Data[i].j_Class = 0;
	}
	Loading_Student(S);
}



//2.添加信息


//2.1增容
void Add_Student_Capacity(Student* S)
{
	if (S->Student_capacity == S->Student_size)
	{
		Student_Info* ptr = realloc(S->Data, sizeof(Student_Info) * (S->Student_capacity + 2));
		if (ptr == NULL)
		{
			printf("增容失败\n");
			exit(-1);
		}
		else
		{
			S->Data = ptr;
			for (int i = S->Student_size; i < S->Student_capacity + 2; i++)
			{
				S->Data[i].j_Class = 0;
			}
			S->Student_capacity += 2;
		}
	}

}

//2.2搜寻课程号是否存在，如果课程号存在：该课程的老师不是未知的话就添加老师，如果老师是未知的话说明该课程还没人安排科任老师或者该课程老师还没有确认该课程请联系老师
//如果课程号不存在，说明该课程没有录入系统中，不可以添加该课程

int Search_StudentClassNumber(Student* S, Class* cl,int x)
{
	for (int i = 0; i < cl->Class_size; i++)
	{
		if (cl->Data[i].Class_Number == x)
		{
			return i;
		}
	}
	return -1;
}


//2.3课程号存在后将课程信息录入学生系统
void Push_Student_Class(Student* S, Class* cl, int x)
{
	S->Data[S->Student_size].Student_ClassInfo[S->Data[S->Student_size].j_Class].Class_Number = cl->Data[x].Class_Number;  //录入学生的课程号

	strcpy(S->Data[S->Student_size].Student_ClassInfo[S->Data[S->Student_size].j_Class].Class_Name, cl->Data[x].Class_Name);  //录入学生所上课程的课程名称

	strcpy(S->Data[S->Student_size].Student_ClassInfo[S->Data[S->Student_size].j_Class].Class_Teacher, cl->Data[x].Class_Teacher);//录入该课程的老师

	strcpy(S->Data[S->Student_size].Student_ClassInfo[S->Data[S->Student_size].j_Class].Class_StartDate, cl->Data[x].Class_StartDate);//录入该课程的开始时间

	strcpy(S->Data[S->Student_size].Student_ClassInfo[S->Data[S->Student_size].j_Class].Class_EndDate, cl->Data[x].Class_EndDate);  //录入课程的结束信息

	S->Data[S->Student_size].j_Class++;

}


//2.4按照课程名称进行录入
int Searche_StudentClassName(Student* S, Class* cl, char StudentClassName[])
{
	for (int i = 0; i < cl->Class_size; i++)
	{
		if (strcmp(cl->Data[i].Class_Name, StudentClassName) == 0)
		{
			return i;
		}
	}
	return -1;
}

//2.5查询老师名字是否存在，将老师课程量进行++
int Search_TeacherName(Teacher* T, char name[])
{
	for (int i = 0; i < T->Teacher_size; i++)
	{
		if (strcmp(T->Data[i].Teacher_Name, name) == 0)
			return i;
	}
	return -1;
}

void Push_Student(Student* S, Class* cl,Teacher*T)
{
	//1.空间不够进行增容
	Add_Student_Capacity(S);

	//2.成功之后就是输入数据了
	while (1)
	{
		printf("请输入学生学号(学号必须为大于1的整数):\n");
		scanf("%d", &S->Data[S->Student_size].Student_Number);
		if (S->Data[S->Student_size].Student_Number > 1)
		{
			break;
		}
		else
		{
			printf("学生学号必须为大于的整数，请重新输入\n");
		}
	}
	printf("请输入学生姓名:\n");
	scanf("%s", S->Data[S->Student_size].Student_Name);

	//3.录入基础课程信息
	printf("请根据下列课程信息为学生添加适合的课程:\n");
	Print_Class(cl);
	printf("请输入课程号/课程名称录入课程:\n");
	printf("1.按照课程号录入\n2.按照课程名称录入:\n");

	int Student_ClassNumber;

	char Student_ClassName[30];

	int select;
	char str[5] = "待定";
	while (1)
	{
	
		scanf("%d", &select);
		if (select == 1)
		{
			while (1)
			{
				printf("请输入课程号进行录入:\n");
				scanf("%d", &Student_ClassNumber);

				int ret = Search_StudentClassNumber(S, cl, Student_ClassNumber);
				//说明根据课程号可以搜寻到该课程
				if (ret != -1)
				{
					//说明该课程已经有老师进行认领了,说明有老师了，那么搜索对应老师所对应的序号
					if (strcmp(cl->Data[ret].Class_Teacher, str) != 0)
					{
						//这时添加课程
						Push_Student_Class(S, cl, ret);
						S->Student_size++;

						//按照老师的名字查找老师对应的序号
						int res=Search_TeacherName(T, cl->Data[ret].Class_Teacher);
						T->Data[res].Teacher_Class_Person++;

						break;

					}
					//说明该课程还没有老师进行认领/或者确认
					else
					{
						printf("该课程还没有科任老师/科任老师还没有录入系统，请联系老师/教秘进行处理，先选择其它课程\n");
					}
				}

				//说明课程表中没有该课程
				else
				{
					printf("该课程尚未录入系统，请重新课程号进行查询录入\n");
				}

			}


			break;
		}

		else if (select == 2)
		{
			while (1)
			{
				printf("请输入课程名称进行录入:\n");
				scanf("%s", Student_ClassName);
				int ret = Searche_StudentClassName(S, cl, Student_ClassName);

				//说明课程表中含有该课程
				if (ret != -1)
				{
					if (strcmp(cl->Data[ret].Class_Teacher, str) != 0)
					{
						Push_Student_Class(S, cl, ret);
						S->Student_size++;
						int res = Search_TeacherName(T, cl->Data[ret].Class_Teacher);
						T->Data[res].Teacher_Class_Person++;
						break;
					}
					else
					{
						printf("该课程还没有科任老师/科任老师还没有录入系统，请联系老师/教秘进行处理，先选择其它课程\n");
					}
				}
				else
				{
					printf("该课程尚未录入系统，请重新输入课程名称进行查询录入");
				}
			}


			break;
		}
		else
		{
			printf("输入错误，请重新输入\n");
			
		}
	}
	printf("该学生录入系统成功\n");
}


//3.打印学生信息
void Print_Student(Student* S)
{
	printf("学生信息如下所示:\n");
	printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
	printf("                                                         学生信息                                                                  |\n");
	printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
	printf("%-10s|%-20s|%-15s|%-20s|%-20s|%-20s|%-20s|\n", "学生学号", "学生姓名", "课程号", "所选课程名称", "科任老师", "课程开始日期", "课程结束日期");
	printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
	for (int i = 0; i < S->Student_size; i++)
	{
		//打印学生基本信息
		printf("%-10d|%-20s|", S->Data[i].Student_Number, S->Data[i].Student_Name);

		//打印该学生课程的基本信息
		for (int j = 0; j < S->Data[i].j_Class; j++)
		{
			printf("%-15d|%-20s|%-20s|%-20s|%-20s|", S->Data[i].Student_ClassInfo[j].Class_Number,//该学生的课程号·
				S->Data[i].Student_ClassInfo[j].Class_Name,//该学生的课程名称
				S->Data[i].Student_ClassInfo[j].Class_Teacher,//该学生课程的老师
				S->Data[i].Student_ClassInfo[j].Class_StartDate,//该门课程开始时间
				S->Data[i].Student_ClassInfo[j].Class_EndDate//该门课程结束时间
			);
		}

		printf("\n");
		printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
	}
}



//4.将学生信息保存到文件中去
void Save_Student(Student* S)
{
	//打开文件
	FILE* pfOut = fopen("Student.txt", "wb");
	if (pfOut == NULL)
	{
		printf("Save_Student::%s\n", strerror(errno));
		return;
	}
	//写数据
	int i = 0;
	for (i = 0; i < S->Student_size; i++)
	{
		fwrite(S->Data+i, sizeof(Student_Info), 1, pfOut);
	}

	//关闭文件
	fclose(pfOut);
	pfOut = NULL;
}



//5.加载学生信息
void Loading_Student(Student* S)
{
	//打开文件
	FILE* pfIn = fopen("Student.txt", "rb");
	if (pfIn == NULL)
	{
		printf("Loading_Student::%s\n", strerror(errno));
		return;
	}
	//读文件内容，学生信息表中
	Student_Info tmp = { 0 };
	while (fread(&tmp, sizeof(Student_Info), 1, pfIn))
	{
		//检测是否要增容
		Add_Student_Capacity(S);
		//存储元素
		S->Data[S->Student_size] = tmp;
		S->Student_size++;
	}

	//关闭文件
	fclose(pfIn);
	pfIn = NULL;
}


//查询学号是否存在
int Search_StudentNumber(Student* S, int x)
{
	for (int i = 0; i < S->Student_size; i++)
	{
		if (S->Data[i].Student_Number == x)
		{
			return i;
		}
	}
	return -1;
}

//查询姓名是否存在
int Search_StudentName(Student* S, char Name[])
{
	for (int i = 0; i < S->Student_size; i++)
	{
		if (strcmp(S->Data[i].Student_Name, Name) == 0)
		{
			return i;
		}
	}
	return -1;
}


//6.查询指定学生
void Find_Student(Student* S)
{
	int Student_Number;
	char Student_Name[100];
	int select = 0;
	while (1)
	{
		printf("请按照下列选项选择对应的功能:\n");
		printf("1.按照学号进行查询\n2.按照学生姓名进行查询\n");
		printf("请输入相应功能所对对应序号:\n");
		scanf("%d", &select);
		if (select == 1)
		{
			printf("请输入要查询学生的学号:\n");
			scanf("%d", &Student_Number);
			int ret = Search_StudentNumber(S, Student_Number);
			if (ret == -1)
			{
				printf("暂未找到该学生\n");
			}
			else
			{
				printf("学生信息如下所示:\n");
				printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
				printf("                                                         学生信息                                                                  |\n");
				printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
				printf("%-10s|%-20s|%-15s|%-20s|%-20s|%-20s|%-20s|\n", "学生学号", "学生姓名", "课程号", "所选课程名称", "科任老师", "课程开始日期", "课程结束日期");
				printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
				printf("%-10d|%-20s|", S->Data[ret].Student_Number, S->Data[ret].Student_Name);

				//打印该学生课程的基本信息
				for (int j = 0; j < S->Data[ret].j_Class; j++)
				{
					printf("%-15d|%-20s|%-20s|%-20s|%-20s|", S->Data[ret].Student_ClassInfo[j].Class_Number,//该学生的课程号·
						S->Data[ret].Student_ClassInfo[j].Class_Name,//该学生的课程名称
						S->Data[ret].Student_ClassInfo[j].Class_Teacher,//该学生课程的老师
						S->Data[ret].Student_ClassInfo[j].Class_StartDate,//该门课程开始时间
						S->Data[ret].Student_ClassInfo[j].Class_EndDate//该门课程结束时间
					);
				}

				printf("\n");
				printf("-----------------------------------------------------------------------------------------------------------------------------------\n");

			}
			
			break;
		}
		else if (select == 2)
		{
			printf("请输入要查询学生的姓名:\n");
			scanf("%s", Student_Name);
			int ret = Search_StudentName(S, Student_Name);
			if (ret == -1)
			{
				printf("暂未找到该学生\n");
			}
			else
			{
				printf("学生信息如下所示:\n");
				printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
				printf("                                                         学生信息                                                                  |\n");
				printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
				printf("%-10s|%-20s|%-15s|%-20s|%-20s|%-20s|%-20s|\n", "学生学号", "学生姓名", "课程号", "所选课程名称", "科任老师", "课程开始日期", "课程结束日期");
				printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
				printf("%-10d|%-20s|", S->Data[ret].Student_Number, S->Data[ret].Student_Name);

				//打印该学生课程的基本信息
				for (int j = 0; j < S->Data[ret].j_Class; j++)
				{
					printf("%-15d|%-20s|%-20s|%-20s|%-20s|", S->Data[ret].Student_ClassInfo[j].Class_Number,//该学生的课程号·
						S->Data[ret].Student_ClassInfo[j].Class_Name,//该学生的课程名称
						S->Data[ret].Student_ClassInfo[j].Class_Teacher,//该学生课程的老师
						S->Data[ret].Student_ClassInfo[j].Class_StartDate,//该门课程开始时间
						S->Data[ret].Student_ClassInfo[j].Class_EndDate//该门课程结束时间
					);
				}

				printf("\n");
				printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
			}
			break;
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	}
}

