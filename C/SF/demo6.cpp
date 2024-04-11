#include<iostream>
using namespace std;
namespace lcr{
	int main(){
		int n;
		cout<<"请输入n，以此来判断下蛋区间~\n";
		cin>>n;
		for(int i=1;i<=n;i++){
			if(n>100) cout<<"@";
			for(int d=1;d<=n;d++) cout<<' ';
			if(n<=100) cout<<"蛋"; 
			for(int j=1;j<=n;j++){
				if(n>100) cout<<"@";
				for(int d=1;d<=n;d++) cout<<' ';
				if(n<=100) cout<<"蛋"; 
				for(int k=1;k<=n;k++){
					if(n>100) cout<<"@";
					for(int d=1;d<=n;d++) cout<<' ';
					if(n<=100) cout<<"蛋"; 
					for(int a=1;a<=n;a++){
						if(n>100) cout<<"@";
						for(int d=1;d<=n;d++) cout<<' ';
						if(n<=100) cout<<"蛋"; 
						for(int b=1;b<=n;b++){
							if(n>100) cout<<"@";
							for(int d=1;d<=n;d++) cout<<' ';
							if(n<=100) cout<<"蛋 "; 
							for(int c=1;c<=n;c++){
								if(n>100) cout<<"@";
								for(int d=1;d<=n;d++) cout<<' ';
								if(n<=100) cout<<"蛋 "; 
							}
							cout<<'\n';
						}
						cout<<'\n';
					}
					cout<<'\n';
				}
				cout<<'\n';
			}
			cout<<'\n';
		}
		return 0;
	}
}
int main(){lcr::main();return 0;}
