#include <stdio.h>
#include <conio.h>

union student{
    int roll;
    char names[30];
};

int main(){
    union student st;
    st.roll = 101;
    printf("\nRoll : %d", st.roll);

    st.names = "subodh";
    printf("\nNames: %s", st.names);
    return 0;
}

