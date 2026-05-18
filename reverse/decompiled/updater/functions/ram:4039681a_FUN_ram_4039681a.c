
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4039681a(int *param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_ram_40394d60();
  if (*(char *)(_DAT_ram_3fcb65fc + 0x14e) == '\0') {
    uVar3 = *param_2;
    if (uVar3 != 0xffffffff) {
      uVar2 = param_1[1];
      if (((*param_1 != _DAT_ram_3fcb65d4) && (uVar2 <= _DAT_ram_3fcb65e8)) ||
         (uVar3 <= _DAT_ram_3fcb65e8 - uVar2)) {
        *param_2 = 0;
        goto LAB_ram_40396848;
      }
      *param_2 = (uVar3 - _DAT_ram_3fcb65e8) + uVar2;
      FUN_ram_40396804();
    }
    uVar1 = 0;
  }
  else {
    *(undefined1 *)(_DAT_ram_3fcb65fc + 0x14e) = 0;
LAB_ram_40396848:
    uVar1 = 1;
  }
  FUN_ram_40394d8e();
  return uVar1;
}

