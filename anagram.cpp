#include<iostream>
#include<string.h>
using namespace std;
int is_anagram(string ,string );
int main(){
	string str[]={"cat","dog","god","tca"};
	int count=sizeof(str)/sizeof(str[0]);
	register int i,j; // for fast accessing of location
		cout<<"[";
	for (i = 0; i < count-1; ++i)
	{
		for (j= i+1; j < count; j++)
		{
			/* code */
			int c=is_anagram(str[i],str[j]);
			if (c==1)
			{
				cout<<"["<<i+1<<","<<j+1<<"],";
				/* code */
			}
		}
		/* code */
	}
	cout<<"]";
	
	return 0;
}
int is_anagram(string arr1,string arr2 ){
	int a[26]={0};
	int i;
	for( i=0;arr1[i]!='\0' && arr2[i]!='\0';i++){

			a[arr1[i]-'a']++;
			a[arr2[i]-'a']--;
	}
	if(arr1[i] || arr2[i]){
			return 0; // strings are of different length
	}

	for(int j=0;j<26;j++){
		if(a[j]){
			return 0;// strings are not anagrams
		}
	}
	return 1;

}
