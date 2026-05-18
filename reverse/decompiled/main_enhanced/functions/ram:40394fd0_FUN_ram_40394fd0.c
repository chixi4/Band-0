
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40394fd0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar1 = _DAT_ram_600c0058 >> 10 & 3;
  if (((uVar1 != 1) && (uVar1 != 2)) && (uVar1 != 0)) {
    uVar1 = 3;
  }
  iVar3 = *param_1;
  if (iVar3 == 0) {
    FUN_ram_40390fa0(param_1[3],param_1[2]);
  }
  else {
    if (iVar3 == 1) {
      if (uVar1 != 1) {
        _DAT_ram_60008000 = _DAT_ram_60008000 & 0xfffffabf;
        iVar3 = FUN_ram_40390f58();
        if (param_1[1] != 0x1e0) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4039bf1e();
        }
        _DAT_ram_600c0008 = _DAT_ram_600c0008 | 4;
        _DAT_ram_6004e840 = _DAT_ram_6004e840 & 0xfffffffb | 8;
        if (iVar3 == 0x1a) {
          uVar1 = 0;
          iVar2 = 0;
          uVar4 = 4;
          uVar5 = 0xec;
          uVar6 = 0xc;
        }
        else {
          uVar1 = 3;
          iVar2 = 5;
          uVar4 = 0;
          uVar5 = 8;
          if (iVar3 == 0x20) {
            uVar5 = 0xb;
          }
          uVar6 = 0;
        }
        FUN_ram_40394b64(0x66,0,4,0x6b);
        FUN_ram_40394b64(0x66,0,2,uVar6 | iVar2 << 4);
        FUN_ram_40394b64(0x66,0,3,uVar5);
        FUN_ram_40394b98(0x66,0,5,2,0,uVar4);
        FUN_ram_40394b98(0x66,0,5,6,4,uVar4);
        FUN_ram_40394b64(0x66,0,6,uVar1 | 0x70);
        FUN_ram_40394b98(0x66,0,9,1,0,2);
        do {
        } while (-1 < (int)(_DAT_ram_6004e840 << 7));
        (*(code *)&SUB_ram_40010044)(10);
        _DAT_ram_6004e840 = _DAT_ram_6004e840 & 0xfffffff7 | 4;
        _DAT_ram_3fcc4e34 = 0x1e0;
      }
      FUN_ram_40394f66(param_1[3]);
      return;
    }
    if (iVar3 != 2) {
      return;
    }
    (*(code *)&SUB_ram_40010774)(0x14);
    _DAT_ram_600c0058 = _DAT_ram_600c0058 & 0xfffff000 | 0x800;
    FUN_ram_40390f8a(17500000);
  }
  if (uVar1 != 1) {
    return;
  }
  FUN_ram_40394c8a();
  return;
}

