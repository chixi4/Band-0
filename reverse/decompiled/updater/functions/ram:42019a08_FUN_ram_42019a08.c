
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42019a08(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [100];
  
  uVar4 = *(uint *)(_DAT_ram_3fcdfff0 + 4);
  *param_3 = 0;
  iVar1 = 0;
  iVar3 = 0;
  piVar2 = param_1;
  do {
    if ((short)*piVar2 == 0x50aa) {
      if ((uVar4 < (uint)piVar2[1]) || (uVar4 < (uint)(piVar2[1] + piVar2[2]))) {
        return 0x104;
      }
    }
    else {
      if ((short)*piVar2 != -0x1415) {
        if (iVar1 == 0) {
          return 0x103;
        }
        if (*piVar2 != -1) {
          return 0x103;
        }
        *param_3 = iVar1 - iVar3;
        return 0;
      }
      if (iVar3 != 0) {
        return 0x103;
      }
      (*(code *)&SUB_ram_40012be4)(auStack_88);
      (*(code *)&SUB_ram_40012be8)(auStack_88,param_1,iVar1 << 5);
      (*(code *)&SUB_ram_40012bec)(auStack_88,auStack_98);
      iVar3 = FUN_ram_40399d6c(piVar2 + 4,auStack_98);
      if (iVar3 != 0) {
        return 0x103;
      }
      iVar3 = 1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 8;
    if (iVar1 == 0x60) {
      return 0x103;
    }
  } while( true );
}

