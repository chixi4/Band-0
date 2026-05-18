
void FUN_ram_420987ea(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_42098760();
  if (DAT_ram_3fcc53bc != '\0') {
    FUN_ram_42098572();
    DAT_ram_3fcc53bc = '\0';
  }
  if (iVar1 == 0) {
    iVar1 = FUN_ram_420987a2(param_1);
    if (iVar1 != 0) {
      return;
    }
  }
  else {
    iVar1 = FUN_ram_4207f07a();
    if (iVar1 == 1) {
      FUN_ram_42098a5c(param_1,0,0,0);
    }
  }
  FUN_ram_4207fd8a(param_1);
  return;
}

