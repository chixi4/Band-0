
undefined4 FUN_ram_42020d48(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  if (param_3 != 0) {
    uVar4 = 0x102;
    if ((param_2 != 0) && (param_1 + param_2 < 0x1001)) {
      FUN_ram_42020b2e();
      FUN_ram_42020b92();
      iVar3 = FUN_ram_42020cac();
      uVar4 = 0x107;
      if (iVar3 != 0) {
        FUN_ram_42048144(5,0);
        FUN_ram_42020bd0();
        FUN_ram_42020cda(0xa2);
        FUN_ram_42020c7c();
        FUN_ram_42020bda();
        for (uVar1 = 0; param_1 != uVar1; uVar1 = uVar1 + 1 & 0xffff) {
          FUN_ram_42020bda();
        }
        uVar1 = 0;
        do {
          uVar2 = FUN_ram_42020c1e();
          puVar5 = (undefined1 *)(param_3 + uVar1);
          uVar1 = uVar1 + 1;
          *puVar5 = uVar2;
        } while ((uVar1 & 0xffff) < param_2);
        FUN_ram_42048144(5,1);
        FUN_ram_42020c94();
        FUN_ram_42048144(7,0);
        uVar4 = 0;
      }
    }
    return uVar4;
  }
  return 0x102;
}

