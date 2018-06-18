 #include <iostream>

#include <set>

using namespace std;

main()

{

    int c,x,q,y=0;

        cin>>q;
   set<int> ms;

   set<int>::iterator it;

   while(q--)

   {   
   cin>>c;
 
       switch(c)

       {
 
   case 1:    cin>>x;

        ms.insert(x);

    break;

    case 2: cout<<"size"<<ms.size()<<endl;

   break;

   case 3:
    it=ms.begin();

   		ms.erase(it);

  break;

  case 4:
     it=ms.begin();

     cout<<"first element"<< *it<<endl;

    break;

    case 5:
        cout<<"entire list is  ";

       for(it=ms.begin();it!=ms.end();it++)

     {
       cout<<*it<<endl;
     }

   break;

   case 6:
     it=ms.end();

     cout<<"last element"<<*it<<endl;

   break;

   case 7:
     cin>>x;

     for(it=ms.begin();it!=ms.end();it++)

     {
        if(ms.count(x)==1)

        {
          y++;

        }if(y!=0) cout<<"yes"<<endl;

     }

   break;

   case 8:
      cin>>x;

      for(it=ms.begin();it!=ms.end();it++)

      {
          if(ms.count(x)==1)

          {

           ms.erase(x);
          }

     }

   }

}

}