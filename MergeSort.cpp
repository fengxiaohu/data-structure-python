int main()
{
    int test_array[]={9,3,7,11};
    int size=sizeof(test_array)/sizeof(test_array[0]);
    for(int j=0;j<sizeof(test_array)/sizeof(int);++j)
    {
        cout<<test_array[j]<<' ';
        cout<<endl;
    }
    ShellSort(test_array,size);
     for(int k=0;k<sizeof(test_array)/sizeof(int);++k)
     {
         cout<<test_array[k]<<' ';
         
     }
     return 0;
}