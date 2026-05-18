
undefined4 FUN_ram_42052380(int param_1,int param_2,uint *param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if ((((param_1 == 0) || (param_3 == (uint *)0x0)) || (param_4 == 0)) || (param_5 == 0)) {
    return 0xfffffffa;
  }
  if ((*(byte *)(param_1 + 0x11) & 2) != 0) {
    if (*(ushort *)(param_2 + 10) < 0x14) {
      return 0xfffffffa;
    }
    uVar2 = FUN_ram_42058fe2(param_2,param_5,0,0,0,0,param_4);
    return uVar2;
  }
  if (0xffeb < *(ushort *)(param_2 + 8)) {
    return 0xffffffff;
  }
  iVar3 = FUN_ram_42051cac(param_2,0x14);
  if (iVar3 == 0) {
    iVar4 = FUN_ram_42051cb2(param_2,0x14);
    iVar3 = param_2;
    if (iVar4 != 0) {
      return 0xffffffff;
    }
  }
  else {
    iVar3 = FUN_ram_42051d86(0x22,0,0x280);
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    if (*(short *)(param_2 + 8) != 0) {
      FUN_ram_42051faa(iVar3,param_2);
    }
  }
  if ((*(byte *)(param_1 + 0x11) & 4) == 0) {
    if ((*param_3 & 0xf0) != 0xe0) goto LAB_ram_42052484;
  }
  else {
    if ((*param_3 & 0xf0) != 0xe0) {
LAB_ram_42052484:
      uVar1 = *(undefined1 *)(param_1 + 0xb);
      goto LAB_ram_42052450;
    }
    *(byte *)(iVar3 + 0xd) = *(byte *)(iVar3 + 0xd) | 4;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x13);
LAB_ram_42052450:
  uVar2 = FUN_ram_42058fe2(iVar3,param_5,param_3,uVar1,*(undefined1 *)(param_1 + 10),
                           *(undefined1 *)(param_1 + 0x10),param_4);
  if (iVar3 != param_2) {
    FUN_ram_42051d02(iVar3);
    return uVar2;
  }
  return uVar2;
}

