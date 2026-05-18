
void FUN_ram_4206d932(uint *param_1,int param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  *param_1 = uVar3 + param_3;
  uVar2 = uVar3 & 0x3f;
  if (uVar3 + param_3 < uVar3) {
    param_1[1] = param_1[1] + 1;
  }
  bVar1 = false;
  if (uVar2 != 0) {
    uVar3 = 0x40 - uVar2;
    if (param_3 < uVar3) {
      uVar3 = 0;
      goto LAB_ram_4206d9d8;
    }
    param_3 = (param_3 - 0x40) + uVar2;
    FUN_ram_4039c11e((int)param_1 + uVar2 + 0x1c,param_2,uVar3);
    param_2 = param_2 + uVar3;
    bVar1 = true;
  }
  if ((param_3 & 0xffffffc0) == 0) {
    uVar2 = 0;
    uVar3 = 0;
    if (!bVar1) goto LAB_ram_4206d9d8;
    bVar1 = true;
  }
  FUN_ram_4206d8ce();
  FUN_ram_4206d8f2(param_1[0x18]);
  FUN_ram_4206d912(param_1);
  if (bVar1) {
    FUN_ram_4206d906(0,param_1 + 7,param_1[0x17] != 0);
    if (param_1[0x17] != 0) {
      param_1[0x17] = 0;
    }
  }
  for (uVar3 = 0; (param_3 & 0xffffffc0) != uVar3; uVar3 = uVar3 + 0x40) {
    FUN_ram_4206d906(0,param_2 + uVar3,param_1[0x17] != 0);
    if (param_1[0x17] != 0) {
      param_1[0x17] = 0;
    }
  }
  thunk_FUN_ram_42097110(0,param_1 + 2);
  FUN_ram_4206d8e0();
  uVar2 = 0;
LAB_ram_4206d9d8:
  if (param_3 != 0) {
    FUN_ram_4039c11e((int)param_1 + uVar2 + 0x1c,param_2 + uVar3,param_3 - uVar3);
    return;
  }
  return;
}

