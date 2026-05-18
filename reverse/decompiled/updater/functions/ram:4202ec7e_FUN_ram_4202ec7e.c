
int FUN_ram_4202ec7e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                    undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_dc [8];
  undefined1 auStack_d4 [64];
  undefined1 auStack_94 [100];
  
  iVar1 = *(int *)(param_1 + 0x40);
  iVar3 = FUN_ram_42028dc8(param_7);
  if (iVar3 == 0) {
    iVar1 = -0x4f80;
  }
  else {
    FUN_ram_4202476a(auStack_dc);
    FUN_ram_420313a6(auStack_94);
    uVar2 = iVar1 + 7U >> 3;
    iVar1 = FUN_ram_42024c5e(param_4,auStack_d4,uVar2);
    if ((((iVar1 == 0) && (iVar1 = FUN_ram_4202eaa0(param_1,auStack_dc,param_5,param_6), iVar1 == 0)
         ) && (iVar1 = FUN_ram_42024c5e(auStack_dc,auStack_d4 + uVar2,uVar2), iVar1 == 0)) &&
       (iVar1 = FUN_ram_4203158c(auStack_94,iVar3,auStack_d4,uVar2 << 1), iVar1 == 0)) {
      iVar1 = FUN_ram_4202eb16(param_1,param_2,param_3,param_4,param_5,param_6,0x420216e2,auStack_94
                               ,param_8,param_9,param_10);
    }
    FUN_ram_420316ea(auStack_94);
    FUN_ram_42024774(auStack_dc);
  }
  return iVar1;
}

