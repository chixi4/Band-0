
int FUN_ram_4207105a(uint *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 auStack_108 [32];
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  uint uStack_68;
  undefined1 local_64 [32];
  undefined1 auStack_44 [40];
  
  if ((*param_1 & 0xfffffffd) != 1) {
    return -0x4f80;
  }
  iVar1 = FUN_ram_42072c7e(param_1,param_3);
  if ((iVar1 == 0) && (iVar1 = FUN_ram_42070fb0(param_1,param_4), iVar1 == 0)) {
    uVar4 = param_1[0xf];
    (*(code *)&SUB_ram_40010488)(auStack_108,0,0x20);
    (*(code *)&SUB_ram_40010488)(auStack_e8,0,0x20);
    (*(code *)&SUB_ram_40010488)(auStack_c8,0,0x20);
    (*(code *)&SUB_ram_40010488)(auStack_a8,0,0x40);
    (*(code *)&SUB_ram_40010488)(local_64,0,0x44);
    uStack_68 = uVar4 >> 3;
    iVar1 = FUN_ram_4206841a(param_4,auStack_a8,0x20);
    if ((iVar1 == 0) &&
       ((iVar1 = FUN_ram_4206841a(param_4 + 8,auStack_88,0x20), iVar1 == 0 &&
        (iVar1 = FUN_ram_4206841a(param_3,auStack_c8,0x20), iVar1 == 0)))) {
      FUN_ram_42073910(auStack_a8,auStack_c8,local_64,0);
      iVar1 = 0x1f;
      puVar3 = local_64;
      do {
        auStack_108[iVar1] = *puVar3;
        puVar2 = auStack_e8 + iVar1;
        iVar1 = iVar1 + -1;
        *puVar2 = puVar3[0x20];
        puVar3 = puVar3 + 1;
      } while (iVar1 != -1);
      iVar1 = FUN_ram_420683d6(param_2,auStack_108,0x20);
      if (((iVar1 == 0) && (iVar1 = FUN_ram_420683d6(param_2 + 8,auStack_e8,0x20), iVar1 == 0)) &&
         (iVar1 = FUN_ram_42068310(param_2 + 0x10,1), iVar1 == 0)) {
        return 0;
      }
    }
    iVar1 = -0x4f80;
  }
  return iVar1;
}

