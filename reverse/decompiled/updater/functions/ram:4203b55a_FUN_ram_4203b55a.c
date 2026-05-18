
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203b55a(uint param_1,undefined2 *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_1 < 0xb) {
    iVar4 = param_1 + 8;
    if ((*(char *)(param_1 + 0x3fcb4fc8) == '\0') && (*(int *)(iVar4 * 4 + 0x3fcb4f7c) != 0)) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
      *(undefined4 *)(iVar4 * 4 + 0x3fcb4f7c) = 0;
    }
    if ((param_2 == (undefined2 *)0x0) && (param_3 == 0)) goto LAB_ram_4203b5ca;
    *(char *)(param_1 + 0x3fcb4fc8) = (char)param_4;
    if (param_4 == 0) {
      iVar4 = iVar4 * 4;
      iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x168))(param_3 + 2);
      *(int *)(iVar4 + 0x3fcb4f7c) = iVar2;
      if (iVar2 == 0) {
        uVar3 = 0x3c07fae8;
        goto LAB_ram_4203b610;
      }
      goto LAB_ram_4203b69c;
    }
  }
  else {
    if (0xe < param_1) {
      return 1;
    }
    uVar1 = param_1 - 0xb & 0xff;
    if (uVar1 == 0) {
      DAT_ram_3fcb5144 = 1;
    }
    iVar4 = uVar1 + 0x8c;
    if ((*(char *)(uVar1 + 0x3fcb51bc) == '\0') && (*(int *)(iVar4 * 4 + 0x3fcb4f7c) != 0)) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
      *(undefined4 *)(iVar4 * 4 + 0x3fcb4f7c) = 0;
    }
    if ((param_2 == (undefined2 *)0x0) && (param_3 == 0)) {
LAB_ram_4203b5ca:
      *(undefined4 *)(iVar4 * 4 + 0x3fcb4f7c) = 0;
      return 0;
    }
    *(char *)(uVar1 + 0x3fcb51bc) = (char)param_4;
    if (param_4 == 0) {
      iVar4 = iVar4 * 4;
      iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x168))(param_3 + 2);
      *(int *)(iVar4 + 0x3fcb4f7c) = iVar2;
      if (iVar2 == 0) {
        uVar3 = 0x3c07fadc;
LAB_ram_4203b610:
        FUN_ram_42033fd8(1,2,2,uVar3);
        return 1;
      }
LAB_ram_4203b69c:
      FUN_ram_40399daa(iVar2 + 2,param_2,param_3);
      **(undefined2 **)(iVar4 + 0x3fcb4f7c) = (short)param_3;
      return 0;
    }
  }
  *(undefined2 **)(iVar4 * 4 + 0x3fcb4f7c) = param_2;
  *param_2 = (short)param_3;
  return 0;
}

