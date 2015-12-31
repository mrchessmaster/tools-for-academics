#mortgage-monthly-pay-calculator
#note: annual interest is expressed as percentage
mortgage <- function(P,D,i,t){
  mp <- (P-D)*(i/100/12/(1-(1+i/100/12)^(-t*12)))
  return(mp)
}