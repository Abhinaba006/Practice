int _stack :: getMin()
{
   //Your code here
   //minEle will be the minimum element
   if (s.empty())
        return -1;
    else
        return minEle;
}

/*returns poped element from stack*/
int _stack ::pop()
{
   //Your code here
   if(s.empty())
    return -1;
    else{
       if (s.top()>minEle)
            s.pop();
        else{
            minEle = (2*minEle - s.top());
            s.pop();
        }
    }
}

/*push element x into the stack*/
void _stack::push(int x)
{
    if (s.empty()){
        s.push(x);
        minEle = x;
        return;
    }
    else{
        if (x>=minEle)
            s.push(x);
        else{
            s.push(2*x - minEle);
            minEle = x;
        }
        return;
    }
   //Your code here
}
