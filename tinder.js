const autoLiker = (n=10)=>{
   const Like =  document.getElementsByClassName("button Lts($ls-s) Z(0) CenterAlign Mx(a) Cur(p) Tt(u) Bdrs(50%) P(0) Fw($semibold) focus-button-style Bxsh($bxsh-btn) Expand Trstf(e) Trsdu($normal) Wc($transform) Pe(a) Scale(1.1):h Scale(.9):a Bgi($g-ds-background-like):a");
    while(n>0){
        setInterval(()=>{
            Like[0].click();
        }, 1000)
        n-=1;
    }
}