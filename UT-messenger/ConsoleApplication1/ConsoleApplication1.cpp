// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <time.h>
int username1 = 0; //username hayi ke agar dorost budand save mishavand
int username2 = 0;
int username3 = 0;
int password1 = 0; //password username avvali ke gharar ast save ast
int password2 = 0;
int password3 = 0;
int needbreak = 0;//zaman hayi ke niaz be break ya continue dar barname ast amma loop dar kharej tavabe vujud darad
int password = 0; //password hayi ke agar dorost budand save mishavand
int wrongpassword = 0;//counter baraye tedad dafaate eshtebah vared shode password
int phonenumbercounter = 0; //counter baraye tedad karbar hayi ke gharar ast vared shavand ke bishtar az 3ta nashavad
int loginprogress = 0; //amaliyat hayi ke badaz login kardan gharar ast anjam shavad
void delay(int number_of_seconds) //tabe baraye delay dadan
{ 
    // tabdilkardan be milisanie zira vurudie tavabe time.h be milisanie ast
    int milli_seconds = 1000 * number_of_seconds; 
  
    // barabar kardane start time ba clock
    clock_t start_time = clock(); 
  
    // ta zamani ke be delayi ke mikhastim nareside im umur dar yek loope khali bemanad
    while (clock() < start_time + milli_seconds) 
        ; 
} 
int login(int username,int password) {
	
	
	 if (username == username1) { //agarusername vared shode ba username save shode 1 yeki bud		
		if (password == password1) { //agar password ba password1 yeki bud
			while (1)
			{
				wrongpassword = 0;
				system("cls");//pak kardane safhe
				printf("login progress succesfuly\n");
				printf("choose one of the following option\n"); //login kamel shod
				printf("1.send message\n 2.show messages\n 3.creat channel\n 4.creat group\n 5.logout\n");//entekhabe ammaliyat
				scanf_s("%d", &loginprogress);
				if (loginprogress == 5) { //logout
					system("cls");
					printf("logout progress succesfuly\n");
					
					break;
				}
				else {
					system("cls");
					printf("this progress not exist or not compeleted yet\n");
					delay(5);
					continue;
				}
			}
		}
		else {
			system("cls");
			printf("wrong password! try again\n");
			wrongpassword++;
			needbreak = 2;
			return needbreak;
		}
	}
	else if (username == username2) { // haman comment haye ghabli serfan baraye username2
		if (password == password2) {
			while (1)
			{
				wrongpassword = 0;
				system("cls");
				printf("login progress succesfuly\n");
				printf("choose one of the following option\n");
				printf("1.send message\n 2.show messages\n 3.creat channel\n 4.creat group\n 5.logout\n");
				scanf_s("%d", &loginprogress);
				if (loginprogress == 5) {
					system("cls");
					printf("logout progress succesfuly\n");
					break;
				}
				else {
					system("cls");
					printf("this progress not exist or not compeleted yet\n");
					delay(5);
					continue;
				}
			}
		}
		else {
			system("cls");
			printf("wrong password! try again\n");
			wrongpassword++;
			needbreak = 2;
			return needbreak;
		}
	}
	else if (username == username3) {
		if (password == password3) {
			while (1)
			{
				wrongpassword = 0;
				system("cls");
				printf("login progress succesfuly\n");
				printf("choose one of the following option\n");
				printf("1.send message\n 2.show messages\n 3.creat channel\n 4.creat group\n 5.logout\n");
				scanf_s("%d", &loginprogress);
				if (loginprogress == 5) {
					system("cls");
					printf("logout progress succesfuly\n");
					break;
				}
				else {
					system("cls");
					printf("this progress not exist or not compeleted yet\n");
					delay(5);
					continue;
				}
			}
		}
		else {
			system("cls");
			printf("wrong password! try again\n");
			wrongpassword++;
			needbreak = 2;
			return needbreak;
		}
	}
	else {//agar username vared shode az ghabl vujud nadasht
		system("cls");
		printf("this username does not exist\n");
		needbreak = 1;//haman break
		return needbreak;
	}
}
int signup(int username) {
	if (username >100000000 && username< 10000000000 && username != username1 && username != username2 && username != username3) { //check konim ke aya username sahih ast ya tekrari nabashad
		while (1) { //ta zamani ke passworde dorosti vared nashode ast
			printf("enter your password:\n");
			scanf_s("%d", &password); //gereftane password
			if (password > 999999 || password < 0) { //check konim ke passworde sahihi vared shode ast ya na
				system("cls");
				printf("password must be maximum 6digit\n");
			}
			else {//agar password sahih bud ...
				phonenumbercounter++;
				if (phonenumbercounter == 1) {//agar avvalin nafar bud dar username1 save shavad
					password1 = password;
					printf("re-enter your password:\n");
					scanf_s("%d", &password);
					if (password == password1) { //check konim ke password hara eyne ham vared karde bashad
						system("cls");
						printf("signup progress succesfuly\n");
						username1 = username;
						break;
					}
					else {
						system("cls");
						printf("passwords doesnt match\n"); //agar password ha yeki nabud :
						continue;
					}
				}
				if (phonenumbercounter == 2) {//agar dovomin nafar bud dar username1 save shavad
					password2 = password;
					printf("re-enter your password:\n");
					scanf_s("%d", &password);
					if (password == password2) {//check konim ke password hara eyne ham vared karde bashad
						system("cls");
						printf("signup progress succesfuly\n");
						username2 = username;
						break;
					}
					else {
						system("cls");
						printf("passwords doesnt match\n");
						continue;
					}
				}
				if (phonenumbercounter == 3) {//agar 3vomin nafar bud dar username1 save shavad
					password3 = password;
					printf("re-enter your password:\n");
					scanf_s("%d", &password);
					if (password == password3) {//check konim ke password hara eyne ham vared karde bashad
						system("cls");
						printf("signup progress succesfuly\n");
						username3 = username;
						break;
					}
					else {
						system("cls");
						printf("passwords doesnt match\n");
						continue;
					}
				}
			}
		}
		needbreak = 1;
		return needbreak;
	}
	else {
		printf("wrong phone number format or this number exist\n");//agar username sahih nabud
		needbreak = 2;
		return needbreak;
	}
	
}

