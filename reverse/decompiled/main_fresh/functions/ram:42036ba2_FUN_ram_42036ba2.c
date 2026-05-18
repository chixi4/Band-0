
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42036ba2(uint param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_1 == 2) {
LAB_ram_42036bc0:
    uVar1 = 0;
    iVar4 = _DAT_ram_3fcb6be8;
  }
  else {
    if (param_1 < 3) {
      if (param_1 == 0) goto LAB_ram_42036bc0;
    }
    else if (param_1 != 3) {
      return 3;
    }
    iVar4 = _DAT_ram_3fcb6be8 + 6;
    uVar1 = (uint)(*(byte *)(_DAT_ram_3fcb6be8 + 0xb) < 0x40);
  }
  iVar2 = FUN_ram_4039c0e0(iVar4,&DAT_ram_3c0f5720,6);
  uVar3 = 0x15;
  if (iVar2 != 0) {
    if (param_2 != (int *)0x0) {
      *param_2 = iVar4;
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = uVar1;
    }
    uVar3 = 0;
  }
  return uVar3;
}

