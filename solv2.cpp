#include<iostream>
using namespace std;
struct Box{
    double length;
    double width;
    double height;

  double surfacearea(){
    return 2*(length*width + length*height + height*width);
 }
  double volume(){
    return (length*height*width);
 }
  int comparevolume(Box b){
    if(volume()<b.volume()){
        return -1;
    }
    else if(volume()==b.volume()){
        return 0;
    }
    else if(volume()>b.volume()){
        return 1;
    }
 }
 int comparesurfacearea(Box b){
    if(surfacearea()<b.surfacearea()){
        return -1;
    }
    else if(surfacearea()==b.surfacearea()){
        return 0;
    }
    else if(surfacearea()>b.surfacearea()){
        return 1;
    }
 }
 
  void show(){
    cout<<"Length is :\t"<<length<<endl;
    cout<<"Width is :\t"<<width<<endl;
    cout<<"Height is :\t"<<height<<endl;
    cout<<"Volume is :\t"<<volume()<<endl;
    cout<<"Surfacearea is :\t"<<surfacearea()<<endl;
  }
};

int main(){
  Box b1={1,1,1};
  Box b2={1,2,1};
  
  b1.show();
  b2.show();
  
  cout<<b1.comparesurfacearea(b2)<<endl;
  cout<<b1.comparevolume(b2)<<endl;


  return 0;
}