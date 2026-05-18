
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204386c(undefined4 param_1)

{
  code *pcVar1;
  undefined1 auStack_2c [32];
  
  (*(code *)&SUB_ram_40010488)(auStack_2c,0,0x1c);
  pcVar1 = _DAT_ram_3fcb50f4;
  if (_DAT_ram_3fcb50f4 != (code *)0x0) {
    FUN_ram_42043828(param_1,auStack_2c);
    (*pcVar1)(auStack_2c);
  }
  return;
}

