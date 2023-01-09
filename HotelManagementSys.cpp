#include<iostream>
using namespace std;
int main(){
    int quant;
    int choice;
    // Quantity 
    int Qrooms,Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
    // Food items sold
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
    // Total price of food items and rooms
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;

    cout<<"\n\t Quantity of items we have in Hotel";
    cout<<"\n Rooms available : ";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta : ";
    cin>>Qpasta;
    cout<<"\n Quantity of burger : ";
    cin>>Qburger;
    cout<<"\n Quantity of noodles : ";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake : ";
    cin>>Qshake;
    cout<<"\n Quantity of chicken roll : ";
    cin>>Qchicken;

    m:
    cout<<"\n\t\t\t Please select from the given menu options : ";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) Noodles";
    cout<<"\n5) Shake";
    cout<<"\n6) Chicken roll";
    cout<<"\n7) Information regarding sales and collection";
    cout<<"\n8) Exit";
    
    cout<<"\n\n Please Enter your choice! ";
    cin>>choice;
    
    switch (choice)
    {
    case 1: 
        cout<<"Enter the number of rooms you want! ";
        cin>>quant;
        if(Qrooms-Srooms>=quant){
            Srooms += quant;
            Total_rooms += quant*1200;//Price of room = 1200
            cout<<"\n\n\t\t"<<quant<<" room/(s) have been alloted to you!";
             break;
        }
        else{
            cout<<"\n\t Only"<<Qrooms-Srooms<<" rooms remaining in hotel";
            break;
        }
    
     case 2: 
        cout<<"Enter pasta quantity you want! ";
        cin>>quant;
        if(Qpasta-Spasta>=quant){
            Spasta += quant;
            Total_pasta += quant*100;//Price of room = 100
            cout<<"\n\n\t\t"<<quant<<" pasta have been ordered!";
            break;
        }
        else{
            cout<<"\n\t Sorry! Only"<<Qpasta-Spasta<<" rooms remaining in restaurant";
            break;
            }
    
     case 3: 
        cout<<"Enter the number of burgers you want! ";
        cin>>quant;
        if(Qburger-Sburger>=quant){
            Sburger += quant;
            Total_burger += quant*50;//Price of room = 50
            cout<<"\n\n\t\t"<<quant<<" burgers have been ordered!";
             break;
        }
        else{
            cout<<"\n\t Sorry! Only"<<Qburger-Sburger<<" burgers remaining!";
            break;
        }

     case 4: 
        cout<<"Enter the number of noodles you want! ";
        cin>>quant;
        if(Qnoodles-Snoodles>=quant){
            Snoodles += quant;
            Total_noodles += quant*30;//Price of room = 30
            cout<<"\n\n\t\t"<<quant<<" noodles have been ordered!";
             break;
        }
        else{
            cout<<"\n\t Sorry! Only"<<Qnoodles-Snoodles<<" noodles remaining!";
            break;
        }
     case 5: 
        cout<<"Enter the number of shakes you want! ";
        cin>>quant;
        if(Qshake-Sshake>=quant){
            Srooms += quant;
            Total_shake += quant*20;//Price of room = 20
            cout<<"\n\n\t\t"<<quant<<" shakes have been ordered!";
             break;
        }
        else{
            cout<<"\n\t Sorry! Only"<<Qshake-Sshake<<" shakes remaining !";
            break;
        }
        case 6: 
        cout<<"Enter the number of chicken roll you want! ";
        cin>>quant;
        if(Qchicken-Schicken>=quant){
            Schicken += quant;
            Total_chicken += quant*120;//Price of chicken roll = 120
            cout<<"\n\n\t\t"<<quant<<" chicken rolls have been ordered!";
             break;
        }
        else{
            cout<<"\n\t Sorry! Only"<<Qchicken-Schicken<<" chicken rolls remaining!";
            break;
        }
    
    case 7: 
    cout<<"\n\t\tSales and collection data : ";
    cout<<"\n\n Number of rooms we had : "<<Qrooms;
    cout<<"\n\n Number of rooms we gave for rent : "<<Srooms;
    cout<<"\n\n Remaining rooms : "<<Qrooms-Srooms;
    cout<<"\n\n Total collection of rooms : "<<Total_rooms;
    
    cout<<"\n\n Number of pastas we had : "<<Qpasta;
    cout<<"\n\n Number of pasta we sold : "<<Spasta;
    cout<<"\n\n Remaining pastas : "<<Qpasta-Spasta;
    cout<<"\n\n Total collection of pastas : "<<Total_pasta;
   
    cout<<"\n\n Number of burgers we had : "<<Qburger;
    cout<<"\n\n Number of burgers we sold : "<<Sburger;
    cout<<"\n\n Remaining burgers : "<<Qburger-Sburger;
    cout<<"\n\n Total collection of burgers : "<<Total_burger;

    cout<<"\n\n Number of shakes we had : "<<Qshake;
    cout<<"\n\n Number of shakes we sold : "<<Sshake;
    cout<<"\n\n Remaining shakes : "<<Qshake-Sshake;
    cout<<"\n\n Total collection of shakes : "<<Total_shake;

    cout<<"\n\n Number of chicken roll we had : "<<Qchicken;
    cout<<"\n\n Number of chicken roll we sold : "<<Schicken;
    cout<<"\n\n Remaining chicken roll : "<<Qchicken-Schicken;
    cout<<"\n\n Total collection of chicken roll : "<<Total_chicken;

    cout<<"\n\n TOTAL COLLECTION FROM ROOMS AND FOOD = "<<Total_burger+Total_chicken+Total_noodles+Total_pasta+Total_rooms+Total_shake;
    case 8:
        exit(0);
    default:
        cout<<"\nPlease select the numbers mentioned above : ";
    }
    goto m;
    return 0;
}