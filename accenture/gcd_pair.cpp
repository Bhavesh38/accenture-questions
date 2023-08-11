#include<bits/stdc++.h>
// import java.util.Scanner;
// public class Main {
//     static int calculateHCF(int a, int b) {
//         if (b == 0)
//             return a;
//         return calculateHCF(b, a % b);
//     }
//     public static void main(String[] args) {
//         Scanner scanner = new Scanner(System.in);
//         System.out.print("Enter the value of k: ");
//         int k = scanner.nextInt();
//         System.out.print("Enter the value of x: ");
//         int x = scanner.nextInt();
//         int pairCount = 0; 
//         for (int i = 1; i <= k; i++) {
//             for (int j = i + 1; j <= k; j++) {
//                 if (calculateHCF(i, j) == x) {
//                     pairCount++;
//                 }
//             }
//         }
//         int pairs = pairCount + 1; 
//         System.out.println("Number of pairs with HCF equal to " + x + " between 1 and " + k + ": " + pairs);
//         scanner.close();
//     }
// }
using namespace std;
int calculateHCF(int a, int b) {
    if (b == 0)
        return a;
    return calculateHCF(b, a % b);
}
int main(){
    int k,x;
    cin>>k>>x;
    int pairCnt=0;
    for(int i=1;i<=k;i++){
        for(int j=i;j<=k;j++){
            if(calculateHCF(i,j)==x){
                pairCnt++;
            }
        }
    }
    cout<<pairCnt<<endl;
    return 0;
}