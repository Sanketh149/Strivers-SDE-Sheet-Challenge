int romanToInt(string s) {

    // Write your code here

    int len=s.size();

    int sum=0;

    int i=0;

    while(i<len){

if(s[i]=='I' and s[i+1]=='V'){sum+=4;i=i+2;continue;}

if(s[i]=='I' and s[i+1]=='X'){sum+=9;i=i+2;continue;}

if(s[i]=='X' and s[i+1]=='L'){sum+=40;i=i+2;continue;}

if(s[i]=='X' and s[i+1]=='C'){sum+=90;i=i+2;continue;}

if(s[i]=='C' and s[i+1]=='D'){sum+=400;i=i+2;continue;}

if(s[i]=='C' and s[i+1]=='M'){sum+=900;i=i+2;continue;}

      if (s[i] == 'I') {

        sum += 1;

        i = i + 1;continue;

      }

        if(s[i]=='V'){

            sum+=5;

            i=i+1;continue;

        }

        if(s[i]=='X'){

            sum+=10;

            i=i+1;continue;

        }

        if(s[i]=='L'){

            sum+=50;

            i=i+1;continue;

        }

        if(s[i]=='C'){

            sum+=100;

            i=i+1;continue;

        }

        if(s[i]=='D'){

            sum+=500;

            i=i+1;continue;

        }

        if(s[i]=='M'){

            sum+=1000;

            i=i+1;continue;

        }

        

    }

    return sum;

}