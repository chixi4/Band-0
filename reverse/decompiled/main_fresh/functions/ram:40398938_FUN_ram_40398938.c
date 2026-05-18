
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40398938(int *param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1 == (int *)0x0) || (param_2 == (uint *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  FUN_ram_40396966();
  if (*(char *)(_DAT_ram_3fcc4e9c + 0x14e) == '\0') {
    uVar3 = *param_2;
    if (uVar3 != 0xffffffff) {
      uVar2 = param_1[1];
      if (((*param_1 != _DAT_ram_3fcc4e74) && (uVar2 <= _DAT_ram_3fcc4e88)) ||
         (uVar3 <= _DAT_ram_3fcc4e88 - uVar2)) {
        *param_2 = 0;
        goto LAB_ram_40398976;
      }
      *param_2 = (uVar3 - _DAT_ram_3fcc4e88) + uVar2;
      FUN_ram_40398922();
    }
    uVar1 = 0;
  }
  else {
    *(undefined1 *)(_DAT_ram_3fcc4e9c + 0x14e) = 0;
LAB_ram_40398976:
    uVar1 = 1;
  }
  FUN_ram_40396994();
  return uVar1;
}

