#include <iostream>

using namespace std;
int main() {
    int n;
    float x[100], y[100];
    cout<< "Enter number of data pairs:"<<endl;
    cin>>n;
    cout<<"Enter value pair:\n"<<endl;

    for (int i=0; i<n; i++) {
        cout<<"Data " << i+1 << " :\n";
        cout<<"x: ";
        cin>>x[i];
        cout<<"y: ";
        cin>>y[i];
    }
    cout<<endl;
    cout<<"x   y"<<endl;;
    for (int i=0; i<n; i++) {
        cout<<x[i] << "   "<<y[i]<<endl;
    }

    float sumy=0, sumx=0, sumxy=0, sumxx=0;
    for (int i=0; i<n; i++) {
        sumy+= y[i];
        sumx+= x[i];
        sumxy+= y[i]*x[i];
        sumxx+= x[i]*x[i];
    }
    cout<<"\nvalue of sumx, sumy, sumxy, sumxx is : " << sumx<< ","
        << sumy<< ","<< sumxy<< " and "<< sumxx<< "."<< endl;


    float a=(sumx*sumxy-sumy*sumxx)/(sumx*sumx-n*sumxx);
    float b=(sumy*sumx-n*sumxy)/(sumx*sumx-n*sumxx);

    cout<<"value of a and b is : "<< a<< " and "<< b<<endl;
    cout<<"best fit value of curve is : y = "<< a<< " + "<< b<< "x"<<endl;
}
