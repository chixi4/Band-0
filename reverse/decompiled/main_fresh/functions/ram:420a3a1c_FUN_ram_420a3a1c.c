
/* WARNING: Removing unreachable block (ram,0x420a3bb2) */
/* WARNING: Removing unreachable block (ram,0x420a3bb6) */
/* WARNING: Removing unreachable block (ram,0x420a3b00) */
/* WARNING: Removing unreachable block (ram,0x420a3b1e) */
/* WARNING: Removing unreachable block (ram,0x420a3b3c) */
/* WARNING: Removing unreachable block (ram,0x420a3b54) */
/* WARNING: Removing unreachable block (ram,0x420a3b60) */
/* WARNING: Removing unreachable block (ram,0x420a3b74) */
/* WARNING: Removing unreachable block (ram,0x420a3b96) */

int FUN_ram_420a3a1c(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint auStack_40 [4];
  undefined1 auStack_30 [28];
  
  if (param_1 == 0) {
    auStack_40[1] = 0;
    auStack_40[0] = 0;
    auStack_40[3] = 0;
    auStack_40[2] = 0;
    ebreak();
    ebreak();
    return 0;
  }
  piVar1 = *(int **)(param_1 + 8);
  auStack_40[1] = 0;
  auStack_40[0] = 0;
  uVar3 = piVar1[0x1c];
  auStack_40[3] = 0;
  auStack_40[2] = 0;
  if (uVar3 < 0x40) {
    uVar4 = 1 << (uVar3 & 0x1f);
    auStack_40[(int)uVar3 >> 5] = auStack_40[(int)uVar3 >> 5] | uVar4;
    auStack_40[((int)uVar3 >> 5) + 2] = uVar4 | auStack_40[((int)uVar3 >> 5) + 2];
  }
  if ((*piVar1 == 0) || (iVar5 = thunk_FUN_ram_420a2fb2(), iVar5 < 1)) {
    iVar5 = piVar1[0x1c];
    uVar2 = FUN_ram_420a3d5a(param_2,auStack_30);
    iVar5 = FUN_ram_4201432c(iVar5 + 1,auStack_40,0,auStack_40 + 2,uVar2);
    if ((iVar5 == 1) &&
       ((uVar3 = piVar1[0x1c], uVar3 < 0x40 &&
        ((1 << (uVar3 & 0x1f) & (auStack_40 + 2)[(int)uVar3 >> 5]) != 0)))) {
      uStack_44 = 4;
      uStack_48 = 0;
      FUN_ram_42051a52(uVar3,0xfff,0x1007,&uStack_48,&uStack_44);
      FUN_ram_420a3590(param_1,uStack_48);
      iVar5 = -1;
    }
  }
  return iVar5;
}

