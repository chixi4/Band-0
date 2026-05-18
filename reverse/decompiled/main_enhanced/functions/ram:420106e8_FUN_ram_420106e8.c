
void FUN_ram_420106e8(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 auStack_40 [12];
  undefined4 uStack_34;
  undefined1 auStack_30 [24];
  
  iVar3 = FUN_ram_40390f58();
  if (iVar3 == 0x28) {
    uVar4 = FUN_ram_40394d50();
    FUN_ram_40394cda(1,uVar4);
    FUN_ram_40394e4c(1);
    puStack_44 = &DAT_ram_60008000;
    uStack_48 = 0;
    uVar5 = FUN_ram_40394e16();
    (*(code *)&SUB_ram_40010288)(&uStack_48);
    (*(code *)&SUB_ram_4001029c)(&uStack_48);
    iVar3 = 3;
    iVar2 = 1;
    uVar4 = (*(code *)&SUB_ram_400109f0)
                      (uVar5 * 0x640,(int)((ulonglong)uVar5 * 0x640 >> 0x20),1000,0);
    (*(code *)&SUB_ram_40010284)(&uStack_48,0,uVar4,4);
    (*(code *)&SUB_ram_4001028c)(&uStack_48);
    iVar6 = FUN_ram_40394dfc();
    do {
      bVar1 = false;
      if (iVar2 == 1) {
        do {
          FUN_ram_40394ca0();
          iVar7 = FUN_ram_403958d4(2,3000);
          if (iVar7 != 0) {
            bVar1 = false;
            goto LAB_ram_420107d0;
          }
          iVar7 = iVar3 + -1;
          bVar1 = 0 < iVar3;
          iVar3 = iVar7;
        } while (bVar1);
        iVar2 = 0;
        bVar1 = true;
      }
LAB_ram_420107d0:
      FUN_ram_40394d60(iVar2);
      if ((bVar1) || ((iVar6 == 1 && (iVar2 != 1)))) {
        FUN_ram_40394cbe();
      }
      iVar7 = FUN_ram_403958d4(0,3000);
    } while (iVar7 == 0);
    FUN_ram_40394796();
    iVar3 = FUN_ram_40394e16();
    (*(code *)&SUB_ram_40010288)(&uStack_48);
    (*(code *)&SUB_ram_4001029c)(&uStack_48);
    (*(code *)&SUB_ram_40010284)(&uStack_48,0,iVar3 * 9,4);
    (*(code *)&SUB_ram_4001028c)(&uStack_48);
    FUN_ram_40394ee6(auStack_40);
    iVar3 = FUN_ram_40394e84(0x78,auStack_30);
    if (iVar3 != 0) {
      (*(code *)&SUB_ram_40010074)(0);
      FUN_ram_40394fd0(auStack_30);
      DAT_csreg_07e2 =
           (*(code *)&SUB_ram_400109f0)
                     (DAT_csreg_07e2 * 0x78,(int)((ulonglong)DAT_csreg_07e2 * 0x78 >> 0x20),
                      uStack_34,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

