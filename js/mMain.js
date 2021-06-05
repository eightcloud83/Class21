// JavaScript source code
async function aSleep(ms) {
    return new Promise(R => setTimeout(R, ms));
}
String.prototype.format=function(){
  var T=this;
  for (var i in arguments) {
    T=T.replace(new RegExp("\\{"+i+"\\}","g"), arguments[i]);
  }
  return T;
};

//https://stackoverflow.com/questions/424292/seedable-javascript-random-number-generator
function sfRNG(seed) {
  // LCG using GCC's constants
  var T=this;
  T.m=0x80000000; // 2**31;
  T.a=1103515245;
  T.c=12345;
  T.state= seed?seed:Math.floor(Math.random()*(this.m-1));
  T.nextInt=function() {
    this.state = (T.a * T.state + T.c) % this.m;
    return T.state;
  };
  T.nextFloat=function() {
     return T.nextInt()/(T.m-1);
  };
}

function zRandom(n) {
    var T=this;
    if (n==0)
       T.Rand=Math.random;
    else {
       var rng=new sfRNG(n);
       T.Rand=rng.nextFloat;
    }
    T.begInit=function(n) {
        var r,i,
        r=[];
        for(i=0; i<n; i++) {
            r[i]=i;
        }
        T.mI=0;
        T.mN=n;
        T.mR=r;
    }
    T.getNextV=function() {
        var n=T.mN;
        var i=T.mI;
        var r=T.mR;
        var w0=Math.floor(T.Rand()*(n-i));
        var w1=r[w0];
        r.splice(w0,1);
        T.mI=i+1;
        return w1;
    }
}
function zAjax6()
{
    var T=this;
    T.aReq=async function(U) {
        T.U=U;
        T.mR=99;
        var P=new Promise((R)=>{
            $.ajax({
                url: T.U,
                type: "GET",cache: false
            })
            .done(function(d,t,j) {
              T.mD=d;
              if (typeof d=="object") {
                T.mR=2; R(T);
              }else{
                T.mR=3; R(T);
            } } )
            .fail(function(j,t,e) {
              T.mD=e; T.mR=-3; R(T);
            } )
            .always(function(jd,t,je) { });
        });
        return P;
    };
}
$(function () {
    jMain();
});
