
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_ram_4201062c(void)

{
  uint uVar1;
  int iVar2;
  
  FUN_ram_403903b0();
  uVar1 = _DAT_ram_3c07015c;
  iVar2 = (*(code *)&SUB_ram_40010018)(0);
  FUN_ram_42011ec8(uVar1 & 0xbfffffff | (uint)(iVar2 == 1) << 0x1e);
  return;
}

