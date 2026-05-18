
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_42033e6c(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = _DAT_ram_3fcdfb1c;
  if (*(char *)(_DAT_ram_3fcdfb1c + 4) == -1) {
    *(undefined1 *)(_DAT_ram_3fcdfb1c + 4) = *param_1;
    uVar1 = param_1[1];
    *(undefined4 *)(iVar2 + 8) = param_2;
    *(undefined4 *)(iVar2 + 0xc) = param_3;
    *(undefined1 *)(iVar2 + 5) = uVar1;
    *(undefined4 *)(iVar2 + 0x14) = param_4;
    *(undefined4 *)(iVar2 + 0x18) = param_5;
    *(undefined4 *)(iVar2 + 0x10) = param_6;
    FUN_ram_42033d46();
    return 0;
  }
  return 3;
}

