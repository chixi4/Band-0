
bool FUN_ram_40399f4c(char *param_1,char *param_2,char param_3)

{
  char cVar1;
  char cVar2;
  
  FUN_ram_40394d36();
  cVar1 = *param_1;
  cVar2 = *param_2;
  if (cVar2 != cVar1) {
    *param_2 = *param_1;
  }
  else {
    *param_1 = param_3;
  }
  FUN_ram_40394d50();
  return cVar2 == cVar1;
}

