/**
 * @param {string} s
 * @return {number}
 */
 var romanToInt = function(s) {
    s=s.split('');
    
    let no=0;
    for(let i=0;i<s.length;i++){
        
        if(s[i]=='I'){
            no=no+1
        }else if(s[i-1]=='I'&&s[i]=='V'){
            no=no+4-1;
        }else if(s[i-1]!='I'&&s[i]=='V'){
            no=no+5
        }else if(s[i-1]=='I'&&s[i]=='X'){
            no=no+9-1;
        }else if(s[i-1]!='I'&&s[i]=='X'){
            no=no+10
        }else if(s[i-1]=='X'&&s[i]=='L'){
            no=no+40-10;
        }else if(s[i-1]!='X'&&s[i]=='L'){
            no=no+50
        }else if(s[i-1]=='X'&&s[i]=='C'){
            no=no+90-10;
        }else if(s[i-1]!='X'&&s[i]=='C'){
            no=no+100
        }else if(s[i-1]=='C'&&s[i]=='D'){
            no=no+400-100;
        }else if(s[i-1]!='C'&&s[i]=='D'){
            no=no+500
        }else if(s[i-1]=='C'&&s[i]=='M'){
            no=no+900-100;
        }else if(s[i-1]!='C'&&s[i]=='M'){
            no=no+ 1000
        }
    }
    
    return no;
};