future <- function(PV,r,t,compound='annually'){
  if (compound=='annually') {
    FV <- PV*(1+r)^t
  } else if (compound=='monthly') {
    FV <- PV*(1+r/12)^(12*t)
  } else if (compound=='daily') {
    FV <- PV*(1+r/365)^(365*t)
  } else if (compound=='continuously') {
    e = 2.71828
    FV <- PV*e^(r*t)
  }
  return(FV)
}

present <- function(FV,r,t,compound='annually'){
  if (compound=='annually') {
    PV <- FV*(1+r)^(-t)
  } else if (compound=='monthly') {
    PV <- FV*(1+r/12)^(-12*t)
  } else if (compound=='daily') {
    PV <- FV*(1+r/365)^(-365*t)
  } else if (compound=='continuously') {
    e = 2.71828
    PV <- FV*e^(-r*t)
  }
  return(PV)
}

time <- function(FV,PV,r,compound='annually'){
  if (compound=='annually') {
    t <- log(FV/PV)/log(1+r)
  } else if (compound=='monthly') {
    t <- log(FV/PV)/(log(1+r/12)*12)
  } else if (compound=='daily') {
    t <- log(FV/PV)/(log(1+r/365)*365)
  } else if (compound=='continuously') {
    e = 2.71828
    t <- ln(FV/PV)/r
  }
  return(t)
}

