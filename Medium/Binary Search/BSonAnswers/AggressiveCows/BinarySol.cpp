bool cpc( vector<int>&stalls ,int cows ,int distance){
    int cow=1;
    int lastplaced=stalls[0];

    for(int i=0 ; i<stalls.size();i++){
        if(stalls[i]-lastplaced>=distance){
            cow++;
            lastplaced=stalls[i];
        }
    }
    return(cow>=cows);
}



int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(),stalls.end());
    int maxx=0,minn=0;
    for(auto i :stalls){
        maxx=max(maxx,i);
        minn=min(minn,i);
    }

    
int low=1,high=(maxx-minn);
    while(low<=high){
        int mid=(low+high)/2;
if(cpc(stalls,k,mid)==true){//check if k cows with distance(mid)can be placed 
           
          low=mid+1; //our ans is in the possible range but we want maximum value
    } 
else high=mid-1;   
        }
return high;} 


// high and low are at the opposite polarites so firstly low will be at the possible answer side while high will be at not possible side 
// in the end high will be at maximum possible min distance (possible ) side while low will be at non possible answers
