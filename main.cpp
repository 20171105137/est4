//
//  main.cpp
//  est4
//
//  Created by s20171105137 on 2018/7/8.
//  Copyright © 2018年 s20171105137. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

const char * file = "/Users/s20171105137/Desktop/student1.csv";

struct student
{
    int stu_id;
    char stu_name[20];
    char stu_sex[20];
    int stu_dateofbirth;
    char stu_class[20];
    char stu_phoneNO[20];
    int stu_judge1;
    int stu_judge2;
    int stu_judge3;
    int stu_judge4;
    int stu_judge5;
    int stu_score;
};

int main(int argc, const char * argv[])
{
    // insert code here...
    using namespace std;
    char ch;
    int  i;
    struct student s[100];
    FILE *fl1,*fl2;
    ifstream fin;
    fin.open(file);
    
    if(fin.is_open())
    {
        cout<<"当前生成的文件"<<file<<"file:\n";
        fscanf(fl1,"%*[^\n]%*c");
        while (fin.get(ch))
        {
            fscanf(fl1,"%d,%[^,],%[^,],%d,%[^,],%[^,],%d,%d,%d,%d,%d",&s[i].stu_id,&s[i].stu_name,&s[i].stu_sex,&s[i].stu_dateofbirth,&s[i].stu_class,&s[i].stu_phoneNO,&s[i].stu_judge1,&s[i].stu_judge2,&s[i].stu_judge3,&s[i].stu_judge4,&s[i].stu_judge5);
            i++;
            cout  << ch;
        }
        fin.close();
    
    }
    
    ofstream fout(file,ios::out|ios::app);
    if(!fout.is_open())
    {
        cerr<<"can't open"<<file<<"file for out put.\n";
        exit (EXIT_FAILURE);
        
    }
    
    cout <<"shuru mingzi:\n";
    string name;
    while(getline(cin,name)&&name.size()>0)
    {
        fout<<name<<","<<endl;
        
    }
    fout.close();
        return 0;
    }
