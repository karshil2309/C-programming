/*
	PROGRAMMER NAME : Karshil Sheth
	DOC : 22/04/2017
	PROGRAME : SWITCH : Billing in Switch
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int menu,x,y,q,bill,tbill=0;
	float discount,fbill;
	start: menu:
	clrscr();
	printf("\n\t\t Choose your dish");
	printf("\n 1) Gujarati");
	printf("\n 2) Punjabi");
	printf("\n 3) Chinese ");
	printf("\n 4) South Indian ");
	printf("\n 5) Kindly pay your bill ");
	printf("\n 6) Thanks for visiting");
	scanf("%d",&menu);
	switch(menu)
	{
		case 5:
			printf("\n Your Total Generated bill is =%d",tbill);
			scanf("%d",&tbill);
			discount=tbill*(10/100);
			fbill=tbill-discount;
			printf("\n Final Generated bill is = %f",fbill);

		case 6:	exit(0);
			getch();
		case 1:// guj
		printf("\n\t Gujarati dishes are :");
		printf("\n 1) Roti ");
		printf("\n 2) Sabji");
		printf("\n 3) Sweets");
		printf("\n 4) Specials");
		printf("\n 5) Change my Choice ");
		scanf("%d",&x);
		switch(x)
		{
			case 1: //roti
				printf("\n Gujarati rotis are : ");
				printf("\n1) Plain tawa roti  ---------15/-");
				printf("\n2) Butter tawa roti ---------20/-");
				printf("\n3) Bajri ki roti-------------20/-");
				printf("\n4) Makai ki roti-------------20/-");
				scanf("%d",&y);
				switch(y)
				{
					case 1: //plain roti
					printf("\n You have ordered Plain roti: enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*15;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;//end plain roti

					case 2: //butter roti
					printf("\n You have ordered Butter roti: enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*20;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;//end butter roti

					case 3: //bajri  roti
					printf("\n You have ordered Bajri roti: enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*20;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;//end bajri roti

					case 4: //Makai roti
					printf("\n You have ordered roti: enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*20;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;//end Makai roti
				}
			break;  // end roti

			case 2://Sabji
				printf("\n Gujarati Sabjis are : ");
				printf("\n 1)Alu-sabji-------------------------120/- ");
				printf("\n 2)Gherkins (tindora) sabji----------130/- ");
				printf("\n 3)Brinjal's sabji (Ringal no oloo)--160/- ");
				printf("\n 4)Cucumber sabji (kakdi nu raitu)---170/- ");
				scanf("%d",&y);
				switch(y)
				{
					case 1://alo
					printf("\n You have ordered Alu-Sabji : Enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*120;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;//end alo sabji

					case 2://tindora
					printf("\n You have ordered Gherkins(tindora) sabji : Enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*130;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;//end tindora

					case 3://ringan
					printf("\n You have ordered Brinjal sabji : Enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*160;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break; //end ringan

					case 4: //kakdi
					printf("\n You have ordered Cucumber Sabji : Enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*170;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break; //end kakdi
				}
			break; // end Sabji

			case 3:// Sweets
				printf("\n SWEETS are :");
				printf("\n 1)Gulab-Jamun---------------80/- ");
				printf("\n 2)Mohanthad-----------------80/-");
				printf("\n 3)Jalebi--------------------100/-");
				printf("\n 4)Kaju-katri----------------100/-");
				scanf("%d",&y);
				switch(y)
				{
					case 1://gulab j
						printf("\n You have ordered Gulab Jamun : Enter the plates(4pcs)= ",q);
						scanf("%d",&q);
						bill=q*80;
						printf("\n Your bill is =%d ",bill);
						tbill=tbill+bill;
						printf("\n Total bill is =%d",tbill);
					break; //end gulab j

					case 2://mohanthad
						printf("\n You have ordered Mohanthad : Enter the plates(5pcs)= ",q);
						scanf("%d",&q);
						bill=q*80;
						printf("\n Your bill is =%d ",bill);
						tbill=tbill+bill;
						printf("\n Total bill is =%d",tbill);
					break; //end mohanthad

					case 3://Jalebi
						printf("\n You have ordered Jalebi  : Enter the plates (3pcs)= ",q);
						scanf("%d",&q);
						bill=q*100;
						printf("\n Your bill is =%d ",bill);
						tbill=tbill+bill;
						printf("\n Total bill is =%d",tbill);
					break;//end Jalebi
					case 4://Kaju-katri
						printf("\n You have ordered kaju-katri:enter the plate(3 pcs)= ",q);
						scanf("%d",&q);
						bill=q*100;
						printf("\n Your bill is =%d ",bill);
						tbill=tbill+bill;
						printf("\n Total bill is =%d",tbill);
					break; //end Kaju-katri
				}
			break; // end Sweets

			case 4:// Special
				printf("\n Special for today are :");
				printf("\n 1)Gota---------------60/-");
				printf("\n 2)Cutlet-------------80/-");
				printf("\n 3)Khaman-------------90/-");
				printf("\n 4)keri no ras-----------100/-");
				scanf("%d",&y);
				switch(y)
				{
					case 1://Gota
						printf("\n You have ordered Gota : enter the plate( 200grms )= ",q);
						scanf("%d",&q);
						bill=q*60;
						printf("\n Your bill is =%d ",bill);
						tbill=tbill+bill;
						printf("\n Total bill is =%d",tbill);
					break;//end Gota

					case 2://Cutlet
						printf("\n You have ordered Cutlet:enter the plate(3 pcs)= ",q);
						scanf("%d",&q);
						bill=q*80;
						printf("\n Your bill is =%d ",bill);
						tbill=tbill+bill;
						printf("\n Total bill is =%d",tbill);
					break; //end Cutlet

					case 3: // Khaman
						printf("\n You have ordered khaman:enter the plate(3 pcs)= ",q);
						scanf("%d",&q);
						bill=q*90;
						printf("\n Your bill is =%d ",bill);
						tbill=tbill+bill;
						printf("\n Total bill is =%d",tbill);
					break;//End khaman
					case 4://keri no ras
						printf("\n You have ordered Keri no ras :enter the plate(3 pcs)= ",q);
						scanf("%d",&q);
						bill=q*100;
						printf("\n Your bill is =%d ",bill);
						tbill=tbill+bill;
						printf("\n Total bill is =%d",tbill);
					break;//End keri no ras
				}
			goto menu;
			break; // end Special
		}
		break;//guj end
		case 2: //punjabi
		printf("\n\t Punjabi dishes are :");
		printf("\n 1) Starter");
		printf("\n 2) Roti-Tandoor ");
		printf("\n 3) Sabji");
		printf("\n 4) Biryani ");
		printf("\n 5) Change my choice ");
		scanf("%d",&x);
		switch(x)
		{
			case 2://Tandoori
				printf("\n  Tandoori-rotis  are : ");
				printf("\n1) Butter Naan  ---------30/-");
				printf("\n2) Kulcha ---------------30/-");
				printf("\n3) Missi Roti------------20/-");
				printf("\n4)Laccha Paratha --------20/-");
				scanf("%d",&y);
				switch(y)
				{
				   case 1://Butter naan
					printf("\n You have ordered Butter Naan: enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*30;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
				   break;//end butter naan
				   case 2://Kulcha
					printf("\n You have ordered Kulcha: enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*30;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
				   break;//end Kulcha
				   case 3://Missi Roti
					printf("\n You have ordered Missi roti: enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*20;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
				   break;//End Missi Roti
				   case 4://Laccha Paratha
					printf("\n You have ordered Laccha Paratha: enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*20;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
				   break; //End Lacccha Paratha
				}
			break;// end Tandoori

			case 3://Sabji
				printf("\n Punjabi Sabjis are : ");
				printf("\n 1)Kaju-Khoya------------------------160/- ");
				printf("\n 2)Mix Veg sabji---------------------100/- ");
				printf("\n 3)Malai-Kofta-----------------------160/- ");
				printf("\n 4)Navratan Korma--------------------170/- ");
				scanf("%d",&y);
				switch(y)
				{
				    case 1:// kaju-khoya
					printf("\n You have ordered Kaju-Khoya : Enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*160;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
				    break;//end kaju-khoya

				    case 2:// mix veg
					printf("\n You have ordered Mix-Veg Sabji : Enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*100;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
				    break;//end mix veg sabji

				    case 3:// malai kofta
					printf("\n You have ordered Malai-Kofta : Enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*160;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
				    break;//end malai

				    case 4://navaratan korma
					printf("\n You have ordered Navaratan Korma : Enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*170;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
				    break;//end navratan korma
				}
			break;//end sabji

			case 4:// Biryani
				printf("\n  Biryanis are : ");
				printf("\n1) Veg. Pulav -----------------115/-");
				printf("\n2) Paneer Tikka Biryani--------160/-");
				printf("\n3) Green Peace Pulav ----------110/-");
				printf("\n4) Veg Biryani-----------------110/-");
				scanf("%d",&y);
				switch(y)
				{
				    case 1:// veg p
					printf("\n You have ordered Veg Pulav: enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*115;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
				    break; //End veg p
				    case 2://Paneer t b
					printf("\n You have ordered Paneer Tikka Biryani: enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*160;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
				    break;//end Paneer Tb
				    case 3:// gp Pulav
					printf("\n You have ordered Green Peace Pulav: enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*110;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
				    break;//end Gp pulav
				    case 4: // veg birayani
					printf("\n You have ordered Veg-Biryani: enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*110;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
				    break; // end veg Birayani
				}
			break;//End Biryani

			case 1: //Starter
				printf("\n  Starters are : ");
				printf("\n1) Corn Tikki -----------------199/-");
				printf("\n2) Paneer Kebab----------------199/-");
				printf("\n3) Khumb Tikka-----------------199/-");
				printf("\n4) Veg Platter-----------------210/-");
				scanf("%d",&y);
				switch(y)
				{
					case 1: //corn tikki
					printf("\n You have ordered Corn tikki  : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*199;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;//end corn tikki

					case 2: //Paneer kebab
					printf("\n You have ordered Paneer Kebab : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*199;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;//end paneer kebab

					case 3://Khumb Tikka
					printf("\n You have ordered Khumb Tikka : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*199;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;//end Khumb tikka

					case 4:// veg Platter 210
					printf("\n You have ordered Veg Platter : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*210;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;//end veg platter
				}
			break;//end starter
			goto menu;
		}
		break; //end punjabi

		case 3://chinese
		printf("\n\t Chinese dishes are :");
		printf("\n 1) Soup");
		printf("\n 2) Starter ");
		printf("\n 3) Main Course");
		printf("\n 4) Noodles");
		printf("\n 5) Change my choice");
		scanf("%d",&x);
		switch(x)
		{
			case 1:// Soup
				printf("\n  Soups are : ");
				printf("\n1) Sweet Corn soup--------------125/-");
				printf("\n2) Veg Hot & Sour---------------125/-");
				printf("\n3) Veg Manchow Soup-------------125/-");
				printf("\n4) Spicy Wonton Soup------------110/-");
				scanf("%d",&y);
				switch(y)
				{
					case 1:// Sweet corn
					printf("\n You have ordered Sweet Corn soup : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*125;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;//End sweet corn

					case 2:// Hot and sour
					printf("\n You have ordered Hot & Sour soup : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*125;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;//end Hot and Sour

					case 3: // manchow
					printf("\n You have ordered Manchow Soup : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*125;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break; // end Manchow

					case 4:// spicy w
					printf("\n You have ordered Spicy Wonton Soup : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*110;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;//end sw
				}
			break;//end soup

			case 2: //Starter
				printf("\n  Starters are : ");
				printf("\n1) Sizzler----------------------150/-");
				printf("\n2) Baby corn Mushroom-----------120/-");
				printf("\n3) Schezwan special-------------155/-");
				printf("\n4) Sweet & sour veg-------------130/-");
				scanf("%d",&y);
				switch(y)
				{
					case 1://Sizzler
					printf("\n You have ordered Sizzler : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*150;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;//end Sizzler

					case 2://Baby corn Mushroom
					printf("\n You have ordered Baby Corn Mushroom : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*120;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;//end Baby corn Mushroom

					case 3://Schezwan special
					printf("\n You have ordered Schezwan special : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*155;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;// end Schezwan special

					case 4://Sweet & sour veg
					printf("\n You have ordered Sweet & sour : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*130;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;//end Sweet & sour veg
				}
			break; // end starter

			case 3:// main course
				printf("\n  Main Courses are : ");
				printf("\n1) Paneer Chilli Dry--------------160/-");
				printf("\n2) Paneer Chilli Gravy------------170/-");
				printf("\n3) Manchurian Gravy  -------------160/-");
				printf("\n4) Manchurian Dry ----------------140/-");
				scanf("%d",&y);
				switch(y)
				{
					case 1://Paneer Chilli Dry
					printf("\n You have ordered Paneer chilli dry : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*160;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;//end Paneer Chilli Dry

					case 2://Paneer Chilli Gravy
					printf("\n You have ordered Paneer chilli Gravy : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*170;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;//end Paneer Chilli Gravy

					case 3://Manchurian Gravy
					printf("\n You have ordered Manchurian gravy : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*160;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;// end Manchurian Gravy

					case 4: //Manchurian dry
					printf("\n You have ordered Manchurian dry : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*140;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;//endManchurian dry
				}
			break;// end main course
			case 4:// noodles
				printf("\n  Noodles  are : ");
				printf("\n1) Veg Hakka Noodles--------------140");
				printf("\n2) Pan Fried Noodles -------------160/-");
				printf("\n3) Manchurian-Noodles-------------160/-");
				printf("\n4) Szechwan-Noodles---------------150/-");
				scanf("%d",&y);
				switch(y)
				{
					case 1:// Veg Hakka Noodles
					printf("\n You have ordered Veg Hakka Noodles : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*140;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;// end Veg Hakka Noodles

					case 2://Pan Fried Noodles
					printf("\n You have ordered Pan Fried Noodles : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*160;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;//end Pan Fried Noodles


					case 3://Manchurian-Noodles
					printf("\n You have ordered Manchurian Noodles : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*140;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;//end Manchurian-Noodles

					case 4:// Szechwan-Noodles
					printf("\n You have ordered Szechwan Noodles : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*140;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;//end Szechwan-Noodles
				}
			break;// end noodles
		}
		goto menu;
		break; // end chinese

		case 4: // south indian
		printf("\n\t South Indian dishes are :");
		printf("\n 1) Dosa");
		printf("\n 2) Rava Variety ");
		printf("\n 3) Vada-idli items");
		printf("\n 4) Uttappam ");
		printf("\n 5) Change my choice");
		scanf("%d",&x);
		switch(x)
		{
			case 1: // DOSA
				printf("\n  Dosa varieties are : ");
				printf("\n1) Plain Dosa---------------50/-");
				printf("\n2) Masala Dosa -------------70/-");
				printf("\n3) Butter Paneer dosa-------120/-");
				printf("\n4) Paper Masala Dosa--------70/-");
				scanf("%d",&y);
				switch(y)
				{
					case 1:// plain d
					printf("\n You have ordered Plain Dosa : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*50;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;// end plain d

					case 2:// masasla d
					printf("\n You have ordered Masala Dosa : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*70;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;// end masala d

					case 3:// paneer d
					printf("\n You have ordered Butter Paneer dosa  : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*120;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break; // butter Panner d

					case 4:// Md
					printf("\n You have ordered Paper Masala Dosa : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*70;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;//end paper md
				}
			break;// End dosa

			case 2:// rava
				printf("\n  Rava varieties are : ");
				printf("\n1) Butter rava Masala-------100/-");
				printf("\n2) Rava Masala -------------90/-");
				printf("\n3) Butter Rava Paneer-------120/-");
				printf("\n4) Rava Onion Masala--------80/-");
				scanf("%d",&y);
				switch(y)
				{
					case 1:// butter rava m
					printf("\n You have ordered Butter rava Masala  : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*100;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;//end butter r m

					case 2:// rava m
					printf("\n You have ordered Rava Masala  : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*90;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break; // end rava m

					case 3:// buter rava p
					printf("\n You have ordered Butter rava Paneer  : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*120;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break; // end butter rava p

					case 4:// rava onion
					printf("\n You have ordered Rava Onion : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*80;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;//end rava onion
			}
			break;//end rava

			case 3:// vada-idli
				printf("\n  Vada -Idli varieties are : ");
				printf("\n1) Sambar-vada--------------60/-");
				printf("\n2) Idli - sambar -----------60/-");
				printf("\n3) Vada 2 pcs --------------50/-");
				printf("\n4) Idli 2 pcs --------------40/-");
				scanf("%d",&y);
				switch(y)
				{
					case 1: // sambar vada
					printf("\n You have ordered Sambar-Vada : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*60;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break; // end sambar-vada

					case 2: // idli-sambar
					printf("\n You have ordered Idli-Sambar : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*60;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;// end idli-sambar

					case 3:// vada
					printf("\n You have ordered Vada (2 pcs) : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*50;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break; //end vada

					case 4:// idli
					printf("\n You have ordered Idli (2 pcs) : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*40;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
					break;//end idli
				}
			break;// end vada-idli

			case 4:// uttappam
				printf("\n  Uttappam  varieties are : ");
				printf("\n1) Onion uttappam------------60/-");
				printf("\n2) Tomato uttappam ----------60/-");
				printf("\n3) Mix uttappam--------------60/-");
				printf("\n4) Dry Fruit uttappam--------100/-");
				scanf("%d",&y);
				switch(y)
				{
				     case 1:// onion
					printf("\n You have ordered Onion Uttappam : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*60;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
				     break;//End onion

				     case 2:// Tomato
					printf("\n You have ordered Tomato Uttappam : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*60;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
				     break;// end Tomato

				     case 3:// mix
					printf("\n You have ordered Mix Uttappam : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*60;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
				     break; // end mix

				     case 4:// dry fruit u
					printf("\n You have ordered Dry-Fruit Uttappam : enter Quantity : ",q);
					scanf("%d",&q);
					bill=q*100;
					printf("\n Your bill is =%d ",bill);
					tbill=tbill+bill;
					printf("\n Your total bill is = %d",tbill);
				     break;//end dry-fruit u
				}
			break;//end uttappam
		}
		break; //end south indian
		goto menu;
	}
	getch();
	goto start;
}