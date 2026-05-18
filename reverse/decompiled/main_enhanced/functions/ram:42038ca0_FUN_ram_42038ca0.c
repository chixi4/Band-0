
char FUN_ram_42038ca0(undefined4 param_1,uint param_2)

{
  char cVar1;
  char in_a5;
  
  if ((param_2 & 3) == 0) {
    cVar1 = in_a5 + '\f';
    if ((param_2 & 4) == 0) {
      cVar1 = in_a5 + '\x06';
    }
  }
  else {
    cVar1 = in_a5 + '\x02';
  }
  return cVar1 + '\x01';
}

