
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4208f75e(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 1;
  piVar1 = (int *)_DAT_ram_3fcc4128;
  do {
    if ((piVar1 == (int *)0x0) || ((uVar3 & 4) != 0)) {
      return;
    }
    iVar2 = FUN_ram_4039c0e0(piVar1 + 1,param_2,6);
    if (iVar2 == 0) {
      *param_1 = *(undefined1 *)((int)piVar1 + 0x2b);
      param_1[1] = *(undefined1 *)((int)piVar1 + 0x56);
      param_1[5] = *(undefined1 *)((int)piVar1 + 0x57);
LAB_ram_4208f7c4:
      uVar3 = uVar3 << 1;
    }
    else {
      iVar2 = FUN_ram_4039c0e0(piVar1 + 1,param_3,6);
      if (iVar2 == 0) {
        param_1[2] = *(undefined1 *)((int)piVar1 + 0x2b);
        param_1[3] = *(undefined1 *)((int)piVar1 + 0x56);
        param_1[4] = *(undefined1 *)((int)piVar1 + 0x57);
        goto LAB_ram_4208f7c4;
      }
    }
    piVar1 = (int *)*piVar1;
  } while( true );
}

