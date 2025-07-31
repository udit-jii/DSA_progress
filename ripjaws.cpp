#include<iostream>
#include "help.h"
#include<vector>
#include<string>
using namespace std;

bool check(char ch){

    if (ch==' '){

        return true;
    }

    else{

        return false;
    }
}

string replace_space(string s){

    string ans;
    int count=0;
    int i=0;

    while(s[0]==' '){
        s.erase(s.begin());
    }

    while(s.back()==' '){
        s.pop_back();
    }

    for(int i=0; i< s.size(); i++){

        if(check(s[i])){

            count++;
            if(count==1){

                s.erase(s.begin()+i);
                s.insert(i, "@40");
            }

            else{

                s.erase(s.begin()+i);
            }
        }

        else{

            count=0;
        }
    }
    return s;
}

int main(){

    string s1= "hey my name is udit";
    string part= "not";

    cout<<s1.find(part);
    return 0;
}




// def wrangle(file):

//     df= pd.read_csv(file)

//     cond_1 = df['property_type']== 'apartment'
//     cond_2 = df['place_with_parent_names'].str.contains('Distrito Federal')
//     cond_3 = df['price_aprox_usd']< 100_000

//     df= df[cond_1 & cond_2 & cond_3]

//     low, high = df['surface_covered_in_m2'].quantile([0.1, 0.9])
//     cond_4= df['surface_covered_in_m2'].between(low, high)

//     df['lat']= df['lat-lon'].str.split(',', expand= True).astype(float)[0]
//     df['lon']= df['lat-lon'].str.split(',', expand= True).astype(float)[1]
//     df.drop(columns= 'lat-lon', inplace= True)

//     df['borough']= df['place_with_parent_names'].str.split('|', expand= True)[1]
//     df.drop(columns= 'place_with_parent_names', inplace= True)

//     for col in df.columns:
//         if((df[col].isnull().sum()/len(df))*100)> 50:
//             df.drop(columns= col, inplace= True)

//     for col in df.columns:
//         if(df[col].nunique()<=5 or df[col].nunique()>= len(df)-5):
//             df.drop(columns= col, inplace= True)

//     df.drop(columns= ['price_aprox_local_currency', 'price_per_m2', 'price'], inplace= True)


//     return df[cond_4]