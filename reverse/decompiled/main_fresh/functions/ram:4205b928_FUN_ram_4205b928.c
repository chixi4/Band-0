
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4205b928(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  pbVar2 = *(byte **)(param_1 + 4);
  bVar1 = *pbVar2;
  if (bVar1 >> 4 != 4) goto LAB_ram_4205b94e;
  uVar3 = FUN_ram_420523aa(*(undefined2 *)(pbVar2 + 2));
  uVar6 = (bVar1 & 0xf) * 4;
  if (uVar3 < *(ushort *)(param_1 + 8)) {
    FUN_ram_42053cac(param_1,uVar3);
  }
  if (((*(ushort *)(param_1 + 10) < uVar6) || (*(ushort *)(param_1 + 8) < uVar3)) || (uVar6 < 0x14))
  goto LAB_ram_4205b94e;
  _DAT_ram_3fcc26bc = *(uint *)(pbVar2 + 0x10);
  _DAT_ram_3fcc26b8 = *(uint *)(pbVar2 + 0xc);
  piVar5 = (int *)param_2;
  if ((_DAT_ram_3fcc26bc & 0xf0) == 0xe0) {
    if (((*(byte *)(param_2 + 0x39) & 0x20) == 0) ||
       (iVar4 = FUN_ram_4205b3ec(param_2,&DAT_ram_3fcc26bc), iVar4 == 0)) goto LAB_ram_4205ba0a;
    if ((_DAT_ram_3fcc26bc != 0x10000e0) || (_DAT_ram_3fcc26b8 != 0)) goto LAB_ram_4205ba72;
  }
  else {
    iVar4 = FUN_ram_4205b83e(param_2);
    if (iVar4 == 0) {
      piVar5 = _DAT_ram_3fcc52d8;
      if ((_DAT_ram_3fcc26bc & 0xff) != 0x7f) {
        for (; piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
          if ((piVar5 != (int *)param_2) && (iVar4 = FUN_ram_4205b83e(piVar5), iVar4 != 0))
          goto LAB_ram_4205ba72;
        }
      }
    }
    else if (param_2 != 0) goto LAB_ram_4205ba72;
LAB_ram_4205ba0a:
    if ((pbVar2[9] != 0x11) || (piVar5 = (int *)param_2, *(short *)(pbVar2 + uVar6 + 2) != 0x4400))
    {
      piVar5 = (int *)0;
LAB_ram_4205ba72:
      if ((_DAT_ram_3fcc26b8 != 0) &&
         ((iVar4 = FUN_ram_4205be44(_DAT_ram_3fcc26b8,param_2), iVar4 != 0 ||
          ((_DAT_ram_3fcc26b8 & 0xf0) == 0xe0)))) goto LAB_ram_4205b94e;
    }
    if (piVar5 == (int *)0x0) goto LAB_ram_4205b94e;
  }
  if ((pbVar2[6] & 0x3f) == 0 && pbVar2[7] == 0) {
    _DAT_ram_3fcc26b4 = (*pbVar2 & 0xf) << 2;
    _DAT_ram_3fcc26a8 = (int)piVar5;
    _DAT_ram_3fcc26ac = param_2;
    _DAT_ram_3fcc26b0 = pbVar2;
    iVar4 = FUN_ram_4205412a(param_1,param_2);
    if (iVar4 != 1) {
      FUN_ram_42053a6a(param_1,uVar6);
      bVar1 = pbVar2[9];
      if (bVar1 == 6) {
        FUN_ram_420565de(param_1,param_2);
      }
      else {
        if (bVar1 < 7) {
          if (bVar1 == 1) {
            FUN_ram_4205af12(param_1,param_2);
            _DAT_ram_3fcc26a8 = 0;
            _DAT_ram_3fcc26ac = 0;
            _DAT_ram_3fcc26b0 = (byte *)0x0;
            _DAT_ram_3fcc26b4 = 0;
            _DAT_ram_3fcc26b8 = 0;
            _DAT_ram_3fcc26bc = 0;
            return 0;
          }
          if (bVar1 == 2) {
            FUN_ram_4205b4b0(param_1,param_2,&DAT_ram_3fcc26bc);
            _DAT_ram_3fcc26a8 = 0;
            _DAT_ram_3fcc26ac = 0;
            _DAT_ram_3fcc26b0 = (byte *)0x0;
            _DAT_ram_3fcc26b4 = 0;
            _DAT_ram_3fcc26b8 = 0;
            _DAT_ram_3fcc26bc = 0;
            return 0;
          }
        }
        else if (bVar1 == 0x11) {
          FUN_ram_420587d4(param_1,param_2);
          _DAT_ram_3fcc26a8 = 0;
          _DAT_ram_3fcc26ac = 0;
          _DAT_ram_3fcc26b0 = (byte *)0x0;
          _DAT_ram_3fcc26b4 = 0;
          _DAT_ram_3fcc26b8 = 0;
          _DAT_ram_3fcc26bc = 0;
          return 0;
        }
        if (((iVar4 != 2) && (iVar4 = FUN_ram_4205be44(_DAT_ram_3fcc26bc,piVar5), iVar4 == 0)) &&
           ((_DAT_ram_3fcc26bc & 0xf0) != 0xe0)) {
          FUN_ram_42053ab2(param_1,uVar6);
          FUN_ram_4205b0d4(param_1,2);
        }
        FUN_ram_42053ac4(param_1);
      }
    }
    _DAT_ram_3fcc26a8 = 0;
    _DAT_ram_3fcc26ac = 0;
    _DAT_ram_3fcc26b0 = (byte *)0x0;
    _DAT_ram_3fcc26b4 = 0;
    _DAT_ram_3fcc26b8 = 0;
    _DAT_ram_3fcc26bc = 0;
    return 0;
  }
LAB_ram_4205b94e:
  FUN_ram_42053ac4(param_1);
  return 0;
}

