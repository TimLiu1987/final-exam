# final-exam 期末考試練習
//tostring 用sstream
//
human
string    名子    name    
int        年齡    age
bool    性別    sex

func:
human()
human()
string toString()    Name,age,sex        (sex 要用 男or女)

BMI
double    身高    height
double    體重    weight

Func:
BMI()
BMI()
double countBMI()
string toString()     身高/體重(BMI:bmi)

Employee(human)
string    職稱    job
double    薪水    salary
int 工作月份    month
BMI    就BMI        bmi    

Func:
Employee()
double Total()        薪水*工作月份
int compare()        (1:大於,0:等於,-1:小於) 比較薪水  丟入EMPLOYEE &指標 (Employee &person2)
double bonus()        薪水*工作月份 *0.3:
string toString()    human.tostring (Bmi.toString)(job,salary,month,獎金:bonus)
                    John,16,男 (1.7/55(BMI:19.03)) (Manager-22000,工作月份:3,獎金:19800)
void setBMI()

Main
Func:
Print()                輸出薪水比較cout


Main()
(名字 職稱 年齡 性別 身高(m) 體重(kg) 薪水 月份)
person1: John 16 Manager 1 1.7 66 58000 16
person2: Candy 65 Boss 0 1.4 85 72000 11
person3: Mary 85 Cleaner 0 1.8 99 32000 53

輸入:
名字 年齡 性別 身高(m) 體重(kg) 薪水 月份

person1 改名字 年齡 性別
person2 改 身高 體重
person3 改 薪水 月份

輸出
全部人TOSTRING (寫在Print裡)
person1比較Person2薪水
person1比較Person3薪水
person2比較Person3薪水

實際輸入
Canary 35 0 1.6 72 96000 17 

實際輸出:
Canary,35,女 (1.7/66(BMI:22.84)) (Manager-58000,工作月份:16,獎金:278400)
Candy,65,女 (1.6/62(BMI:24.22)) (Boss-72000,工作月份:11,獎金:237600)
Mary,85,女 (1.8/99(BMI:30.56)) (Cleaner-96000,工作月份:17,獎金:489600)
Canary薪水比Candy低
Canary薪水比Mary低
Mary薪水比Candy低



期末考試練習
