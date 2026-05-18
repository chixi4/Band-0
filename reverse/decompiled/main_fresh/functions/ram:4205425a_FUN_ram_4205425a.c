
undefined4 FUN_ram_4205425a(int param_1,int param_2,uint *param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint extraout_a3;
  uint uVar6;
  uint extraout_a5;
  
  if ((((param_1 == 0) || (param_3 == (uint *)0x0)) || (param_4 == 0)) || (param_5 == 0)) {
    return 0xfffffffa;
  }
  if ((*(byte *)(param_1 + 0x11) & 2) != 0) {
    if (*(ushort *)(param_2 + 10) < 0x14) {
      return 0xfffffffa;
    }
    uVar2 = FUN_ram_4205be20(param_2,param_5,0,0,0,0,param_4);
    return uVar2;
  }
  if (0xffeb < *(ushort *)(param_2 + 8)) {
    return 0xffffffff;
  }
  iVar3 = FUN_ram_42053a64(param_2,0x14);
  if (iVar3 == 0) {
    iVar4 = FUN_ram_42053a6a(param_2,0x14);
    iVar3 = param_2;
    if (iVar4 == 0) goto LAB_ram_42054302;
    FUN_ram_4039bf1e();
    uVar5 = extraout_a3;
    uVar6 = extraout_a5;
LAB_ram_42054360:
    if (uVar6 != uVar5) {
LAB_ram_42054364:
      uVar1 = *(undefined1 *)(param_1 + 0xb);
      goto LAB_ram_4205432a;
    }
  }
  else {
    iVar3 = FUN_ram_42053b52(0x22,0,0x280);
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    if (*(short *)(param_2 + 8) != 0) {
      FUN_ram_42053df8(iVar3,param_2);
    }
LAB_ram_42054302:
    uVar5 = 0xe0;
    uVar6 = *param_3 & 0xf0;
    if ((*(byte *)(param_1 + 0x11) & 4) == 0) goto LAB_ram_42054360;
    if (uVar6 != 0xe0) goto LAB_ram_42054364;
    *(byte *)(iVar3 + 0xd) = *(byte *)(iVar3 + 0xd) | 4;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x13);
LAB_ram_4205432a:
  uVar2 = FUN_ram_4205be20(iVar3,param_5,param_3,uVar1,*(undefined1 *)(param_1 + 10),
                           *(undefined1 *)(param_1 + 0x10),param_4);
  if (iVar3 != param_2) {
    FUN_ram_42053ac4(iVar3);
    return uVar2;
  }
  return uVar2;
}

