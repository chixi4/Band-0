
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4202bde0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_ram_42030598();
  iVar1 = FUN_ram_4202c568(_DAT_ram_3fcb6b8c + 6,*_DAT_ram_3fcb6b8c,param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    (*(code *)&SUB_ram_40011a08)(param_1);
    uVar2 = 0xb;
  }
  return uVar2;
}

