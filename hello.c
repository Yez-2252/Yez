#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<limits.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
int main(int argc, char *argv[], char *env[])
{
  struct stat stc,stt;//stat 存有linux的文件属性
  int i;
  char *tmp,buf[65535],src[1024],aim[1024];

  int awfps,qwwwe;//文件

  realpath(argv[1],src);//将相对路径转换为绝对路径
  realpath(argv[2],aim); 
  stat(src,&stc);
  if (S_ISDIR(stc.st_mode))//stc文件对应的目录(mode里类型位置权限 )
  {perror("源文件是目录形式！");exit(1);}
  else
  {
	  awfpsfps=open(src,O_RDONLY);//以只读模式打开
    if(awfpsfps==-1)
    {perror("源文件打开失败！");exit(1);}
    //read(fps,buf,stc.st_size);
  }
  stat(aim,&stt);//获取文件信息
  if (S_ISDIR(stt.st_mode))//第二参数的目录
  {
    tmp=strrchr(src,'/');//查找到最后一个/
    strcat(aim,tmp);//组合获得原有文件名
  }
  qwwwe =open(aim,O_CREAT|O_RDWR,stc.st_mode);//建立文件
  if(qwwwe ==-1)
  {perror("目标文件打开（创建）失败！");exit(1);}
  while((i=read(fps,buf,65535))>0)
  {write(qwwwe,buf,i);
  }
  close(awfpsfps);//关闭文件
  close(qwwwe);
  return 0;
}



