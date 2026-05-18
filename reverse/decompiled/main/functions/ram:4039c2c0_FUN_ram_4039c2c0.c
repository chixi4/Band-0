
bool FUN_ram_4039c2c0(char *param_1,char *param_2,char param_3)

{
  char cVar1;
  char cVar2;
  
  FUN_ram_4039693c();
  cVar1 = *param_1;
  cVar2 = *param_2;
  if (cVar2 != cVar1) {
    *param_2 = *param_1;
  }
  else {
    *param_1 = param_3;
  }
  FUN_ram_40396956();
  return cVar2 == cVar1;
}

