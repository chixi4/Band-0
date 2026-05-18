
undefined4 * FUN_ram_4205e90a(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)FUN_ram_4205e3d4();
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = FUN_ram_4205e586(param_1,param_2);
    if (iVar2 != 0) {
      iVar3 = FUN_ram_4202fdc8();
      if (((iVar3 == 0) && (iVar3 = FUN_ram_4205e870(param_1,iVar2), iVar3 != 0)) &&
         (iVar3 = FUN_ram_4202df5a(param_1,iVar2), -1 < iVar3)) {
        uVar4 = FUN_ram_42066de0(2);
        iVar3 = FUN_ram_42066e2a(puVar1,uVar4);
        if (iVar3 == 0) {
          iVar3 = FUN_ram_4205e3f6(*puVar1,puVar1[1]);
          FUN_ram_4202fa5c(iVar3 + 0x68,iVar2);
          uVar4 = FUN_ram_4205e3f6(*puVar1,puVar1[1]);
          FUN_ram_42030f1a(uVar4,*param_1);
          FUN_ram_4205e51c(iVar2,0);
          return puVar1;
        }
      }
      FUN_ram_4205e51c(iVar2,0);
    }
    FUN_ram_42066dba(puVar1);
  }
  return (undefined4 *)0x0;
}

