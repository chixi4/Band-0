
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_420148f4(char *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  
  uVar1 = _DAT_ram_3fcb668c;
  if (_DAT_ram_3fcb668c < 8) {
    if (param_2 == 0) {
      return 0x102;
    }
    if (param_1 == (char *)0x0) {
      iVar3 = 0;
      pcVar7 = (char *)0x3c071e68;
    }
    else {
      iVar3 = (*(code *)&SUB_ram_400104a8)();
      pcVar7 = param_1;
      if (iVar3 != 0) {
        if (0xd < iVar3 - 2U) {
          return 0x102;
        }
        if (*param_1 != '/') {
          return 0x102;
        }
        if (param_1[iVar3 + -1] == '/') {
          return 0x102;
        }
      }
    }
    piVar5 = (int *)&DAT_ram_3fcb2080;
    uVar2 = 0;
    do {
      if (*piVar5 == 0) {
        if (*(int *)(&DAT_ram_3fcb2080 + uVar2 * 4) != 0) {
          return 0x103;
        }
        if (uVar1 == uVar2) {
          _DAT_ram_3fcb668c = uVar2 + 1;
        }
        puVar4 = (undefined4 *)FUN_ram_40390448(iVar3 + 0x15,0x1000);
        if (puVar4 == (undefined4 *)0x0) {
          return 0x101;
        }
        *(undefined4 **)(&DAT_ram_3fcb2080 + uVar2 * 4) = puVar4;
        iVar6 = -1;
        if (param_1 != (char *)0x0) {
          iVar6 = iVar3;
        }
        puVar4[4] = iVar6;
        puVar4[1] = param_2;
        puVar4[2] = param_4;
        puVar4[3] = uVar2;
        *puVar4 = param_3;
        FUN_ram_40399daa(puVar4 + 5,pcVar7,iVar3 + 1);
        if (param_5 != (uint *)0x0) {
          *param_5 = uVar2;
        }
        return 0;
      }
      uVar2 = uVar2 + 1;
      piVar5 = piVar5 + 1;
    } while (uVar2 != 8);
  }
  return 0x101;
}

