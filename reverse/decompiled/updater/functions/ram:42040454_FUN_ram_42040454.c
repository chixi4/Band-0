
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_ram_42040454(char *param_1,char param_2)

{
  int iVar1;
  
  *param_1 = '\x7f' - param_2;
  FUN_ram_40399daa(param_1 + 1,0x3c072e3c,3);
  do {
    iVar1 = thunk_FUN_ram_4039b5c0();
  } while (_DAT_ram_3fcb4f3c == iVar1);
  _DAT_ram_3fcb4f3c = iVar1;
  FUN_ram_40399daa(param_1 + 4,&DAT_ram_3fcb4f3c,4);
  return param_1 + 8;
}

