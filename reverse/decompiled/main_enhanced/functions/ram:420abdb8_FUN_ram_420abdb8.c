
bool FUN_ram_420abdb8(char *param_1,char *param_2)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == param_2) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
    if (*param_1 != '*') {
      iVar1 = FUN_ram_4039c438(param_1,param_2 + (*param_2 == '*'));
      return iVar1 == 0;
    }
  }
  return bVar2;
}

