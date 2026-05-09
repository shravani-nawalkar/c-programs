//////////////////////////////////////////////////////////////////////////////
//
// Include Required header file
//
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////
//
// Function Name :  AddTwoNumbers
// Input :          float,float
// Output :         float
// Description :    Performs Addition of 2 Floats
// Date :           08/05/2026
// Author :         Shravani Gajanan Nawalkar
//
//////////////////////////////////////////////////////////////////////////////
float AddTwoNumbers(
                       float fNo1,                                      //First Input
                       float fNo2                                       //Second Input
                   )        
{
    float fAns =0.0f;                                                   // variable To Store Result

    fAns= fNo1 + fNo2;

    return fAns;

}
////////////////////////////////////////////////////////////////////////////////
//
// Application to perform Addition of 2 float Values
//
///////////////////////////////////////////////////////////////////////////////
int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    float fResult = 0.0f;

    printf("Enter First Number:\n");
    scanf("%f",&fValue1);

    printf("Enter Second Number:\n");
    scanf("%d",&fValue2);

    fResult= AddTwoNumbers(fValue1,fValue2);

    printf("Addition is :%f\n",fResult);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////
//
// Input : 10.0   11.0
// Output: 21.0
//
/////////////////////////////////////////////////////////////////////////////////