#include <bits/stdc++.h>

using namespace std;
long long int power(long long int x , long long int y)
{
    long long int ans = 1;

    for(long long int i = 0 ; i < y ; i++)
    {
        ans *= x;
    }
    return ans;
}


int main()
{
    int test_case ;
    long long int input;
    long long int compute[20];
    long long int precompute[20];
    compute[0] = 0;
    compute[1] = 9;

    for(int i= 2 ; i < 20 ; i++)
    {
        if(i%2==0)
        {
            compute[i] = compute[i-1];
        }
        else
        {
            compute[i] = compute[i-1] * 10;
        }
        //cout << "i = " << compute[i] << endl;
    }
    precompute[0] = 0;
    precompute[1] = compute[1];
    for(int i= 2 ; i < 20 ; i++)
    {
        precompute[i] = (precompute[i-1]+compute[i]);
        //cout << "i = " << precompute[i] << endl;
    }
    scanf("%d", &test_case);
    long long answer;
    for(int i = 0 ; i < test_case ; i++)
    {
        string input_string = "";
        scanf("%lld", &input) ;
        if(input>=1 && input <= 9)
        {
            printf("Case %d: %lld\n", i+1 , input);
            continue;
        }
        long long int temp = input;

        while(temp!=0)
        {
            int x = temp%10;
            input_string += (char)(x+'0');
            temp/=10;
        }
        reverse(input_string.begin() , input_string.end());

        int length = input_string.length();
        answer = 0;
        answer += precompute[length-1];
        long long first_half = 0;
        long long compare_value = 0;
        int half_length;
        long long halfvalue;
        if(length%2== 0)
        {
            half_length = length/2;
        }
        else
        {
            half_length = (length/2) +1;
        }
        for(int j = 0 , k = half_length-1 ; k>=0 ;j++,k--)
        {
            first_half += (input_string[k]-'0')*power(10,j);
        }
        for(int j = 0 ; j<half_length - 1 ; j++)
        {
            if(compare_value != 0)
            {
                compare_value *=10;
            }
            compare_value +=9;
        }
        //cout << "answ " << answer << endl;
        answer += (first_half - compare_value);

//        cout << "First half " << first_half << endl;
//        cout << "Compare " << compare_value << endl;
        printf("Case %d: %lld\n", i+1 , answer);

    }
}
