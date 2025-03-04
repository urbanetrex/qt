n=int(input("Enter a number!"))
round_units=int(input("Enter the units that you want to round, eg. 10, 100, 99..."))
mod=n%round_units
if mod*2<round_units:
  print("Round down to "+str((n//round_units)*round_units))
else:
  print("Round up to "+str((n//round_units+1)*round_units))
