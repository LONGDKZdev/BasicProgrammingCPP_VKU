maximum = int(input("Enter the Maximum value : "))
total =0
for number in range (1 , maximum+1):
   if(number % 2 != 0):
      print("{0}".format(number))
      total += number
print("The sum of even number from 1 to {0} = {1}".format(number,total))


# include <iostream>
# using namespace std;
# int main(){
#   int sum = 0, i,n;
# cout<<"Nhap n : ";cin>>n;
#   for(int i=1 ; i <=n; i++ ){
#  if(i % 2 != 0){
#      sum += i;
#      }
#   }
# cout<<sum;
# }