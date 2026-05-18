
void FUN_ram_4207b062(int param_1)

{
  int iVar1;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &DAT_ram_60008000;
  uStack_18 = 0;
  (*(code *)&SUB_ram_4001027c)(&uStack_18,0,0,0);
  iVar1 = FUN_ram_40393c7c();
  (*(code *)&SUB_ram_40010288)(&uStack_18);
  (*(code *)&SUB_ram_40010284)(&uStack_18,0,(uint)(iVar1 * param_1) / 1000,4);
  (*(code *)&SUB_ram_40010290)(&uStack_18);
  (*(code *)&SUB_ram_4001028c)(&uStack_18);
  return;
}

