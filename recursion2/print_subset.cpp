void helper(int input[], int size, int output[], int m)
{
    if (size == 0)
    {
        for (int i = 0; i < m; i++)
        {
            cout << output[i] << " ";
        }
        cout << endl;
        return;
    }
    helper(input + 1, size - 1, output, m);
    output[m] = input[0];
    m++;
    helper(input + 1, size - 1, output, m);
}
void printSubsetsOfArray(int input[], int size)
{

    int output[15];
    helper(input, size, output, 0);
}

