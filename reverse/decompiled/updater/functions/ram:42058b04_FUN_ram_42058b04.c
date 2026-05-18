
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42058b04(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  pbVar2 = *(byte **)(param_1 + 4);
  bVar1 = *pbVar2;
  if (bVar1 >> 4 != 4) goto LAB_ram_42058b2a;
  uVar3 = FUN_ram_4205073e(*(undefined2 *)(pbVar2 + 2));
  uVar6 = (bVar1 & 0xf) * 4;
  if (uVar3 < *(ushort *)(param_1 + 8)) {
    FUN_ram_42051e98(param_1,uVar3);
  }
  if (((*(ushort *)(param_1 + 10) < uVar6) || (*(ushort *)(param_1 + 8) < uVar3)) || (uVar6 < 0x14))
  goto LAB_ram_42058b2a;
  _DAT_ram_3fcb5e68 = *(uint *)(pbVar2 + 0x10);
  _DAT_ram_3fcb5e64 = *(uint *)(pbVar2 + 0xc);
  piVar5 = (int *)param_2;
  if ((_DAT_ram_3fcb5e68 & 0xf0) == 0xe0) {
    if (((*(byte *)(param_2 + 0x39) & 0x20) == 0) ||
       (iVar4 = FUN_ram_420585e2(param_2,&DAT_ram_3fcb5e68), iVar4 == 0)) goto LAB_ram_42058be6;
    if ((_DAT_ram_3fcb5e68 != 0x10000e0) || (_DAT_ram_3fcb5e64 != 0)) goto LAB_ram_42058c4e;
  }
  else {
    iVar4 = FUN_ram_42058a1a(param_2);
    if (iVar4 == 0) {
      piVar5 = _DAT_ram_3fcb67ac;
      if ((_DAT_ram_3fcb5e68 & 0xff) != 0x7f) {
        for (; piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
          if ((piVar5 != (int *)param_2) && (iVar4 = FUN_ram_42058a1a(piVar5), iVar4 != 0))
          goto LAB_ram_42058c4e;
        }
      }
    }
    else if (param_2 != 0) goto LAB_ram_42058c4e;
LAB_ram_42058be6:
    if ((pbVar2[9] != 0x11) || (piVar5 = (int *)param_2, *(short *)(pbVar2 + uVar6 + 2) != 0x4400))
    {
      piVar5 = (int *)0;
LAB_ram_42058c4e:
      if ((_DAT_ram_3fcb5e64 != 0) &&
         ((iVar4 = FUN_ram_42059006(_DAT_ram_3fcb5e64,param_2), iVar4 != 0 ||
          ((_DAT_ram_3fcb5e64 & 0xf0) == 0xe0)))) goto LAB_ram_42058b2a;
    }
    if (piVar5 == (int *)0x0) goto LAB_ram_42058b2a;
  }
  if ((pbVar2[6] & 0x3f) == 0 && pbVar2[7] == 0) {
    _DAT_ram_3fcb5e60 = (*pbVar2 & 0xf) << 2;
    _DAT_ram_3fcb5e54 = (int)piVar5;
    _DAT_ram_3fcb5e58 = param_2;
    _DAT_ram_3fcb5e5c = pbVar2;
    iVar4 = FUN_ram_4205227c(param_1,param_2);
    if (iVar4 != 1) {
      FUN_ram_42051cb2(param_1,uVar6);
      bVar1 = pbVar2[9];
      if (bVar1 == 6) {
        FUN_ram_42053bbe(param_1,param_2);
      }
      else {
        if (bVar1 < 7) {
          if (bVar1 == 1) {
            FUN_ram_42058138(param_1,param_2);
            _DAT_ram_3fcb5e54 = 0;
            _DAT_ram_3fcb5e58 = 0;
            _DAT_ram_3fcb5e5c = (byte *)0x0;
            _DAT_ram_3fcb5e60 = 0;
            _DAT_ram_3fcb5e64 = 0;
            _DAT_ram_3fcb5e68 = 0;
            return 0;
          }
          if (bVar1 == 2) {
            FUN_ram_4205868c(param_1,param_2,&DAT_ram_3fcb5e68);
            _DAT_ram_3fcb5e54 = 0;
            _DAT_ram_3fcb5e58 = 0;
            _DAT_ram_3fcb5e5c = (byte *)0x0;
            _DAT_ram_3fcb5e60 = 0;
            _DAT_ram_3fcb5e64 = 0;
            _DAT_ram_3fcb5e68 = 0;
            return 0;
          }
        }
        else if (bVar1 == 0x11) {
          FUN_ram_42055b94(param_1,param_2);
          _DAT_ram_3fcb5e54 = 0;
          _DAT_ram_3fcb5e58 = 0;
          _DAT_ram_3fcb5e5c = (byte *)0x0;
          _DAT_ram_3fcb5e60 = 0;
          _DAT_ram_3fcb5e64 = 0;
          _DAT_ram_3fcb5e68 = 0;
          return 0;
        }
        if (((iVar4 != 2) && (iVar4 = FUN_ram_42059006(_DAT_ram_3fcb5e68,piVar5), iVar4 == 0)) &&
           ((_DAT_ram_3fcb5e68 & 0xf0) != 0xe0)) {
          FUN_ram_42051cf0(param_1,uVar6);
          FUN_ram_420582f2(param_1,2);
        }
        FUN_ram_42051d02(param_1);
      }
    }
    _DAT_ram_3fcb5e54 = 0;
    _DAT_ram_3fcb5e58 = 0;
    _DAT_ram_3fcb5e5c = (byte *)0x0;
    _DAT_ram_3fcb5e60 = 0;
    _DAT_ram_3fcb5e64 = 0;
    _DAT_ram_3fcb5e68 = 0;
    return 0;
  }
LAB_ram_42058b2a:
  FUN_ram_42051d02(param_1);
  return 0;
}

