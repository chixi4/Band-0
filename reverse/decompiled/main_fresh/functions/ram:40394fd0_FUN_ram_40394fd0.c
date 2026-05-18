
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40394fd0(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *extraout_a5;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar1 = _DAT_ram_600c0058 >> 10 & 3;
  if (((uVar1 != 1) && (uVar1 != 2)) && (uVar1 != 0)) {
    uVar1 = 3;
  }
  iVar4 = *param_1;
  if (iVar4 == 0) {
    FUN_ram_40390fa0(param_1[3],param_1[2]);
joined_r0x40395194:
    if (uVar1 != 1) {
      return;
    }
    FUN_ram_40394c8a();
    return;
  }
  if (iVar4 != 1) {
    if (iVar4 != 2) {
      return;
    }
    (*(code *)&SUB_ram_40010774)(0x14);
    _DAT_ram_600c0058 = _DAT_ram_600c0058 & 0xfffff000 | 0x800;
    FUN_ram_40390f8a(17500000);
    goto joined_r0x40395194;
  }
  if (uVar1 != 1) {
    _DAT_ram_60008000 = _DAT_ram_60008000 & 0xfffffabf;
    iVar4 = FUN_ram_40390f58();
    if (param_1[1] != 0x1e0) {
      iVar4 = FUN_ram_4039bf1e();
    }
    _DAT_ram_600c0008 = _DAT_ram_600c0008 | 4;
    _DAT_ram_6004e840 = _DAT_ram_6004e840 & 0xfffffffb | 8;
    if (iVar4 == 0x1a) {
      uVar1 = 0;
      iVar2 = 0;
      uVar5 = 4;
      uVar6 = 0xec;
      uVar7 = 0xc;
    }
    else {
      uVar1 = 3;
      iVar2 = 5;
      uVar5 = 0;
      uVar6 = 8;
      if (iVar4 == 0x20) {
        uVar6 = 0xb;
      }
      uVar7 = 0;
    }
    FUN_ram_40394b64(0x66,0,4,0x6b);
    FUN_ram_40394b64(0x66,0,2,uVar7 | iVar2 << 4);
    FUN_ram_40394b64(0x66,0,3,uVar6);
    FUN_ram_40394b98(0x66,0,5,2,0,uVar5);
    FUN_ram_40394b98(0x66,0,5,6,4,uVar5);
    FUN_ram_40394b64(0x66,0,6,uVar1 | 0x70);
    FUN_ram_40394b98(0x66,0,9,1,0,2);
    do {
    } while (-1 < (int)(_DAT_ram_6004e840 << 7));
    (*(code *)&SUB_ram_40010044)(10);
    _DAT_ram_6004e840 = _DAT_ram_6004e840 & 0xfffffff7 | 4;
    _DAT_ram_3fcc4e34 = 0x1e0;
  }
  iVar4 = param_1[3];
  puVar3 = (uint *)&DAT_ram_600c0008;
  if (iVar4 != 0x50) {
    if (iVar4 == 0x78) {
      uVar1 = _DAT_ram_600c0008 & 0xfffffffc | 1;
      goto LAB_ram_40394f8c;
    }
    FUN_ram_4039bf1e();
    puVar3 = extraout_a5;
  }
  uVar1 = *puVar3 & 0xfffffffc;
LAB_ram_40394f8c:
  *puVar3 = uVar1;
  _DAT_ram_600c0058 = _DAT_ram_600c0058 & 0xfffff000 | 0x400;
  FUN_ram_40390f8a(40000000);
  (*(code *)&SUB_ram_40010774)(iVar4);
  return;
}

