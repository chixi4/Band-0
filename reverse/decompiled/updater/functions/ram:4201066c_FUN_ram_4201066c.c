
void FUN_ram_4201066c(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 auStack_40 [12];
  undefined4 uStack_34;
  undefined1 auStack_30 [24];
  
  FUN_ram_40390e5c();
  uVar3 = FUN_ram_40393bb6();
  FUN_ram_40393b40(1,uVar3);
  FUN_ram_40393cb2(1);
  puStack_44 = &DAT_ram_60008000;
  uStack_48 = 0;
  uVar4 = FUN_ram_40393c7c();
  (*(code *)&SUB_ram_40010288)(&uStack_48);
  (*(code *)&SUB_ram_4001029c)(&uStack_48);
  iVar7 = 3;
  iVar2 = 1;
  uVar3 = (*(code *)&SUB_ram_400109f0)(uVar4 * 0x640,(int)((ulonglong)uVar4 * 0x640 >> 0x20),1000,0)
  ;
  (*(code *)&SUB_ram_40010284)(&uStack_48,0,uVar3,4);
  (*(code *)&SUB_ram_4001028c)(&uStack_48);
  iVar5 = FUN_ram_40393c62();
  do {
    bVar1 = false;
    if (iVar2 == 1) {
      do {
        FUN_ram_40393b06();
        iVar6 = FUN_ram_40394308(2,3000);
        if (iVar6 != 0) {
          bVar1 = false;
          goto LAB_ram_4201073c;
        }
        iVar6 = iVar7 + -1;
        bVar1 = 0 < iVar7;
        iVar7 = iVar6;
      } while (bVar1);
      iVar2 = 0;
      bVar1 = true;
    }
LAB_ram_4201073c:
    FUN_ram_40393bc6(iVar2);
    if ((bVar1) || ((iVar5 == 1 && (iVar2 != 1)))) {
      FUN_ram_40393b24();
    }
    iVar6 = FUN_ram_40394308(0,3000);
    if (iVar6 != 0) {
      FUN_ram_4201130a();
      iVar7 = FUN_ram_40393c7c();
      (*(code *)&SUB_ram_40010288)(&uStack_48);
      (*(code *)&SUB_ram_4001029c)(&uStack_48);
      (*(code *)&SUB_ram_40010284)(&uStack_48,0,iVar7 * 9,4);
      (*(code *)&SUB_ram_4001028c)(&uStack_48);
      FUN_ram_40393d4c(auStack_40);
      iVar7 = FUN_ram_40393cea(0x78,auStack_30);
      (*(code *)&SUB_ram_40010074)(0);
      if (iVar7 != 0) {
        FUN_ram_40393e36(auStack_30);
      }
      DAT_csreg_07e2 =
           (*(code *)&SUB_ram_400109f0)
                     (DAT_csreg_07e2 * 0x78,(int)((ulonglong)DAT_csreg_07e2 * 0x78 >> 0x20),
                      uStack_34,0);
      return;
    }
  } while( true );
}

