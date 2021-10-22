/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
int books(int* A, int n1, int B) {
    int i=0,j=0,k=0, min, max,index,p=1,check=0;
    int S[B];
    for(i=0;i<B;i++){
       S[i]=0;
    }
    for(j=0;j<n1;j++){
        if(j<i){
            S[j]=A[j];
            continue;
        }
        min = max = 0;
        for(k=0;k<B;k++){
            if(S[max]<S[k]){
                max = k;
            }
            if(S[min]>S[k]){
                min = k;
            }
        }
        if(min>0&&min<B-2){
            check= (S[min]+S[min-1]>=S[max]&& S[min]+S[min+1]>=S[max])?1:0;
        }else if(min==0){
            check= ( S[min]+S[min+1]>=S[max])?1:0;
        }else if(min == B-1){
             check= ( S[min]+S[min-1]>=S[max])?1:0;
        }
        if(S[min] >= ((S[B-1]+A[j])-S[max])&&check|| min == B-1){//S[max] > (S[B-1]+A[j]- S[max]).    //S[min] >= ((S[B-1]+A[j])-S[max])&&
            S[B-1] = S[B-1]+A[j];
        }
        else{
            index=0;
            if(min == 0){
                S[min]=S[min]+S[min+1];
                index=min+1;
            }else{
                if(S[min-1]<S[min+1]){
                    S[min-1]=S[min-1]+S[min];
                    index=min;
                }else{
                    S[min]=S[min]+S[min+1];
                    index=min+1; 
                }  
            }
            while( index < B-1 ){
                    S[index]=S[index+1];
                    index++;
            }
        S[B-1] =A[j];
        }
    }
    max = 0;
    for(p=0;p<B;p++){
        if(max<S[p]){
            max=S[p];
        }
    }
    return max;
}
