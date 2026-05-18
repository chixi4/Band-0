
int FUN_ram_420289de(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint *param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  if (param_5 < param_3) {
    return -0x16;
  }
  *param_6 = param_3;
  if (param_3 != 0) {
    if ((param_2 < param_4) && (param_4 - param_2 < param_3)) {
      return -0x14;
    }
    uVar7 = *(uint *)(param_1 + 0x148);
    uVar10 = *(uint *)(param_1 + 0x14c);
    uVar3 = param_3 + uVar7;
    uVar5 = (uVar3 < param_3) + uVar10;
    if (((uVar5 < uVar10) || (((uVar10 == uVar5 && (uVar3 < uVar7)) || (0xf < uVar5)))) ||
       ((uVar5 == 0xf && (0xffffffe0 < uVar3)))) {
      return -0x14;
    }
    if (uVar7 == 0 && uVar10 == 0) {
      if ((*(uint *)(param_1 + 0x150) & 0xf) != 0) {
        FUN_ram_4202818a(param_1,param_1 + 0x178);
      }
    }
    else {
      uVar3 = uVar7 & 0xf;
      if (uVar3 != 0) {
        uVar5 = 0x10 - uVar3;
        if (param_3 < 0x10 - uVar3) {
          uVar5 = param_3;
        }
        iVar8 = FUN_ram_4202839a(param_1,&uStack_40,uVar3,uVar5,param_2,param_4);
        if (iVar8 != 0) {
          return iVar8;
        }
        if (uVar3 + uVar5 == 0x10) {
          FUN_ram_4202818a(param_1,param_1 + 0x178);
        }
        param_3 = param_3 - uVar5;
        uVar7 = *(int *)(param_1 + 0x148) + uVar5;
        uVar10 = (uint)(uVar7 < uVar5) + *(int *)(param_1 + 0x14c);
        param_2 = param_2 + uVar5;
        param_4 = param_4 + uVar5;
      }
    }
    *(uint *)(param_1 + 0x148) = uVar7 + param_3;
    iVar9 = param_4 + param_3;
    iVar8 = param_2 + param_3;
    *(uint *)(param_1 + 0x14c) = (uVar7 + param_3 < param_3) + uVar10;
    while( true ) {
      iVar6 = iVar9 - param_3;
      iVar4 = iVar8 - param_3;
      if (param_3 < 0x10) break;
      iVar1 = (*(code *)&SUB_ram_400108cc)(*(undefined4 *)(param_1 + 0x174));
      uVar2 = (*(code *)&SUB_ram_400108cc)(iVar1 + 1);
      *(char *)(param_1 + 0x175) = (char)((uint)uVar2 >> 8);
      *(char *)(param_1 + 0x174) = (char)uVar2;
      *(char *)(param_1 + 0x176) = (char)((uint)uVar2 >> 0x10);
      *(char *)(param_1 + 0x177) = (char)((uint)uVar2 >> 0x18);
      iVar4 = FUN_ram_4202839a(param_1,&uStack_40,0,0x10,iVar4,iVar6);
      if (iVar4 != 0) {
        return iVar4;
      }
      FUN_ram_4202818a(param_1,param_1 + 0x178,param_1 + 0x178);
      param_3 = param_3 - 0x10;
    }
    if (param_3 != 0) {
      iVar8 = (*(code *)&SUB_ram_400108cc)(*(undefined4 *)(param_1 + 0x174));
      uVar2 = (*(code *)&SUB_ram_400108cc)(iVar8 + 1);
      *(char *)(param_1 + 0x174) = (char)uVar2;
      *(char *)(param_1 + 0x175) = (char)((uint)uVar2 >> 8);
      *(char *)(param_1 + 0x176) = (char)((uint)uVar2 >> 0x10);
      *(char *)(param_1 + 0x177) = (char)((uint)uVar2 >> 0x18);
      iVar8 = FUN_ram_4202839a(param_1,&uStack_40,0,param_3,iVar4,iVar6);
      if (iVar8 != 0) {
        return iVar8;
      }
    }
    FUN_ram_420293a6(&uStack_40);
  }
  return 0;
}

