bool cpc(vector<int> &stalls, int k, int distance_possible){
    int cows_placed=1; // put 1 cow at 1st available index kyuki isko place krne k baad hi to comparision shuru hoga
    int lastplaced=stalls[0];

    for(int i=1;i<stalls.size();i++){//iterating over every stall and finding distance between them
        if(stalls[i]-lastplaced>=distance_possible){
            cows_placed++;//we placed the cow and our total cows placed are increased 
            lastplaced=stalls[i]; // update the stall you succefully last placed the cow in the stall  
        }
        
    }
return (cows_placed >=k);
}


int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(),stalls.end());

    for(int i=1; i<= 10e9;i++){
        
        if(cpc(stalls,k,i)==true)continue; // lets say i is 1 we can acheive this config so we will move on to next possible min dist by using 'continue'
        else return(i-1); // return the last iteration as that was the max possible min between two cows , here i =4 but it was false , we can't place 4 cows successfully , the last successful min distance we were able to keep was 3 
    }
return -1;}
