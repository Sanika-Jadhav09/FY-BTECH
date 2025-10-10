 #include <iostream>
   using namespace std;
   int main()
   {
       int n =10;
       for(int i=0;i<10;i++)
       {
           cout<<"*";
           cout<<endl;
       }
       return 0;
   }



OUTPUT
*
*
*
*
*
*
*
*
*
*


=== Code Execution Successful ===



#include <iostream>
   using namespace std;
   int main()
   {
       int n =10;
       for(int i=0;i<10;i++)
       {
           cout<<"*";
       }
       return 0;
   }


OUTPUT
**********



#include <iostream>
   using namespace std;
   int main()
   {
       int n =10;
       for(int i=0;i<10;i++)
       {
           for(int j=0;j<i;j++)
           cout<<"*";
       }
       return 0;
   }


OUTPUT
*********************************************



#include <iostream>
   using namespace std;
   int main()
   {
       int n =10;
       for(int i=0;i<10;i++)
       {
           for(int j=0;j<i;j++)
        {
           cout<<"*";
       }
       cout<<endl;
       }
       return 0;
   } 



OUTPUT
*
**
***
****
*****
******
*******
********
*********


=== Code Execution Successful ===
