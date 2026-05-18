
void FUN_ram_4209824c(undefined4 param_1)

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
  
  FUN_ram_4205f78c();
  uVar1 = FUN_ram_4205fba0(param_1);
  if (((uVar1 & 1) != 0) && (iVar2 = FUN_ram_4205f732(param_1,&local_40), iVar2 == 0)) {
    if (local_40 == 0) {
      FUN_ram_4205f722(param_1);
    }
    else if (local_40 == 2) {
      FUN_ram_4205f8ee(param_1,auStack_3c);
      FUN_ram_4205f8c0(param_1,auStack_30);
      iVar2 = FUN_ram_4205fb4a(auStack_3c);
      if (iVar2 != 0) {
        uStack_14 = 0;
        uStack_24 = param_1;
        iVar2 = FUN_ram_4039c0e0(auStack_3c,auStack_30,0xc);
        if (iVar2 != 0) {
          uStack_14 = CONCAT31(uStack_14._1_3_,1);
        }
        FUN_ram_4039c11e(auStack_20,auStack_3c,0xc);
        FUN_ram_4205fb5a(param_1,auStack_3c);
        uVar3 = FUN_ram_4205fba8(param_1,1);
        FUN_ram_420b2e88(0x18ff1f,uVar3,&uStack_24,0x14,0);
      }
    }
  }
  return;
}

