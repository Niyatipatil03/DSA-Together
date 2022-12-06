ector<int> find(int arr[], int n , int x )

{

    int m;

    int count=0,flag=-1;

    

    for(int i=0;i<n;i++)

    {

        if(arr[i]==x)

        {

            count++;

            if(arr[i]!=arr[i-1] || i==0)

            {

               m=i; 

            }

        }

        if(arr[i]!=x)

        {

            flag++;

            if(flag==n-1)

            {

                return {-1,-1};

            }

        }

    }

    return {m,m+count-1};

 

}
