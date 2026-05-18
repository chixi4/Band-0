
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_ram_420889bc(char *param_1,char param_2)

{
  int iVar1;
  
  *param_1 = '\x7f' - param_2;
  FUN_ram_4039c11e(param_1 + 1,"ime before social plans.",3);
  do {
    iVar1 = thunk_FUN_ram_4039d994();
  } while (_DAT_ram_3fcc3fcc == iVar1);
  _DAT_ram_3fcc3fcc = iVar1;
  FUN_ram_4039c11e(param_1 + 4,&DAT_ram_3fcc3fcc,4);
  return param_1 + 8;
}