int main()
{
	int username = 0; //username i ke hardafe vared mikonand
	int progress = 0; //ammaliyat hayi ke gharar ast bedune login kardan anjam dade shavad
	while (1) {
		printf("welcome yo UTmessenger\n"); //payam haye vurudi barname
		printf("please choose one of the following options\n");
		printf("1 to signup\t2 to login\t3 to quit\n");
		scanf_s("%d", &progress); //gereftane shomare amaliyati ke gharar ast anjam shavad
		if (progress == 1) { //amaliyate signup
			system("cls");
			if (phonenumbercounter < 3) { //motmaen shavim ke bishtar az 3karbar sabtnam nmikonad
				while (1) { //ta zamani ke sabtnam kamel nashode ast edame dahad
					printf("Enter your phone number: \n");
					scanf_s("%d", &username); //gereftan username
					signup(username);
					if (needbreak == 1) {//agar niaz be break bud
						needbreak = 0;
						break;
						
					}
					if (needbreak == 2) {//agar niaz be continue bud
						needbreak = 0;
						continue;
						
					}
				}
			}
			else {
				system("cls");
				printf("no room to join our community :) \n");//agar 3ta username ha porshode bud
				continue;
			}
		}
		if (progress == 2) { //login
			system("cls");
			printf("Enter your phone number: \n");
			scanf_s("%d", &username);
			printf("enter your password:\n");
			scanf_s("%d", &password);
			login(username,password);
			if (wrongpassword > 2) {//check kardane inke chand bar ramz eshtebah vared shode ast
				system("cls");//pak kardane safhe
							  //printf("%d\n", password1);
				printf("too many attempts login is locked!\ntry to login after 30s\n");
				wrongpassword = 0;
				delay(30);//30 sanie delay
				needbreak = 2;//haman continue
				return needbreak;
			}
			if (needbreak == 1) {
				needbreak = 0;
				break;
				
			}
			if (needbreak == 2) {
				needbreak = 0;
				continue;
				
			}
		}
		if (progress == 3) {//amaliyate exit
			system("cls");
			break;
		}
		if (progress < 0 || progress>3) {//agar amaliyate vared shode kollan vujud nadasht
			printf("there is no progress for this number     try again\n");
			continue;
		}

	}


	system("PAUSE");
    return 0;
}

