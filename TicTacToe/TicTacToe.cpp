#include<iostream.h>
#include<conio.h>
#include<stdio.h>
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
 void dispboard()
 {
 cout<<"\t\t\t\tXOX\n\n\n";
 cout<<"\t\t\t|  "<<board[0][0]<<"   |  "<<board[0][1]<<"   |   "<<board[0][2]<<"   |\n";
 cout<<"\t\t\t-----------------------\n";
 cout<<"\t\t\t|  "<<board[1][0]<<"  | "<<board[1][1]<<"   |   "<<board[1][2]<<"   |\n";
 cout<<"\t\t\t-----------------------\n";
 cout<<"\t\t\t|  "<<board[2][0]<<"   |  "<<board[2][1]<<"   |   "<<board[2][2]<<"   |\n";
 }
void main()
{
 clrscr();
 char name1[20],name2[20];
 int a[5],b[5];
 dispboard();
 cout<<"\n ENTER NAME OF 1ST PLAYER :";
 gets(name1);
 cout<<"\n ENTER NAME OF 2ND PLAYER :";
 gets(name2);
 cout<<"PRESS ENTER TO START GAME\n";
 getch();
 clrscr();
 dispboard();
 for(int i=0;i<=3;i++)
 {//for
 aa:cout<<endl;puts(name1);
 cout<<"enter any number:";
 cin>>a[i];
 for(int j=0;j<4;j++)
 {if(a[i]==b[j])
 {cout<<"enter any other number";goto aa;}}
 switch(a[i])
 { case 1:if (board[0][0]=='1') board[0][0]='x'; else goto aa; break;
   case 2:if (board[0][1]=='2') board[0][1]='x'; else goto aa; break;
   case 3:if (board[0][2]=='3') board[0][2]='x'; else goto aa; break;
   case 4:if (board[1][0]=='4') board[1][0]='x'; else goto aa; break;
   case 5:if (board[1][1]=='5') board[1][1]='x'; else goto aa; break;
   case 6:if (board[1][2]=='6') board[1][2]='x'; else goto aa; break;
   case 7:if (board[2][0]=='7') board[2][0]='x'; else goto aa; break;
   case 8:if (board[2][1]=='8') board[2][1]='x'; else goto aa; break;
   case 9:if (board[2][2]=='9') board[2][2]='x'; else goto aa; break;
   default:cout<<"enter a number inside the board!!!";goto aa;
 }
 clrscr();
 dispboard();
 if(i>=2)
 {//if
 if((board[0][0]=='x')&&(board[0][1]=='x')&&(board[0][2]=='x'))
 {puts(name1);cout<<"  winner winner chicken dinner!!!YOU WON!!";goto ee;}
 else if((board[1][0]=='x')&&(board[1][1]=='x')&&(board[1][2]=='x'))
 {puts(name1);cout<<"  winner winner chicken dinner!!YOU WON!!" ;goto ee;}
 else if((board[2][0]=='x')&&(board[2][1]=='x')&&(board[2][2]=='x'))
 {puts(name1);cout<<"  winner winner chicken dinner!!YOU WON!!";goto ee;}
 else if((board[0][0]=='x')&&(board[1][0]=='x')&&(board[2][0]=='x'))
 {puts(name1);cout<<"  winner winner chicken dinner!!YOU WON!!";goto ee;}
 else if((board[0][1]=='x')&&(board[1][1]=='x')&&(board[2][1]=='x'))
 {puts(name1);cout<<"  winner winner chicken dinner!!YOU WON!!";goto ee;}
 else if((board[0][2]=='x')&&(board[1][2]=='x')&&(board[2][2]=='x'))
 {puts(name1);cout<<"  winner winner chicken dinner!!YOU WON!!";goto ee;}
 else if((board[0][0]=='x')&&(board[1][1]=='x')&&(board[2][2]=='x'))
 {puts(name1);cout<<"  winner winner chicken dinner!!YOU WON!!";goto ee;}
 else if((board[0][2]=='x')&&(board[1][1]=='x')&&(board[2][0]=='x'))
 {puts(name1);cout<<"  winner winner chicken dinner!!YOU WON!!";goto ee;}
 else if((board[0][0]=='o')&&(board[0][1]=='o')&&(board[0][2]=='o'))
 {puts(name2);cout<<"  winner winner chicken dinner!!YOU WON!!";goto ee;}
 else if((board[1][0]=='o')&&(board[1][1]=='o')&&(board[1][2]=='o'))
 {puts(name2);cout<<"  winner winner chicken dinner!!YOU WON!!";goto ee;}
 else if((board[2][0]=='o')&&(board[2][1]=='o')&&(board[2][2]=='o'))
 {puts(name2);cout<<"  winner winner chicken dinner!!YOU WON!!";goto ee;}
 else if((board[0][0]=='o')&&(board[1][0]=='o')&&(board[2][0]=='o'))
 {puts(name2);cout<<"  winner winner chicken dinner!!YOU WON!!";goto ee;}
 else if((board[0][1]=='o')&&(board[1][1]=='o')&&(board[2][1]=='o'))
 {puts(name2);cout<<"  winner winner chicken dinner!!YOU WON!!";goto ee;}
 else if((board[0][2]=='o')&&(board[1][2]=='o')&&(board[2][2]=='o'))
 {puts(name2);cout<<"  winner winner chicken dinner!!YOU WON!!";goto ee;}
 else if((board[0][0]=='o')&&(board[1][1]=='o')&&(board[2][2]=='o'))
 {puts(name2);cout<<"  winner winner chicken dinner!!YOU WON!!";goto ee;}
 else if((board[0][2]=='o')&&(board[1][1]=='o')&&(board[2][0]=='o'))
 {puts(name2);cout<<"  winner winner chicken dinner!!YOU WON!!";goto ee;}
 }//if
 bb:puts(name2);
 cout<<"enter any number:";
 cin>>b[i];
 for(j=0;j<4;j++)
 {if(b[i]==a[j])
 {cout<<"enter another number!!!";
 goto bb;}}
   switch(b[i])
   {
    case 1:if (board[0][0]=='1') board[0][0]='o'; else goto aa; break;
    case 2:if (board[0][1]=='2') board[0][1]='o'; else goto aa; break;
    case 3:if (board[0][2]=='3') board[0][2]='o'; else goto aa; break;
    case 4:if (board[1][0]=='4') board[1][0]='o'; else goto aa; break;
    case 5:if (board[1][1]=='5') board[1][1]='o'; else goto aa; break;
    case 6:if (board[1][2]=='6') board[1][2]='o'; else goto aa; break;
    case 7:if (board[2][0]=='7') board[2][0]='o'; else goto aa; break;
    case 8:if (board[2][1]=='8') board[2][1]='o'; else goto aa; break;
    case 9:if (board[2][2]=='9') board[2][2]='o'; else goto aa; break;
    default:cout<<"enter a number inside the board!!!";goto bb;
   }
  clrscr();
 dispboard();
 if(i>=2)
 {//if
 if((board[0][0]=='x')&&(board[0][1]=='x')&&(board[0][2]=='x'))
 {puts(name1);cout<<"  winner winner chicken dinner!!!YOU WON!!";goto ee;}
 else if((board[1][0]=='x')&&(board[1][1]=='x')&&(board[1][2]=='x'))
 {puts(name1);cout<<"  winner winner chicken dinner!!YOU WON!!" ;goto ee;}
 else if((board[2][0]=='x')&&(board[2][1]=='x')&&(board[2][2]=='x'))
 {puts(name1);cout<<"  winner winner chicken dinner!!YOU WON!!";goto ee;}
 else if((board[0][0]=='x')&&(board[1][0]=='x')&&(board[2][0]=='x'))
 {puts(name1);cout<<"  winner winner chicken dinner!!YOU WON!!";goto ee;}
 else if((board[0][1]=='x')&&(board[1][1]=='x')&&(board[2][1]=='x'))
 {puts(name1);cout<<"  winner winner chicken dinner!!YOU WON!!";goto ee;}
 else if((board[0][2]=='x')&&(board[1][2]=='x')&&(board[2][2]=='x'))
 {puts(name1);cout<<"  winner winner chicken dinner!!YOU WON!!";goto ee;}
 else if((board[0][0]=='x')&&(board[1][1]=='x')&&(board[2][2]=='x'))
 {puts(name1);cout<<"  winner winner chicken dinner!!YOU WON!!";goto ee;}
 else if((board[0][2]=='x')&&(board[1][1]=='x')&&(board[2][0]=='x'))
 {puts(name1);cout<<"  winner winner chicken dinner!!YOU WON!!";goto ee;}
 else if((board[0][0]=='o')&&(board[0][1]=='o')&&(board[0][2]=='o'))
 {puts(name2);cout<<"  winner winner chicken dinner!!YOU WON!!";goto ee;}
 else if((board[1][0]=='o')&&(board[1][1]=='o')&&(board[1][2]=='o'))
 {puts(name2);cout<<"  winner winner chicken dinner!!YOU WON!!";goto ee;}
 else if((board[2][0]=='o')&&(board[2][1]=='o')&&(board[2][2]=='o'))
 {puts(name2);cout<<"  winner winner chicken dinner!!YOU WON!!";goto ee;}
 else if((board[0][0]=='o')&&(board[1][0]=='o')&&(board[2][0]=='o'))
 {puts(name2);cout<<"  winner winner chicken dinner!!YOU WON!!";goto ee;}
 else if((board[0][1]=='o')&&(board[1][1]=='o')&&(board[2][1]=='o'))
 {puts(name2);cout<<"  winner winner chicken dinner!!YOU WON!!";goto ee;}
 else if((board[0][2]=='o')&&(board[1][2]=='o')&&(board[2][2]=='o'))
 {puts(name2);cout<<"  winner winner chicken dinner!!YOU WON!!";goto ee;}
 else if((board[0][0]=='o')&&(board[1][1]=='o')&&(board[2][2]=='o'))
 {puts(name2);cout<<"  winner winner chicken dinner!!YOU WON!!";goto ee;}
 else if((board[0][2]=='o')&&(board[1][1]=='o')&&(board[2][0]=='o'))
 {puts(name2);cout<<"  winner winner chicken dinner!!YOU WON!!";goto ee;}
 }//if
 }//for
 cout<<"\nDRAW";
 ee:getch();
}
