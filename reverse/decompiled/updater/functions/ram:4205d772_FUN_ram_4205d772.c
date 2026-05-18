
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4205d772(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int local_40;
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  undefined4 uStack_14;
  
  FUN_ram_42021842();
  uVar1 = FUN_ram_42021a0c(param_1);
  if (((uVar1 & 1) != 0) && (iVar2 = FUN_ram_42021808(param_1,&local_40), iVar2 == 0)) {
    if (local_40 == 0) {
      FUN_ram_420217f8(param_1);
    }
    else if (local_40 == 2) {
      FUN_ram_420219a4(param_1,auStack_3c);
      FUN_ram_42021976(param_1,auStack_30);
      iVar2 = FUN_ram_420219ec(auStack_3c);
      if (iVar2 != 0) {
        uStack_14 = 0;
        uStack_24 = param_1;
        iVar2 = FUN_ram_40399d6c(auStack_3c,auStack_30,0xc);
        if (iVar2 != 0) {
          uStack_14 = CONCAT31(uStack_14._1_3_,1);
        }
        FUN_ram_40399daa(auStack_20,auStack_3c,0xc);
        FUN_ram_420219fc(param_1,auStack_3c);
        uVar3 = FUN_ram_42021a14(param_1,1);
        FUN_ram_42079738(_DAT_ram_3c0758dc,uVar3,&uStack_24,0x14,0);
      }
    }
  }
  return;
}

